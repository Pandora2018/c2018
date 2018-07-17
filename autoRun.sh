#!/bin/sh

# install necessary software
sudo apt install -y tmux > /dev/null

cp ./.gitconfig ~
cp ./.vimrc ~
