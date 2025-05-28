Program 7: Write a shell script to count the number of vowels in a given string


echo "enter a string"
read s
count=0
len=${#s}
i=0
while [ $i -le $len ]
do
   char=${s:i:1}
   if [[ $char == [AEIOUaeiou] ]]
     then
     ((count++))
    fi
    ((i++))
done
echo "Number of Vowels are"
echo $count
