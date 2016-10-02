s=raw_input()
e=1
for char in s:
    if(e==1):
        print char.upper(),
        l=1
        e=0
    elif (l==1):
        print char,
        e=1
        l=0
