#prog to count vowels in a file
with open("myfile.txt", "r") as f:
    content = f.read()
    print("Content of the file:")
    print(content)
    vowels = "aeiou"
    count = 0
    for char in content:
        if char in vowels:
            count += 1
    print("Number of vowels in the file:", count)
    