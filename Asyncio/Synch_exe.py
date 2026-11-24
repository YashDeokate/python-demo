#Synchronous execution 

import time
def task(name):
    print(f"{name} started")
    time.sleep(3)
    print(f"{name} completed")
task("Task1")
task("Task2")
task("Task3")