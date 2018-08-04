#!/bin/sh

# install necessary software
sudo apt install -y tmux

cp -v ./.gitconfig ~
cp -v ./.vimrc ~
cp -v ./.tmux.config ~
cp -v ./.gdbinit ~

echo "All operator running finish......"
