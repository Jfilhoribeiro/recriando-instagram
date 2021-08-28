#include <stdio.h>

int main() {
	int m, n, i, j;
	int sum = 0, sum1 = 0;
	
	do {
	  scanf("%d%d", &m, &n);
	  if(m > 0 && n > 0) {
	  	if(m < n) {
		  for(j = m; j <= n; j++) {
		     sum1 += j;
		     printf("%d ", j);
		   }
		   printf("Sum=%d\n", sum1);
		   sum1 = 0;
	    }
		if(m > n) {
		  for(i = n; i <= m; i++) {
		    sum += i;
		    printf("%d ", i);
		  }
		   printf("Sum=%d\n", sum);
		   sum = 0;
		 }
	   }	
	}while(m != 0 && n != 0);
   return 0;
}
