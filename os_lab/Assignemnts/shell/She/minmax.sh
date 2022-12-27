#min and max among 3


if [ $1 -gt $2 ]
then 
	if [ $1 -gt $3 ]
	then 
		echo "$1 is greatest"
	else
		echo "$3 is greatest"

	fi

elif [ $2 -gt $3 ]
then 
	if [ $2 -gt $2 ]
	then 
		echo "$1 greatest"
	else 
		echo "$2 greatest"

	fi

elif [ $3 -gt $1 ]
then 
	if [ $3 -gt $2 ]
	then 
		echo "$3 greatest"
	else
		echo "$2 greatest"

	fi

else
	echo "equal"
fi

