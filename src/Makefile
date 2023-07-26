## COPYRIGHT (C) HARRY CLARK 2023

## Dynamic DLL to DOL toolkit for Riivolution

## THIS FILE USES DEVKITPRO IN ORDER TO CONVERT THE CORRESPONDING FILE FORMATS
## HOW THIS WORKS IS THROUGH THE DYNAMIC LINKER AND COMPILER SETTINGS ESTABLISHED BV DVP

## WII TOOLCHAIN:

DEVKITPRO := /path/to/devkitPro               ## MAIN LIBRARY ACCESS
DEVKITPPC := $(DEVKITPRO)/devkitPPC           ## DVP'S POWER PC EMU
LIBOGC := $(DEVKITPRO)/libogc

## COMPILER AND LINKER:

CC := $(DEVKITPPC)/bin/powerpc-eabi-gcc
CFLAGS := -g -O2 -Wall -Werror
LDFLAGS := -g -Wl,-Map=output.map


## DIRS AND FILES:

SRC_DIR := src
BUILD_DIR := build
DLL_SRC := $(SRC_DIR)/ dllmain.c               ## THIS IS ASSUMING THAT THE PROJECT IS BUILT WITH THE DLL TEMPLATE
DLL_OBJ := $(BUILD_DIR)/dllmain.o              ## THE MACHINE GEN OBJECT FILE WHICH WILL BE PARSED INTO THE CORRESPONDING FILE FORMAT BASED ON PPC
OUTPUT_DOL := $(BUILD_DIR)/result.dol


## WII:

LIBS := -L$(LIBOGC)/lib/wii -logc -lm


## DEFAULT COMPILATION:

all: $(OUTPUT_DOL)

$(OUTPUT_DOL): $(DLL_OBJ)
	$(CC) $(LDFLAGS) -o $@ $< $(LIBS)

$(DLL_OBJ): $(DLL_SRC)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf $(BUILD_DIR)