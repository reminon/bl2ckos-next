# BL2CK OS Next

A fork of [AKMenu-Next](https://github.com/R-YaTian/akmenu-next) combining the modern DSpico/nds-bootstrap frontend with BL2CK OS enhancements.

## Based on

- [AKMenu-Next](https://github.com/R-YaTian/akmenu-next) by coderkei & R-YaTian
- [BL2CK OS](https://github.com/reminon/BL2CKOS) by BL2CK
- [lifehackerhansol's akmenu4 port](https://github.com/lifehackerhansol/akmenu4)

## Features

- Frontend for nds-bootstrap and Pico-Loader
- Direct flashcart launch (AK2i, Slot-1)
- DSpico native support with dual filesystem (fat:/ and sd:/)
- Autorun last ROM
- Per-ROM settings (loader, save type, flags)
- English and Japanese language support
- BL2CK OS extended save chip detection (WIP)

## Building

Requires devkitARM and libnds from devkitPro.

    make

## Credits

- BL2CK - original BL2CK OS kernel
- coderkei & R-YaTian - AKMenu-Next
- lifehackerhansol - akmenu4 open source port
- yellow wood goblin - original WOOD/WAIO
- Acekard - original Acekard R.P.G
- devkitPRO - toolchain
