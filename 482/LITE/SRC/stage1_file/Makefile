
clean:
	rm -f *DEBUG *.o *.elf *.self *.482 *.bin *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o

all:
	rm -f *.o *.elf *.self *.482 *.bin *.482c *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
	make -f Makefile_482C --no-print-directory

	rm -f *.o *.elf *.482 *.bin *.482c *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
	make -f Makefile_482C_dbg --no-print-directory

	rm -f *.o *.elf  *.482 *.bin *.482c *.482d *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o

dbg:
	rm -f *.o *.elf *.self *.482 *.bin *.482c *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
	make -f Makefile_482C_dbg --no-print-directory

	rm -f *.o *.elf  *.482 *.bin *.482c *.482d *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o

re:
	rm -f *.o *.elf *.self *.482 *.bin *.482c *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
	make -f Makefile_482C --no-print-directory

	rm -f *.o *.elf  *.482 *.bin *.482c *.482d *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
