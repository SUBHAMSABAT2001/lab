clear
echo "Enter a number"
read n
f1=0
f2=1
echo $f1
echo $f2
for ((i=2;i<$n;i++))
do
f=`expr $f1 + $f2`
echo $f
f1=$f2
f2=$f
done

