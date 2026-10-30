#Question: Write a Python program using a generator to generate numbers from 1 to N.

def generate(n):
    for i in range(1, n+1):
        yield i

n = int(input("Enter number: "))

for i in generate(n):
    print(i)