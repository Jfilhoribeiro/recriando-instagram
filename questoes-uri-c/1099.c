#include <stdio.h>

int main() {
	int n, x, y, aux = 0;
	int i, j, l, soma = 0, som1 = 0;
	
	 scanf("%d", &n);
	 
	 for(i = 0; i < n; i++) {
	    scanf("%d %d", &x, &y);
	    if(x > y) {
		 for(l = y + 1; l < x; l++) {
			if(l % 2 != 0)
			   som1 += l;
			}
			printf("%d\n", som1);
			som1 = 0;
		}
		else if(x <= y) {
	      for(j = x+1; j < y; j++) {
	    	 if(j % 2 == 1)
	    	   soma += j;
		   }
		   printf("%d\n", soma);
		   soma = 0;
		}
	 } 
	return 0;
}
