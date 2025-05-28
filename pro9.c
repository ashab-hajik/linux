Program 9: Write a shell script to accept a word and perform pattern matching in a given file (command line arguments)
if [ $# -ne 2 ]; then
    echo "Usage: $0 <word> <filename>"
    exit 1
fi

word=$1
filename=$2

# Check if the file exists
if [ ! -f "$filename" ]; then
    echo "Error: File '$filename' not found!"
    exit 1
fi

# Perform pattern matching using grep
grep -n "$word" "$filename"

# Check if grep found any matches
if [ $? -ne 0 ]; then
    echo "No matches found for '$word' in '$filename'."
    exit 1
fi