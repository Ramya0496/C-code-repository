n=input("enter n");
def rec(n):
    if(n==1):
        print 1
        return
    else:
        print n
        rec(n-1)
rec(n)
