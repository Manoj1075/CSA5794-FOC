read -p "enter num" n
a=0
b=1

for((i=1;i<=n;i++))
do
echo "$a " 
c=$((a+b))
a=$b
b=$c

done