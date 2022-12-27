echo "Enter A Number:"
read n
if [ `expr $n % 2` -eq 0 ];
then
	echo "Number $n is even"
else
	echo "Number $n is odd"
fi
