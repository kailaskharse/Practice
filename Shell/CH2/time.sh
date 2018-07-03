#!/bin/bash

echo "Todays Date and time:"; date | tee -a log.txt

echo "\nList of Logged in Users:"; who -all | tee -a log.txt
