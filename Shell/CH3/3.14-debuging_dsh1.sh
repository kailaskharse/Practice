#!/bin/bash
#
#Script to show debug on shell
# eg. sh -x/-v script.sh   and    bash -x/-v script.sh
#	-x is used used to expanding each simple-command, bash display expeneded value
#	-v pirnt shell iput lines as they are read ( used for comples script)
#
tot=`expr $1 + $2`
echo $tot
