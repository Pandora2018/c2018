#!/bin/sh

# install software
sudo apt install -y tmux
sudo apt install -y bc    # An arbitrary precision calculator language
# sudo apt install -y gdb

# A collection of useful .gitignore templates
git clone https://github.com/github/gitignore ~/gitignore

cp -v ~/gitignore/C.gitignore .
mv C.gitignore .gitignore
echo "*.swp" >> .gitignore

cp -v ./.gitconfig ~
cp -v ./.vimrc ~
cp -v ./.tmux.conf ~
cp -v ./.gdbinit ~

# alias
alias la='ls -lAh'

echo "All operator running finish......"
