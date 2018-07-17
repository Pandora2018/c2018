#!/bin/bash

gitPushUrl="https://github.com/pandora2018/"

function choose()
{
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
}
	choose

	read -p "Select you operation(1 to 5):" num

	if [ ${num} -eq 1 ]; then
		read -p "add file name:" addFile
		echo $addFile
		git add $addFile
		echo $?
		choose
	elif [ ${num} -eq 2 ]; then
		read -p "remove file name:" rmFile
		echo $rmFile
		git rm $rmFile
		choose
	elif [ ${num} -eq 3 ]; then
		read -p "entor you commit information:" commitInfo
		echo $commitInfo
		git commit -m $commitInfo
		choose
	elif [ ${num} -eq 4 ]; then
		read -p "ecter you repositories name:" repositoriesName
		gitPushUrl=${gitPushUrl}${repositoriesName}
		echo ${gitPushUrl}
		git push ${gitPushUrl}
		choose
	elif [ ${num} -eq 5 ]; then
		echo "git operation finish"
		exite 100
	fi
