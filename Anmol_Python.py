



def my_func(seats):
    

    ans=0
    aa=0
    bb=0
    cc=0
    n=len(seats)
    flag0=0
    flag1=0



    for i in range(n):
        if(seats[i]==0):
            cc+=1
        else:
            ans=max(cc,ans)
            cc=0

    i=0
    while(seats[i]!=1):
        aa+=1
        i+=1

    i=n-1
    while(seats[i]!=1):
        bb+=1
        i-=1
        

    aa=max(aa,bb)


    return max(int((ans+1)/2),aa)

    


seats = [1,0,0,0]
print(my_func(seats))