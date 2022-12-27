#arithmetic operations
#sum and avg of 4 numbers

echo "Enter 4 numbers:"
read one
read two
read three
read four

echo "Sum:"
sum=`expr $one + $two + $three + $four`
echo `expr $sum`
echo "avg"

echo `expr $sum / 4`


