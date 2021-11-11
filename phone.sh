#!/bin/bash

while :
do
clear

echo "1. Add"
echo "2. Search"
echo "3. Delete"
echo "4. View"
echo "5. Exit"
read -p "Pick a number 1-5: " user_input
clear

case $user_input in
1)echo "Add number in contact list"
read -p "Type in name: " name
echo "Received"
read -p "Type in number: " number
clear
echo "New contact info: "
echo "$name- $number" >> phonedir.log
echo "Saved" ;;
2)echo "Search"
read -p "Enter contact name" search_query
clear
echo "search result"
grep -i $search_query phonedir.log;;
3)echo "Delete"
read -p "Enter contact name" delete_string
sed -i -e " /$delete_string/d" phonedir.log
echo "delete number";;
4)echo "Phone Directory"
echo ""
cat phonedir.log;;
5)break;;
*)echo "No option";;
esac;
read -p "Enter number 5 to exit or enter something to go back to the menu" final_exit
if [ $final_exit -eq 5]
then break
fi
done
