cyear=input("enter the curent year");
for cyear in range (cyear,cyear+20):
    if(cyear%400==0):
        print cyear
    else:
        if(cyear%4==0):
            print cyear
