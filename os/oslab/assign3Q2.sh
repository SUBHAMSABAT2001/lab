#this is shell script to sum and avg of  4 numbers
echo "Enter four number"
read x
read y
read z
read a
sum=`expr $x + $y + $z + $a`
avg=`expr $sum / 4` 
echo "sum :- $sum and avg :- $avg"

