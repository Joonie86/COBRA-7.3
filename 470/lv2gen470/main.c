#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <time.h>


#define MKA(a)	(0x8000000000000000ULL | a) 
#define MAKE_JUMP_VALUE(addr, to) ((0x12 << 26) | ((((to-(uint64_t)(addr))>>2)&0xFFFFFF) << 2))
#define MAKE_CALL_VALUE(addr, to) ((0x12 << 26) | ((((to-(uint64_t)(addr))>>2)&0xFFFFFF) << 2)) | 1

typedef struct {
	uint8_t		e_ident[16];	/* ident bytes */ 		// 00
	uint16_t	e_type;			/* file type */   	// 10
	uint16_t	e_machine;		/* target machine */	// 12
	uint32_t	e_version;		/* file version */	// 14
	uint64_t	e_entry;		/* start address */	// 18
	uint64_t	e_phoff;		/* phdr file offset */	// 20
	uint64_t	e_shoff;		/* shdr file offset */	// 28
	uint32_t	e_flags;		/* file flags */	// 30
	uint16_t	e_ehsize;		/* sizeof ehdr */	// 34
	uint16_t	e_phentsize;		/* sizeof phdr */	// 36
	uint16_t	e_phnum;		/* number phdrs */	// 38
	uint16_t	e_shentsize;		/* sizeof shdr */	// 3A
	uint16_t	e_shnum;		/* number shdrs */	// 3C
	uint16_t	e_shstrndx;		/* shdr string index */	// 3E
} __attribute__((packed)) Elf64_Ehdr;

typedef struct {
	uint32_t	p_type;		/* entry type */
	uint32_t	p_flags;	/* entry flags */
	uint64_t	p_offset;	/* file offset */
	uint64_t	p_vaddr;	/* virtual address */
	uint64_t	p_paddr;	/* physical address */
	uint64_t	p_filesz;	/* file size */
	uint64_t	p_memsz;	/* memory size */
	uint64_t	p_align;	/* memory/file alignment */
} __attribute__((packed)) Elf64_Phdr;

typedef struct {
	uint32_t	sh_name;	/* section name */
	uint32_t	sh_type;	/* SHT_... */
	uint64_t	sh_flags;	/* SHF_... */
	uint64_t	sh_addr;	/* virtual address */
	uint64_t	sh_offset;	/* file offset */
	uint64_t	sh_size;	/* section size */
	uint32_t	sh_link;	/* misc info */
	uint32_t	sh_info;	/* misc info */
	uint64_t	sh_addralign;	/* memory alignment */
	uint64_t	sh_entsize;	/* entry size if table */
} __attribute__((packed)) Elf64_Shdr ;

#define	PT_NULL		0		/* p_type */
#define	PT_LOAD		1
#define	PT_DYNAMIC	2
#define	PT_INTERP	3
#define	PT_NOTE		4
#define	PT_SHLIB	5
#define	PT_PHDR		6
#define	PT_TLS		7
#define	PT_NUM		8

#define	PF_R		0x4		/* p_flags */
#define	PF_W		0x2
#define	PF_X		0x1

#define	SHT_NULL		0		/* sh_type */
#define	SHT_PROGBITS		1
#define	SHT_SYMTAB		2
#define	SHT_STRTAB		3
#define	SHT_RELA		4
#define	SHT_HASH		5
#define	SHT_DYNAMIC		6
#define	SHT_NOTE		7
#define	SHT_NOBITS		8
#define	SHT_REL			9
#define	SHT_SHLIB		10
#define	SHT_DYNSYM		11
#define	SHT_UNKNOWN12		12
#define	SHT_UNKNOWN13		13
#define	SHT_INIT_ARRAY		14
#define	SHT_FINI_ARRAY		15
#define	SHT_PREINIT_ARRAY	16
#define	SHT_GROUP		17
#define	SHT_SYMTAB_SHNDX	18
#define	SHT_NUM			19

#define	SHF_WRITE		0x01		/* sh_flags */
#define	SHF_ALLOC		0x02
#define	SHF_EXECINSTR		0x04
#define	SHF_MERGE		0x10
#define	SHF_STRINGS		0x20
#define	SHF_INFO_LINK		0x40
#define	SHF_LINK_ORDER		0x80
#define	SHF_OS_NONCONFORMING	0x100
#define	SHF_GROUP		0x200
#define	SHF_TLS			0x400

#define BUF1_SIZE	12*1024*1024
#define BUF2_SIZE	65536
#define BUF3_SIZE	512

uint8_t buf1[BUF1_SIZE];
uint8_t buf2[BUF2_SIZE];
uint8_t buf3[BUF3_SIZE];

static uint16_t swap16(uint16_t data)
{
	return (((data&0xFF) << 8) | ((data>>8)&0xFF));
}

static uint32_t swap32(uint32_t data)
{
	uint32_t ret = (data << 24) & 0xff000000;
	ret |= (data << 8) & 0x00ff0000;
	ret |= (data >> 8) & 0x0000ff00;
	ret |= (data >> 24) & 0x000000ff;
	return ret;
}

static uint64_t swap64(uint64_t data)
{
	uint64_t ret = (data << 56) & 0xff00000000000000ULL;
	ret |= ((data << 40) & 0x00ff000000000000ULL);
	ret |= ((data << 24) & 0x0000ff0000000000ULL);
	ret |= ((data << 8) & 0x000000ff00000000ULL);
	ret |= ((data >> 8) & 0x00000000ff000000ULL);
	ret |= ((data >> 24) & 0x0000000000ff0000ULL);
	ret |= ((data >> 40) & 0x000000000000ff00ULL);
	ret |= ((data >> 56) & 0x00000000000000ffULL);
	return ret;
}

static void command3(char *cmd, char *arg1, char *arg2, char *arg3)
{
	char buf[2048];
	
	snprintf(buf, sizeof(buf), "%s %s %s %s", cmd, arg1, arg2, arg3);
	system(buf);
}

static void command15(char *cmd, char *arg1, char *arg2, char *arg3, char *arg4, char *arg5, char *arg6, char *arg7, char *arg8, char *arg9, char *arg10, char *arg11, char *arg12, char *arg13, char *arg14, char *arg15)
{
	char buf[2048];
	
	snprintf(buf, sizeof(buf), "%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s", cmd, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13,arg14, arg15);
	system(buf);
}

/*static void command3(char *cmd, char *arg1, char *arg2, char *arg3)
{
	char buf[2048];
	
	snprintf(buf, sizeof(buf), "%s %s %s %s", cmd, arg1, arg2, arg3);
	system(buf);
}

static void patch_self(char *src, char *dst, uint32_t sh_offset, uint32_t data_address)
{
	char *buf;
	FILE *f;
	
	f = fopen(src, "rb");
	if (!f)
	{
		printf("Cannot open %s\n", src);
		exit(-1);
	}
	
	fseek(f, 0, SEEK_END);
	int size = ftell(f);
	fseek(f, 0, SEEK_SET);
	
	buf = malloc(size);
	
	fread(buf, 1, size, f);
	fclose(f);
	
	Elf64_Phdr *phdr = (Elf64_Phdr *)(buf+0xD0);
	
	phdr->p_memsz = swap64(swap64(phdr->p_memsz) + ADDITIONAL_SIZE);
	
	Elf64_Shdr *shdr = (Elf64_Shdr *)(buf+sh_offset);
	
	while (1)
	{
		uint64_t flags = swap64(shdr->sh_flags);
		
		if (swap64(shdr->sh_addr) == data_address)
		{
			// Grant execution on data
			shdr->sh_flags = swap64(flags | SHF_EXECINSTR); 
			shdr->sh_size = swap64(swap64(shdr->sh_size)+ADDITIONAL_SIZE);
			break;
		}
		
		if (flags & SHF_EXECINSTR)
		{
			// Write permissions on code
			shdr->sh_flags = swap64(flags | SHF_WRITE);
		}
		
		shdr++;
	}
	
	f = fopen(dst, "wb");
	fwrite(buf, 1, size, f);
	fclose(f);
}*/
static void patch_elf(char *elf, char *stage0, char *bin, uint64_t address, uint64_t stage0_addr)
{
	uint64_t elf_size, bin_size;
	Elf64_Ehdr *ehdr;
	Elf64_Phdr *phdr;
	Elf64_Shdr *shdr;
	FILE *f = fopen(elf, "rb");	
	
	if (!f)
	{
		fprintf(stderr, "Cannot open %s\n", elf);
		exit(-1);
	}
	
	elf_size = fread(buf1, 1, BUF1_SIZE, f);
	fclose(f);
	
	f = fopen(bin , "rb");
	if (!f)
	{
		fprintf(stderr, "Cannot open %s\n", bin);
		exit(-1);
	}
	
	bin_size = fread(buf2, 1, BUF2_SIZE, f);
	fclose(f);
	
	f = fopen(stage0, "rb");
	if (!f)
	{
		fprintf(stderr, "Cannot open %s\n", stage0);
		exit(-1);
	}
	
	memcpy(buf1+0x10000+stage0_addr, buf3, fread(buf3, 1, sizeof(buf3), f));
	fclose(f);
	
	ehdr = (Elf64_Ehdr *)buf1;
	phdr = (Elf64_Phdr *)(buf1+0x40);
	
	ehdr->e_phnum = swap16(swap16(ehdr->e_phnum)+1);
	//ehdr->e_phoff = swap64(0x140);
	
	//memcpy(buf1+0x140, phdr, 0x70);
	//phdr = (Elf64_Phdr *)(buf1+0x1b0);
	phdr = (Elf64_Phdr *)(buf1+0xb0);
	
	phdr->p_type = swap32(PT_LOAD);
	phdr->p_flags = swap32(PF_R | PF_W | PF_X);
	//phdr->p_offset = swap64(0x200);
	phdr->p_vaddr = phdr->p_paddr = swap64(MKA(address));
	phdr->p_filesz = swap64(bin_size);
	phdr->p_memsz = swap64(0x10000);
	phdr->p_align = swap64(0x10000);
	
	ehdr->e_shnum = swap16(swap16(ehdr->e_shnum)+1);
	
	shdr = (Elf64_Shdr *)(buf1+elf_size);
	shdr->sh_name = 0;
	shdr->sh_type = swap32(SHT_PROGBITS);
	shdr->sh_flags = swap64(SHF_ALLOC | SHF_WRITE | SHF_EXECINSTR);
	shdr->sh_size = swap64(bin_size);
	shdr->sh_addralign = swap64(0x100);
	shdr->sh_link = 0;
	shdr->sh_info = 0;
	shdr->sh_entsize = 0;
	
	elf_size += 0x40;
	elf_size = (elf_size + 0x10000)& ~0xffff;
	
	phdr->p_offset = swap64(elf_size);
	shdr->sh_size = swap64(elf_size);
	
	//
	shdr->sh_size = phdr->p_filesz;
	shdr->sh_offset = phdr->p_offset;
	shdr->sh_addr = phdr->p_vaddr;
	
	memcpy(buf1+elf_size, buf2, bin_size);
	elf_size += bin_size;
	
	
	f = fopen(elf, "wb");
	if (!f)
	{
		fprintf(stderr, "Cannot open %s for write.\n", elf);
		exit(-1);
	}
	
	fwrite(buf1, 1, elf_size, f);
	fclose(f);
}

int main(int argc, char *argv[])
{
	char *payload, *stage0, *self_input, *self_output;
	uint32_t payload_addr;
	uint32_t stage0_addr;
		
	if (argc < 7)
	{
		printf("Usage: %s stage0 stage1 self_input self_output payload_addr stage0_addr\n", argv[0]);
		return -1;
	}
	
	stage0 = argv[1];
	payload = argv[2];
	self_input = argv[3];
	self_output = argv[4];
	sscanf(argv[5], "0x%x", &payload_addr);
	sscanf(argv[6], "0x%x", &stage0_addr);
	
	command3("scetool", "--decrypt", self_input, "temp.elf");	
	patch_elf("temp.elf", stage0, payload, payload_addr, stage0_addr);	
	command15("scetool", "-v", "--sce-type=SELF", "--compress-data=TRUE", "--compress-data=TRUE", "--skip-sections=FALSE", 
		 "--self-auth-id=1050000003000001", "--self-add-shdrs=TRUE", "--self-vendor-id=05000002", "--self-type=LV2", 
	         "--self-fw-version=0004007000000000", "--key-revision=0", "--self-app-version=0004007000000000", "--encrypt", "temp.elf", self_output);
	
	return 0;
}
