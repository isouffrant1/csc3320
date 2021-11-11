#!/bin/bash
echo "Please type in a command"
read cmd_in
if grep -q $cmd_in mandatabase.txt; then
grep $cmd_in mandatabase.txt;
else
echo "Sorry, I cannot help you"
fi
