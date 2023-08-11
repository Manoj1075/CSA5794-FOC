read -p "enter value of a" a
for ((i=1;i<=a;i++))
do 
if ((i%2==0))
then 
echo $i
fi
done