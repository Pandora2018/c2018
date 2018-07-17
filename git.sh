#!/bin/bash

gitPushUrl="https://github.com/pandora2018/"

operation:
	git status
	echo "********************"
	echo "Choose you operation"
	echo "********************"
	echo "1 -- git add file"
	echo "2 -- git remove file"
	echo "3 -- git commit file"
	echo "4 -- git push to github.com"
	echo "5 -- finish"
	echo "********************"

	sleep 5

	read -p "Select you operation(1 to 5):" num

	if [ num -eq 1 ]; then
		read -p "add file name:" addFile
		echo $addFile
		git add $addFile
		goto operation
	elif [ num -eq 2 ]; then
		read -p "remove file name:" rmFile
		echo $rmFile
		git rm $rmFile
		goto operation
	elif [ num -eq 3 ]; then
		read -p "entor you commit information:" commitInfo
		echo $commitInfo
		git commit -m $commitInfo
		goto operation
	elif [ num -eq 4 ]; then
		gitPushUrl="${gitPushUrl}"c2018.git
		echo ${gitPushUrl}
		git push ${gitPushUrl} > /etc/null
		goto operation
	elif [ num -eq 5 ]; then
		echo "git operation finish"
		exite 100
	fi
