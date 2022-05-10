def next_decomp(n,inp,res):
    if len(inp)==0:
        return res
    else:
        iinp=[]
        rres=res
        for z in inp:
            sz=sum(z)
            if sz==n:
                zz=sorted(z)
                if not zz in rres:
                    rres.append(zz)
            else:
                k=n-sz
                for i in range(1,k+1):
                    iinp.append([i]+z)
        return next_decomp(n,iinp,rres)    
        
def gen_sum(n):
    res=[]
    for a in next_decomp(n,[[i] for i in range(1,n+1)],[]):
        res.append(list(reversed(a)))
    return sorted(res,reverse=True)
    
 
n=int(input("Введите n: "))
all_decomps=gen_sum(n)
 
for dec in all_decomps:
    print(*dec,sep=" ")