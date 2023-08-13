# dol
Dynamic DLL to DOL toolkit for Riivolution

# Usage:

The usage for this toolkit is to provide seamless integration of Dynamic Link Library injections 
into a readable Nintendo Gamecube/Wii format.

All of which within the best interest of allowing for mods created for Dolphin Emulator to be easily accessible.

# Building:

To build the project, there are two methods associated with the build method

``makefile``

The provided makefile in the [src](https://github.com/hazzaaclark/dol/blob/main/src/Makefile) folder dictates 
the usage of using [libogc](https://github.com/devkitPro/libogc) and [devkitpro](https://github.com/devkitPro/installer)
creating an ``elf`` file from the ``dll``

``main.c``

the main executable which will be responsible for converting the ``elf`` file to a executable ``dol``

# Sources:

[libogc](https://github.com/devkitPro/libogc)

[devkitpro](https://github.com/devkitPro/installer)
