#!/bin/bash

set -e

echo "Installing..."

echo "=====================================" >> logs.txt
echo "Logs of install. Date: $(date +'%Y-%m-%d %H:%M:%S')" &>> logs.txt
echo "=====================================" >> logs.txt

echo "Deleting old configs..." 
rm -f dmenu/config.h dwm/config.h slstatus/config.h st/config.h >> logs.txt

echo "Compile WM and components..."
cd dmenu
sudo make clean install >> logs.txt
cd ../dwm
sudo make clean install >> logs.txt
cd ../slstatus
sudo make clean install >> logs.txt
cd ../st
sudo make clean install >> logs.txt

echo "Done!"
