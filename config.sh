#!/bin/sh

# install necessary software
sudo apt install -y tmux
# sudo apt install -y gdb

cp -v ./.gitconfig ~
cp -v ./.vimrc ~
cp -v ./.tmux.conf ~
cp -v ./.gdbinit ~

# alias
alias la='ls -lAh'
alias gitpush='git push https://github.com/pandora2018/c2018.git'
alias gitclone='git clone https://github.com/pandora2018/c2018.git'

echo "All operator running finish......"
