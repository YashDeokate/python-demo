#Reading file without readline

# with open ("myfile.txt","r") as f:
#     for i in f:
#         print(i)
        
# # with readline
# with open("myfile.txt","r") as f:
#     txt= f.readlines()
#     print("the content",txt)        

# # append file
# with open("O_names.txt","w")as f:
#     f.write("this is new text")
# with open("O_names.txt","r") as f:
#         print(f.read())    
 
        
# Overwrite 

with open("newfile.txt","a") as f:
    f.write(" \n Now this is new last line")
    f.writelines("\n multiple lines \n can be added \n using writeline ")
with open ("newfile.txt") as f:
    p=15
    f.seek(p)       
    print("reading from",p,"position:-",f.read())    
    print("pointer position is ",f.tell())