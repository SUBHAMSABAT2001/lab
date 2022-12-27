clear
echo "Enter number:"
read n
q=0
o=2
p=`expr $n % $o`
if [ $p eq $q ]
then 
 echo "even"
else
 echo "odd"
fi
