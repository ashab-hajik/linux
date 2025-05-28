Program 10: Write a shell script to to copy a file within the current directory
read -p "Enter the filename to copy: " source_file
# Check if the source file exists
if [ ! -f "$source_file" ]; then
    echo "Error: File '$source_file' not found!"
    exit 1
fi
# Prompt the user for the destination filename
read -p "Enter the destination filename: " dest_file
# Copy the file
cp "$source_file" "$dest_file"
#$? Will tell whether previous command was sucesssfull then it will return 0 else non zero value 
# Check if the copy was successful
if [ $? -eq 0 ]; then
    echo "File copied successfully to '$dest_file'"
else
    echo "Error: Failed to copy the file."
fi