/*
This program was written by MD. Rajaul Ansari
on january 10th 2023
This program helps to make any solution for any problem of crypt-arthmatic problems
This is test program for 
BASE + BALL=GAMES

*/

#include <stdio.h>
int main(){
	int B, A, S, E, L, G, M;
	for(B = 0; B<10; B++)
	 for(A = 0; A<10; A++)
	  for(S = 0; S<10; S++)
	   for(E = 0; E<10; E++)
	    for(L = 0; L<10; L++)
	     for(G = 1; G<10; G++)
	      for(M = 0; M<10; M++)
	       if(B*1000+A*100+S*10+E+B*1000+A*100+L*10+L==G*10000+A*1000+M*100+E*10+S
            // B*2000+A*200+(S+L)*10+E+L==G*10000+A*1000+M*100+E*10+S  //You can also use this line as line no 11. this is the simplest form of line number 11
	        && B!=A && B!=S && B!=E && B!=L && B!=G && B!=M
	        && A!=S && A!=E && A!=L && A!=G && A!=M
	        && S!=E && S!=L && S!=G && S!=M
	        && E!=L && E!=G && E!=M
	        && L!=G && L!=M)
			printf("%d%d%d%d+%d%d%d%d=%d%d%d%d%d\n",B,A,S,E,B,A,L,L,G,A,M,E,S);  ///BASE+BALL=GAMES
}
