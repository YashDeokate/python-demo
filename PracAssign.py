

#Q1. Read student names from a file and store them in a list.
with open ("students.txt","r") as file:
    names= file.read().splitlines()
print("names in lis",names)

#2.Q2. Print names longer than 5 characters.

with open("students.txt","r") as f:
    names=f.read().splitlines()
for name in names:
    if len(name)>5:
        print("\nnames that are longer than 5 char:\n",name)    
        
#Q3. Count names starting with a vowel.

count=0
with open("students.txt", "r") as f:
    names = f.read().splitlines()
    
for name in names:
    if name[0].lower()in 'aeiou':  
        count += 1  
print("\n the count of names starting from vowel:",count)

#Q4. Save names longer than 5 characters into a new file.

with open("students.txt", "r") as f:
    names = f.read().splitlines()
    
with open("new.txt","w") as f:
        for name in names:
            if len(name)>5:
                f.write(name+"\n")
print("saved names")                


#Q5. Sort names alphabetically in ascending order.

with open("students.txt","r") as f:
    names=f.read().splitlines()
names.sort()    
print("sorted in asc order",names)

#Q6. Print names containing the letter "a".
with open("students.txt","r") as f:
    names=f.read().splitlines()
    
for name in names:
    if "a" in name.lower():
        print("names containing a:",name)    
        
#Q7. Count frequency of names using a dictionary.

with open("students.txt","r") as f:
    names=f.read().splitlines()

freq={}    
for name in names:
    if name in freq:
        freq[name]+=1
    else:
        freq[name]=1
print (freq)                



#Q8. String Analysis – length, first and last character, palindrome.

with open("students.txt","r") as f:
    names=f.read().splitlines()

for name in names:
    if not name:
        continue    
    print(name)
    print("lenght:",len(name))
    print("first char:",name[0])
    print("last char:",name[-1])
    
    if name.lower()==name.lower()[::-1]:
        print("palindrome \n ")
    else:
        print("not palindrome \n")    
        
  #Q9. Read names from a file and store them in a list.
# Remove duplicate names.
# Sort names by length (shortest to longest).
# Save the results in processed_names.txt.      

with open("students.txt","r")as f:
    names =f.read().splitlines()
    
names=list(set(names))
names.sort(key=len)

with open("processed_names.txt","w") as f:
    for name in names:
        f.write(name +"\n")
print(names)


#10Question:
# - Read names from a file.
# - Group names by their first letter.
# - Save each group into separate files like A_names.txt, B_names.txt, etc.

with open("students.txt", "r") as f:
    names = f.read().splitlines()

groups = {}

for name in names:
    if name:
        letter = name[0].upper()

        if letter not in groups:
            groups[letter] = []

        groups[letter].append(name)

for letter in groups:
    with open(letter + "_names.txt", "w") as f:
        for name in groups[letter]:
            f.write(name + "\n")

print(groups)
    