#Q2.read all lines from a file into a list.pritn the
#total no. of lines and display 2nd and 4th line

with open("myfile.txt", "r") as f:
    lines = f.readlines()
    print("Total number of lines in the file:", len(lines))
    if len(lines) >= 4:
        print("Second line:", lines[1].strip())
        print("Fourth line:", lines[3].strip())
        