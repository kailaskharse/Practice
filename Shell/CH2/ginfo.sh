#!/bin/bash

#Scirpt to pring the suer information, who currnetly loggedi n, curent date and time

#
clear
echo "hello $USER"
echo "Today is \c "; date
echo "Number of user Login: \c"; who|wc -l
echo "calender"
cal
exit 0
