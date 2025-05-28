Program 6: Write a shell script to find the factorial of a given number.
echo "Enter a number"
read n
f=1
i=1;
while [ $i -le $n ]
do
f=$((f * i))
i=$((i + 1))
done
echo $f