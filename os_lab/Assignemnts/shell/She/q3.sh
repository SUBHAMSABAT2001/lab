n=$1

sum=0
while [ $n -gt 0 ]
do
	sum=`expr $sum + $(expr $n % 10)`
	n=`expr $n / 10`
done 
echo "sum is $sum"

