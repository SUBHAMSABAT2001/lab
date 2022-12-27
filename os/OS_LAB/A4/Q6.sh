clear
echo "Enter a number to check pallindrome:"
read n
num=$n
b=0
while [ $n -ne 0 ] 
do
a=`expr $n % 10`
b=`expr $b \* 10`
b=`expr $b + $a`
n=`expr $n / 10`
done
if [ $b -eq $num ]
then 
echo "Pallindrome"
else 
echo "not pallindrome"
fi
