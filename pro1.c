Program 1: Write a shell script to print all prime numbers between M and N
echo "enter start limit"
read m
echo "enter end limit"
read n
for (( num=$m; num<$n; num++ ))
do
	is_prime=true
	for (( i=2; i<num; i++ ))
	do
		if [ $(($num%$i)) -eq 0 ]
		then
			is_prime=false
			break
		fi
	done
	if $is_prime 
	then
		echo $num
	fi
done