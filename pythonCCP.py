
def productQueries(n):
    
    while(n>0):
        k=n&1
        print(k)
        n=n>>1
    


n = 3


print(productQueries(n))