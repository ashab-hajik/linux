Program 4: Write a shell script to implement 10 Linux command using case 
echo "1:ls"
echo "2:pwd"
echo "3:uname"
echo "4:cal"
echo "5:Time"
echo "6:ps"
echo "7:who"
echo "8:who am i"
echo "9:uptime"
echo "10:tty"
echo "Enter your choice"
read n
case $n in
  1)
   ls
   ;;
  2)
   pwd
   ;;
  3)
   uname
   ;;
   4)
   cal
   ;;
   5)
   time
   ;;
   6)
   ps
   ;;
   7)
   who 
   ;;
   8)
   whoami
   ;;
   9)
   uptime
   ;;
   10)
   tty
   ;;
   *)
   echo "Wrong Input"
   ;;
Esac