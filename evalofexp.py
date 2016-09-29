s=raw_input("enter the eqn")
op=0
cl=0
for i in s:
    if(i=='('):
        op=op+1
    if(i==')'):
        cl=cl+1
if(op!=0 and cl!=0):
    if(op==cl):
        print op+op  
    if(op<cl):
        print op+op, 
    else:
        print cl+cl,
