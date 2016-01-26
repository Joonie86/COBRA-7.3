
clean:
	rm -f *DEBUG *.o *.elf *.self *.478 *.bin *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o

all:
	rm -f *.o *.elf *.self *.478 *.bin *.478c *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
	make -f Makefile_478C --no-print-directory

	rm -f *.o *.elf *.478 *.bin *.478d *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
	make -f Makefile_478D --no-print-directory

	rm -f *.o *.elf *.478 *.bin *.478c *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
	make -f Makefile_478C_dbg --no-print-directory

	rm -f *.o *.elf *.478 *.bin *.478d *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
	make -f Makefile_478D_dbg --no-print-directory

	rm -f *.o *.elf  *.478 *.bin *.478c *.478d *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o

dbg:
	rm -f *.o *.elf *.self *.478 *.bin *.478c *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
	make -f Makefile_478C_dbg --no-print-directory

	rm -f *.o *.elf *.478 *.bin *.478d *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
	make -f Makefile_478D_dbg --no-print-directory

	rm -f *.o *.elf  *.478 *.bin *.478c *.478d *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o

re:
	rm -f *.o *.elf *.self *.478 *.bin *.478c *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
	make -f Makefile_478C --no-print-directory

	rm -f *.o *.elf *.478 *.bin *.478d *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
	make -f Makefile_478D --no-print-directory

	rm -f *.o *.elf  *.478 *.bin *.478c *.478d *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
