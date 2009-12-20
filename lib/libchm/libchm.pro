HEADERS += 	chm_lib.h \
			lzx.h
SOURCES +=  chm_lib.c \
			lzx.c 
TARGET = chm
DESTDIR = ../

CONFIG += warn_off \
          staticlib

TEMPLATE = lib

QMAKE_CFLAGS += -DCHM_MT -DCHM_USE_PREAD -DCHM_USE_IO64 -g -DDMALLOC_DISABLE
QMAKE_LFLAGS_SHLIB += -lpthread

win32 {
 QMAKE_CFLAGS += -D ffs=__builtin_ffs
}
