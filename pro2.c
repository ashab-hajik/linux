Program 2: Write a shell script to reverse a number and check whether it is a palindrome or not
echo "Enter a number: "
read n

rev=0
ori=$n

while [ $n -ne 0 ]
do
    rem=$(( $n % 10 ))
    rev=$(( $rev * 10 + $rem ))
    n=$(( $n / 10 ))
done
echo "Reverse number is $rev"
if [ $ori -eq $rev ]
then
    echo "$ori is a palindrome."
else
    echo "$ori is not a palindrome."
Fi