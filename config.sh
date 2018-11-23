#!/bin/sh

sudo apt install -y tmux
sudo apt install -y ascii

# An arbitrary precision calculator language
# sudo apt install -y bc

# gdb debug
# sudo apt install -y gdb

cp -v ./.gitconfig ~
cp -v ./.vimrc ~
cp -v ./.tmux.conf ~
cp -v ./.gdbinit ~

echo "All operator running finish......"
