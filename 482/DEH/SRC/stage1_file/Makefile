
clean:
	rm -f *DEBUG *.o *.elf *.self *.482 *.bin *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o

all:
	rm -f *.o *.elf *.self *.482 *.bin *.482E *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
	make -f Makefile_482E --no-print-directory

	rm -f *.o *.elf *.482 *.bin *.482E *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
	make -f Makefile_482E_dbg --no-print-directory

	rm -f *.o *.elf  *.482 *.bin *.482E *.482d *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o

dbg:
	rm -f *.o *.elf *.self *.482 *.bin *.482E *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
	make -f Makefile_482E_dbg --no-print-directory

	rm -f *.o *.elf  *.482 *.bin *.482E *.482d *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o

re:
	rm -f *.o *.elf *.self *.482 *.bin *.482E *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
	make -f Makefile_482E --no-print-directory

	rm -f *.o *.elf  *.482 *.bin *.482E *.482d *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
