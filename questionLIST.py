#create a list of 10 no. and display sum of last 4 element.
#remove the items from the list located at 2nd and 5th position, 
#print the difference of highest and lowest number from the list.
#append a new element in the list which is half of the item at 3rd position.

num=[1,2,3,4,5,6,7,8,9,10]
print(num)
print(sum(num[-4:]))
yy=(num.pop(2))
rr=(num.pop(5))

print (num)
print(max(num)-min(num))


