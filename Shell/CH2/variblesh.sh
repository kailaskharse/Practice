#!/bin/bash
echo "Welcome to Variables in Shell script\n"
############   README   ##############
# Types of Variables: 1. System Variables 2. User Defined Variables(UDV)
#+ List of Sys Var: BASH, BASH_VERSION, COLUMNS, HOME, LOGNAME, OSTYPE
#		PATH, PS1(Our Prompt Settings), PWD, SHELL, USERNAME
#
#	In below file in you want to run any script make the if section true to run this script
#
#VI Command: YY--> Copy, p--> Paste, dd--> Delete, cc--> Cut
if false 
then
#---------------------------------------------------------------
#Adding two number and storing it in third variable
#---------------------------------------------------------------
#Adding two number and storing it in third variable
echo "Enter the Number x="
read x
echo "Enter the number Y="
read y
z=`expr $x + $y`
echo Output z=$z  #this scopr of variable in program is only 
#+ for this program
#---------------------------------------------------------------
fi

#
#
#
#
#---------------------------------------------------------------

#---------------------------------------------------------------
