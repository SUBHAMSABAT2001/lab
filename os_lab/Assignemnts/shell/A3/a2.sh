echo "Enter Four Numbers:"
read n1
read n2
read n3
read n4
sum=`expr $n1 + $n2 + $n3 + $n4`
avg=`expr $sum / 4`
echo "Sum:$sum"
echo "Average:$avg"
