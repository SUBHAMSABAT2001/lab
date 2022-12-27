echo "Enter Your name:"
read name
echo "Enter Roll No:"
read roll
echo "Enter Marks in 4 Subjects:"
read n1
read n2
read n3
read n4
sum=`expr $n1 + $n2 + $n3 + $n4`
avg=`expr $sum / 4`
case $avg in
([5][0-9]) grade=F;;
$($avg -ge 50 -a $avg -lt 60)) grade=C;;
$($avg -ge 60 -a $avg -lt 70)) grade=B;;
$($avg -ge 70 -a $avg -lt 80)) grade=A;;
$($avg -ge 80 -a $avg -lt 90)) grade=E;;
*)grade=O
esac
echo "The Grade of $name with Roll No $roll is:$grade"

