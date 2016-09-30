a=raw_input("enter pairs")
a=a.split(' ');
a=[int(i) for i in a]
a.sort()
print a[1]
