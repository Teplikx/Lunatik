#!/bin/bash
clear
cd "$HOME/Lunatik" || exit 1

TOKEN=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

rm -rf .git

git init -b main

git config user.email "s.t.a.l.k.e.riat1905@gmail.com"
git config user.name "Teplikx"

git remote add origin "https://Teplikx:${TOKEN}@github.com/Teplikx/Lunatik.git"

echo "08_It/Linux/configs/.github_token" >> .gitignore

git add .
git commit -m "Fresh backup: $(date +'%Y-%m-%d %H:%M:%S')"
git push -f origin main
