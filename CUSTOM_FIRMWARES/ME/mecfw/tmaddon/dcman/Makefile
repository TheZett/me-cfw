release: all
    #psp-build-exports -s $(PRX_EXPORTS)
	psp-packer -x -d $(PSP_FW_VERSION) -i $(TARGET).prx
	bin2c $(TARGET).prx $(DATADIR)/$(TARGET)_bin.h $(TARGET)
	sed -i "/int/d" $(DATADIR)/$(TARGET)_bin.h
	rm -f *.elf *.o *.prx sfiles/*.o

clean: reset
reset:
	rm -f *.elf *.o sfiles/*.o $(TARGET).prx $(DATADIR)/$(TARGET)_bin.h

TARGET = dcman
OBJS = main.o exports.o sfiles/stubs.o

INCDIR = ../../include
DATADIR=../installer/data
CFLAGS = -Os -G0 -Wall -fshort-wchar -fno-pic -mno-check-zero-division 
CXXFLAGS = $(CFLAGS) -fno-exceptions -fno-rtti
ASFLAGS = $(CFLAGS)

PSP_FW_VERSION = $(TARGET_FW)

BUILD_PRX = 1
PRX_EXPORTS = exports.exp

USE_KERNEL_LIBC = 1
USE_KERNEL_LIBS = 1

LIBDIR = ../../lib
LDFLAGS = -mno-crt0 -nostartfiles
LIBS = -lpspsystemctrl_kernel -lpspnand_driver

PSPSDK=$(shell psp-config --pspsdk-path)
include $(PSPSDK)/lib/build_prx.mak
