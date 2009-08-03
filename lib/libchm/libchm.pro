HEADERS += 	chm_lib.h \
			lzx.h
SOURCES +=  chm_lib.c \
			lzx.c 
TARGET = chm
DESTDIR = ./

CONFIG += warn_off \
          staticlib

TEMPLATE = lib

QMAKE_CFLAGS += -D ffs=__builtin_ffs
