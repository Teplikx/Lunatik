#!/bin/bash

set -e

echo "Copying..."

echo "=====================================" >> logs.txt
echo "Logs of copying. Date: $(date +'%Y-%m-%d %H:%M:%S')" &>> logs.txt
echo "=====================================" >> logs.txt

sudo cp -r tlp.conf /etc/ &>> logs.txt

sudo cp      -r .config      ~/    &>> logs.txt
sudo cp         .zshrc       ~/    &>> logs.txt
sudo cp         .xinitrc     ~/    &>> logs.txt

