n=$1
count=0
while [ $n -gt 0 ]
do
	if [ `expr $n % 10` -eq $2 ]
	then
		let "count++"
	
	fi
	n=`expr $n / 10`
done
echo "no : $count"
