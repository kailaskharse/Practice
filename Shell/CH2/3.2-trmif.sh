#
#Script to test rm command and exit status 
#
#!/bin/bash
if rm $1
then
echo "$1 file deleted"
fi
