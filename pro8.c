Program 8: Write a shell script to convert uppercase char to lower case and vica versa

echo "enter a string"
read s
len=${#s}
i=0
while [ $i -le $len ]
do
   char=${s:i:1}
   if [[ $char == [A-Z] ]]
     then
     echo -n "$char" | tr '[:upper:]' '[:lower:]'
    fi
    if [[ $char == [a-z] ]]
     then
     echo -n "$char" | tr '[:lower:]' '[:upper:]'
    fi
    ((i++))
done