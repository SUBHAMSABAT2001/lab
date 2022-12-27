#grades

sum=`expr $3 + $4 + $5 + $6`
avg=`expr $sum / 4`

echo "$avg"

if [ $avg -lt 50 ]
then 
	echo "$1, roll no: $2, failed"

elif [ $avg -ge 50 -a $avg -lt 60 ]
then 
	echo "$1, roll no: $2, grade: C"

elif [ $avg -ge 60 -a $avg -lt 70 ]
then
        echo "$1, roll no: $2, grade B"

elif [ $avg -ge 70 -a $avg -lt 80 ]
then    
        echo "$1, roll no: $2, grade A"

elif [ $avg -ge 80 -a $avg -lt 90 ]
then    
        echo "$1, roll no: $2, grade E"

else
        echo "$1, roll no: $2, grade O"

fi
