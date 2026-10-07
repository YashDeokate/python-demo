text= "yash deokate"


print(text.count("a"),text.count("e"),text.count("i"),text.count("o"),text.count("u"))

#OR

for i in text:
    if i in "aeiou":
        print(i)
        
t="ha "        
print(t*3)

t="ha "
print(t+t+t)

t=input ("enter bloody name: ")
print(t.count("a"))
print(t.replace("a","z"))
print(t.split())
print(sorted(t))


