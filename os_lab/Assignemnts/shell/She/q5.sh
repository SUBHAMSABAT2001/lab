m=0

if [ $1 -gt $2 ]
then 
	m=$2

else
	m=$1
fi

while [ $m -gt 1 ]
do
	if [ `expr $1 % $m` -eq 0 ]
	then
		if [ `expr $2 % $m` -eq 0 ]
		then
			break
		fi
	fi
	m=`expr $m - 1`
done

echo "GCD : $m"
