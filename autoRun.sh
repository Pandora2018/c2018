#!/bin/sh

# install necessary software
sudo apt install -y tmux

cp ./.gitconfig ~
cp ./.vimrc ~
cp ./.tmux.config ~

echo "All operator running finish......"
