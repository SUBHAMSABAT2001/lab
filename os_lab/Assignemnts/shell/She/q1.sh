

s=$1
for i in 1 2 3
do
        echo `expr $s % 10`
	s=`expr $s / 100`
done	
		
