clear
echo "Enter a number"
read n
echo "Enter a digit from above number"
read a
c=0
while [ $n -ne 0 ]
do
r=`expr $n % 10`
if [ $r -eq $a ]
then
c=`expr $c +1 `
fi
n1=`expr $n1 / 10`
done
echo $c
