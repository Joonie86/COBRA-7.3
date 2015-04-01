CC		:= ppu-gcc
LIBSDIR         =
LIBS            =
TARGET		= stage0_base
INCLUDE		= ../lv2/include ../lv1/include ../debug/include

CFLAGS = -ffunction-sections -fdata-sections -Os -m64 -fno-builtin -fno-exceptions \
			   -Os -Wall $(foreach dir,$(INCLUDE),-I$(dir)) -ffreestanding -DFIRMWARE_4_66
CFLAGS += --std=gnu99
LDFLAGS=-nostartfiles -nostdlib -mbig-endian
LDFLAGS= -nostdlib -nodefaultlibs -Wl,-static -Wl,-s -L. $(foreach dir,$(LIBSDIR),-L$(dir)) $(LIBS) -Wl,--gc-sections 

OBJS = stage0_base.o

all: $(TARGET).bin

%.bin: %.elf
	
	
$(TARGET).elf: $(OBJS) 
	ppu-objcopy -O binary stage0_base.o stage0_base.cex
	rm -f *.o

%.o: %.S
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f *.o *.bin 
