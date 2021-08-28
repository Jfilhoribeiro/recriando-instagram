#include <stdio.h>

int main() {
	float n, media = 0;;
	float cont = 0, soma = 0;
	
	while(1) {
		
		if(cont == 2)
		  break;
		  
		scanf("%f", &n);
        if(n < 0 || n > 10) {
			printf("nota invalida\n");
		}
		else {
			soma += n;
			cont += 1;
		}
		media = soma / 2.0;
	}	
	 printf("media = %.2f\n", media);
  return 0;
}
