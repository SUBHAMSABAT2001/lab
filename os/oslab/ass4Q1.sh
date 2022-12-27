# this is program to reverse a number
echo "Enter a number:-"
read x
sum=0
while [ $x -gt 0 ]
do
	rem=`expr $x % 10`
	sum=`expr $sum \* 10 + $rem`
	x=`expr $x / 10`
done
echo "Reverse order of the number is :- $sum"

