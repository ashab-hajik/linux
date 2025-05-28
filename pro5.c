Program 5: Write a shell script that displays list of all the files in the current directory to which the user has read, write and execute permissions.


echo "Enter the directory name" read dir
if [ -d $dir ] then
cd $dir ls>f exec<f
while read line do
if [ -f $line ] then
if [ -r $line -a -w $line -a -x $line ] then
echo "$line has all permissions" else
echo "files not having all permissions" fi
fi done
fi