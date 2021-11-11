#!/bin/bash
sum=0
fn=[0-9]
sn=[0-9]
echo "Calculator"

echo "Enter first number"
read fn
echo "Enter second number"
read sn

echo "1. Addition"
echo "2. Subtraction"
echo "3. Multiplication"
echo "4. Division"
echo "5. Modulo"
echo "Pick a number"
read ch
case $ch in
1)sum=`echo "scale=4; $fn + $sn" | bc`
echo "The sum is "$sum;;
2)sum=`echo "scale=4; $fn - $sn" | bc`
echo "The difference is "$sum;;
3)sum=`echo "scale=4; $fn * $sn" | bc`
echo "The product is "$sum;;
4)sum=`echo "scale=4; $fn / $sn" | bc`
echo "The quotient is "$sum;;
5)sum=`echo "scale=4; $fn % $sn" | bc`
echo "The reaminder is "$sum;;
6)break;;
*)echo "No option";;
esac;
read -p "Enter number 6 to exit or enter something to go back to the menu" final_exit
if [ $final_exit -eq 6]
then break
fi
