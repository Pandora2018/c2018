#!/bin/sh

# install necessary software
sudo apt install -y tmux
sudo apt install -y gdb

cp -v ./.gitconfig ~
cp -v ./.vimrc ~
cp -v ./.tmux.config ~
cp -v ./.gdbinit ~

# alias
alias la='ls -lAh'

echo "All operator running finish......"
