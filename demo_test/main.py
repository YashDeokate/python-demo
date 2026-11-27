import datetime
import grade
import threading
import time


class Custom(Exception):
    pass


class Student:
    def __init__(self, rollno, name):
        self.rollno = rollno
        self.name = name
        self.date = datetime.date.today()

    def display(self):
        print("Name is", self.name)
        print("Number is", self.rollno)
        print("Date of admission is", self.date)

    def getMarks(self):
        return self.__marks

    def setMarks(self, marks):
        if marks < 0 or marks > 100:
            raise Custom("Marks must be between 0 and 100")

        self.__marks = marks


name = input("Enter name: ")
rollno = int(input("Enter roll number: "))
marks = int(input("Enter marks: "))

s1 = Student(rollno, name)
s1.display()

try:
    s1.setMarks(marks)
except Custom as error:
    print(error)
    raise SystemExit

print("Marks of student:", s1.getMarks())
print("Grade of student:", grade.grade(s1.getMarks()))


def report():
    print("\nGenerating student report")
    time.sleep(4)
    print("Student report")
    print("Marks of student:", s1.getMarks())
    print("Grade of student:", grade.grade(s1.getMarks()))


t = threading.Thread(target=report)
t.start()
t.join()

print("\nProgram completed")