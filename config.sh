#!/bin/sh

# install software
sudo apt install -y tmux
sudo apt install -y bc    # An arbitrary precision calculator language
# sudo apt install -y gdb

cp -v ./.gitconfig ~
cp -v ./.vimrc ~
cp -v ./.tmux.conf ~
cp -v ./.gdbinit ~

# alias
alias la='ls -lAh'
alias gitpush='git push https://github.com/pandora2018/c2018.git'
alias gitclone='git clone https://github.com/pandora2018/c2018.git'
alias gitlog='git log --graph --pretty=format:'%Cred%h%Creset -%C(yellow)%d%Creset %s %Cgreen(%cr) %C(bold blue)<%an>%Creset' --abbrev-commit --date=relative'

echo "All operator running finish......"
