# Python examples for common string functions
# Sample string
text = "  Welcome to IMCC!  "
# 1. Strip spaces from both ends
print("Remove Spaces", text.strip())  
# 2. Convert to lowercase
print("Lower Case : ", text.lower()) 
# 3. Convert to uppercase
print("Upper case : ", text.upper()) 
# 4. Capitalize first letter
text = text.strip()
print("Captilize Firts Letter : ", text.capitalize())  
# 5. Title case (capitalize each word)
print(text.title()) 
# 6. Count occurrences of a substring
print(" Letter C occurs  ", text.count("C"), "times in text")  
# 7. Find the position of a substring (-1 if not found)
print("Position of IMCC in text is ",text.find("IMCC"))  
# 8. Replace a substring
print(text.replace("IMCC", "Python Magic"))  
print(text.startswith("  We"))  
print(text.endswith("!  "))     
# 9. Check if string starts or ends with certain substring
# 10. Split string into list by a delimiter
print("Simple split",text.split())  
# 11. Join a list of strings with a separator
words = ["Python", "is", "fun"]
print(" ".join(words))