#!/bin/bash
#
#Program to demostratte nested if-else-fi
#
osch=0

echo "1. Unix (sun OS)"
echo "2. Linux (Read Hat)"
echo -n "Select your OS Choice [1 or 2]? "
read osch

if [ $osch -eq 1 ] ; then
	echo "You pick up UNIX (Sun OS)"
else #### nested if i.e if within if####
	if [ $osch -eq 2 ] ; then
		echo "YOu Pick up LINUX (Red Hat)"
	else 
		echo "What you don't like UNIX/Linux OS."
	fi
fi
