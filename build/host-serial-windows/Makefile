# Builds a Windows Forth application with serial port tools

TOPDIR=../..

CC = gcc

# FTDI dongle support.
# libusb.h and libusb-1.0.a must be copied into this directory
# Get the libusb 1.0 Windows binary snapshot from
#   https://sourceforge.net/projects/libusb/files
# Unpack it, then copy into this directory:
#   include/libusb.h
#   MinGW32/static/libusb-1.0.a
# If you have problems try compiling libusb from source

FTDI = y
INCS += -I.
LIBS += -L.
LIBS += -lusb-1.0

# GUI support - message boxes and file open dialog
LIBS += -lcomdlg32 -lcomctl32

CONFIG += -DBITS32 -DT16 -m32
CONFIG += -DFLOATING -DMOREFP

include $(TOPDIR)/src/app/host-serial/targets.mk
