a,b=input().split()
c=(int(a)-1)//2
frag=".|."
base="---"
m=-1
for i in range(1,c+1):
    #p=(i*i - m)
    print(base*(c-i+1),frag*(m+2),base*(c-i+1),sep="")
    m+=2
    
x=(int(b)-7)//2
print("-"*x,"WELCOME","-"*x,sep="")

n=int(a)
for j in range(1,c+1):
    #q=((c-j+1)*(c-j+1)-n)
    print(base*j,frag*(n-2),base*j,sep="")
    n-=2
