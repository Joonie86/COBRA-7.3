
clean:
	rm -f *DEBUG *.o *.elf *.self *.475 *.bin *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o

all:
	rm -f *.o *.elf *.self *.475 *.bin *.475c *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
	make -f Makefile_475C --no-print-directory

	rm -f *.o *.elf *.475 *.bin *.475d *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
	make -f Makefile_475D --no-print-directory

	rm -f *.o *.elf *.475 *.bin *.475c *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
	make -f Makefile_475C_dbg --no-print-directory

	rm -f *.o *.elf *.475 *.bin *.475d *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
	make -f Makefile_475D_dbg --no-print-directory

	rm -f *.o *.elf  *.475 *.bin *.475c *.475d *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o

dbg:
	rm -f *.o *.elf *.self *.475 *.bin *.475c *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
	make -f Makefile_475C_dbg --no-print-directory

	rm -f *.o *.elf *.475 *.bin *.475d *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
	make -f Makefile_475D_dbg --no-print-directory

	rm -f *.o *.elf  *.475 *.bin *.475c *.475d *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o

re:
	rm -f *.o *.elf *.self *.475 *.bin *.475c *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
	make -f Makefile_475C --no-print-directory

	rm -f *.o *.elf *.475 *.bin *.475d *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
	make -f Makefile_475D --no-print-directory

	rm -f *.o *.elf  *.475 *.bin *.475c *.475d *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
