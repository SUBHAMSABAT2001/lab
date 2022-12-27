echo "enter value of n"
read n

j=1

sum=0

while [ $j -le $n ]
do
	sum=$(echo "scale=4;$sum + $( 1 / $j )" | bc)
	j=`expr $j + 1`
done

echo "sum : $sum"

