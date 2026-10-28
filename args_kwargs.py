#kwargs

def newf(**kwargs):
    print("argurment type is",type(kwargs))
    print("name",kwargs["name"])
    print("age:",kwargs["age"])
    print("all data", kwargs)
    
newf(name='yash',age=21,city='pune')    


# combining regular arguments with args and kwargs
def my_function(title, *args, **kwargs):
    print(title)
    print("CR is ",args[0], "\nLR is ",args[1])
    print("Positional arguments:", args)
    print("Keyword arguments:", kwargs)
    print(type(args),type(kwargs))
my_function("Div B Info", "Vaibhav", "Sonal", age = 25, city = "Pune")