sum=`expr $1 + $2`
sub=$(($1 - $2))
mul=$(($1 * $2))
echo "Addition Result:$sum"
echo "Subtracted Result:$sub"
echo "Multiplication Result:$mul"
