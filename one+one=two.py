"""
This program was written by MD. Rajaul Ansari
on january 10th 2023
This program helps to make any solution for any problem of crypt-arthmatic problems
This is test program for 
ONE+ONE=TWO
"""

for o in range(1,10):
    for n in range(0,10):
        for e in range(0,10):
            for t in range(1,10):
                for w in range (0,10):
                    if(
                        o*100+n*10+e+o*100+n*10+e==t*100+w*10+o 
                        and o!=n and o!=e and o!=t and o!=w
                        and n!=e and n!=t and n!=w
                        and e!=t and e!=w
                        and t!=w
                    ):
                        print(o,n,e,t,w)   #this prints only the value of o, n, e, t, w.

