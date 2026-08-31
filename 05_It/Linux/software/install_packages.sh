#!/bin/bash

set -e

echo "Installing..."

echo "=====================================" >> logs.txt
echo "Logs of install. Date: $(date +'%Y-%m-%d %H:%M:%S')" &>> logs.txt
echo "=====================================" >> logs.txt

sudo pacman -S --needed - < packages.txt
sudo pacman -U --needed obsidian-1.12.7-3-x86_64.pkg.tar.zst
