#PRINT SUM OF FIRST 10 EVEN NUMBERS.
num = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20]
print("Sum of first 10 even numbers is:", sum(num))

#accept two values s and n. print square of first n numbers starting from s.
s = int(input("Enter starting number: "))
n = int(input("Enter how many numbers to square: "))
squared_numbers = [i**2 for i in range(s, s+n)]
print("Squares of first", n, "numbers starting from", s, "are:", squared_numbers)
