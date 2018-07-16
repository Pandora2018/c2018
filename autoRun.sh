#!/bin/sh

cp ./.gitconfig ~
cp ./.vimrc ~

echo -e "1 -- git push"
echo -e "2 -- git clone"

read -p "Select you operation:" num

url="https://github.com/pandora2018/c2018.git"

if [ $num -eq 1 ]; then
	read -p "input add file:" fileName
	git add $fileName
	
	read -p "commit connect:" commit
	git commit -m $commit
	
	git push $url 

	if [ $? -eq 0 ]; then
		echo " github is ok!"
	fi

elif [ $num -eq 2 ]; then
	git clone $url 
fi


if [ $? -eq 0 ]; then
	echo "shell script run successfully!"
fi
