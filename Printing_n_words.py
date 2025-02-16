string="I am very fine now and coding in the class"
n=2
l=string.split(" ")
size=len(l)

i,j=0,0
while(i<size):
    for j in range(i,n+i):
        if(n+i>size):
            break
        print(l[j], end=" ")
    if(n+i>size):
            break
    i+=1
    print()
