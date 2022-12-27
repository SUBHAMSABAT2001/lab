clear
echo "Enter 2 number:"
read p
read q
for ((i=1;i<=$p && i<=$q;i++))
do
a=`expr $p % $i`
b=`expr $q % $i`
if [ $a -eq 0 ]
then
if [ $b -eq 0 ]
then
gcd=$i
fi
fi
done
echo $gcd

