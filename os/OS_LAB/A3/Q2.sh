clear
echo "Enter 4 number:"
read a
read b
read c
read d
z=`expr $a + $b + $c + $d`
x=`expr $z / 4`
echo "sum : $z,avg : $x"
