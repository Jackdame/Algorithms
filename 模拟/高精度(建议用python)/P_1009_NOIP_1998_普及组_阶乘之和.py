n=int(input())       
ans=0         
for i in range(1,n+1):     
    d=1       
    for j in range(1,i+1):
        d*=j       
    ans+=d        
print(ans)        

