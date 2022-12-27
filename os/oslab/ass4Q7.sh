# Write a shell script to find the sum of the following series.
#Date
#Sum = 1 + 1/2 + 1/3 + ...... + 1/n

echo "Enter the numbers :-"
read x
sum=0
for (( i=1; i<=$x; i++ ))
do
  rem=$(echo "scale=2;1/$i" |bc)
  sum=`expr $rem + $sum`
done

echo "Sum is :- $sum"


