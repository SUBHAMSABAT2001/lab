# this is program to find the digit of the number
echo "Enter a number:-"
read x
sum=0
while [ $x -gt 0 ]
do
	rem=`expr $x % 10`
	sum=`expr $sum + $rem`
	x=`expr $x / 10`
done
echo "Sum of the digit of the number is :- $sum"
