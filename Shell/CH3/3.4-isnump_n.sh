#!/bin/bash
#
#Script to see whether argument is positive or negarive
#
if [ $# -eq 0 ]
then
	echo "$0 : You must give one integer"
exit 1
fi

if test $1 -gt 0
then
	echo "$1 numver is positive"
else
	echo "$1 is negaive"
fi
