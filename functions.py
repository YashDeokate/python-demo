#sample string
text ="  welcome to imcc!  "

#capitalize first leeeter
text=text.strip()
print("capitalize first letter:", text.capitalize())

#title case(capitalize first letter of each word)
print(text.title())

#strip spaces from bith ends
text=text.strip()
print("strip spaces from both ends:", text)

#count concurrency of substring
print(" letter C occurr:", text.count("c"))

#find position of substring(-1 if not found)
print("position of imcc in text is:", text.find("imcc"))

#replace substring
print(text.replace("imcc","python magic"))

#cheeck if string starts or ends with a substring
print( text.startswith("we"))
print (text.endswith("! "))

#split string into list of delimitor
print(text.split(" "))
 
#upper case
print(text.upper())

#lower case
print(text.lower())
