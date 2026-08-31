#!/bin/sh

setxkbmap 'us,ua' -option "grp:lwin_toggle" &

feh --bg-fill Lunatik/05_It/Linux/wallpapers/* --randomize

slstatus &

picom -b &

obsidian &

exec dwm
