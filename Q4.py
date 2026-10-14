#read a file,split its content into words
#and store them in a list
#1.print the total number of words in the file
#2.print the unique words in the file

with open("myfile.txt", "r") as f:
    content = f.read()
    words = content.split()
    print("Total number of words in the file:", len(words))
    unique_words = set(words)
    print("\n Unique words in the file:\n", unique_words)