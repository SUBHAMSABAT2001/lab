#this is program to find gcd of two numbers
echo "Enter two numbers"
read x
read y
while [ $y -gt 0 ]
do 
	c=`expr $x % $y`
	x=$y
	y=$c
done
echo "The gcd of two numbers is :- $x"

