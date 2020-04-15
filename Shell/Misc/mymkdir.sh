#!/bin/bash
dir="$1"
if [ -d "/home/sai/Practice/Shell/Misc/$dir" ];
then
	echo "The Directory Exist"
	cd /home/sai/Practice/Shell/Misc/$dir
	echo $PWD
	exit
else
	echo "Directory Does not Exist"
	flag=0
fi

if [ $flag -eq 0 ]
then
	mkdir -p $1
	cd /home/sai/Practice/Shell/Misc/$dir
fi

