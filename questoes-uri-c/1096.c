#include <stdio.h>

int main() {
   int i, j;
	for(i = 1; i < 10; i+= 2) {
	  for(j = i + 6; j >= i + 4; j--) {
	  	 printf("I=%d J=%d\n", i, j);
	   }
	}
  return 0;
}

//int main() {
//	int i, j, c = 7;
//	  for(i = 1; i <= 9; i+= 2) {
//	   for(j = c; j > (c - 3); j--) {
//	  	  printf("I=%d j=%d\n", i, j);
//	    }
//	    c += 2;
//	  }
//  return 0;
//}
