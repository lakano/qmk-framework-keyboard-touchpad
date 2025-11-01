# qmk-framework-keyboard-touchpad
QMK Keyboard configuration to uses with the forked QMK code of Michał Szczepaniak ( https://github.com/Michal-Szczepaniak/qmk_firmware/tree/add-touchpad ). Thanks to him, Arya and MPartel. 

# Install
For thoses like me that own a RP2040 controller created by Arya ( https://www.tindie.com/products/crimier/framework-input-cover-controller/ ) :
Hold the « c » key of the keyboard while you plug it.
A new connected drive should appear, paste the file framework.uf2 inside
The drive should disconnect and the keyboard + touchpad should works

# Build it by yourself
Clone the QMK fork of Michał Szczepaniak ( https://github.com/Michal-Szczepaniak/qmk_firmware )
=> git clone https://github.com/Michal-Szczepaniak/qmk_firmware

Fetch the submodules:
=> git submodule update --init --recursive

Go the add-touchpad branch
=> git switch add-touchpad

Copy my folder framework/ inside keyboards/ folder

Setup your QMK environnement 
=> https://docs.qmk.fm/newbs_getting_started

Build the uf2
=> qmk compile -kb framework -km default
