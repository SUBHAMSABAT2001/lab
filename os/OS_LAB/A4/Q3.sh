clear
echo "Enter a number:"
read n
b=0
while [ $n -ne 0 ] 
do
a=`expr $n % 10`
b=`expr $b + $a`
n=`expr $n / 10`
done
echo $b
