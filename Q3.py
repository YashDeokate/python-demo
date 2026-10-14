#take  a sentence from the user ,
# split it into word,and store them in a list and print the longest word.
sentence = input("Enter a sentence: ")
words = sentence.split()
longest_word = max(words, key=len)
print("The longest word in the sentence is:", longest_word)

