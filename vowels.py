# Count vowels in a string

s = input("Enter a string: ")
count = 0

for i in s.lower():
    if i in "aeiou":
        count += 1

print("Total vowels:", count)