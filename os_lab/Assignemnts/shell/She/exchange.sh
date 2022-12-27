#exchange two numbers

echo "enter two numbers"
read a
read b
echo "before echange"
echo "a:"
echo `expr $a`
echo "b:"
echo `expr $b`
a=`expr $a + $b`
b=`expr $a - $b`
a=`expr $a - $b`
echo "after echange:"
echo "a:"
echo `expr $a`
echo "b:"
echo `expr $b`

