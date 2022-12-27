echo "Enter Three Numbers:"
read n1
read n2
read n3
if [ $n1 -gt $n2 -a $n1 -gt $n3 ];
then
	echo "$n1 is the greatest"
elif [ $n2 -gt $n1 -a $n2 -gt $n3 ]
then
	echo "$n2 is the greatest"
else
	echo "$n3 is the greatest"
fi
