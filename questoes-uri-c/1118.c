#include <stdio.h>

int media();

int main() {
	
	media();
  
  return 0;
}

int media() {
	float n, soma = 0.0;
	int cont = 0, opcao;
	
	while(cont != 2) {
		scanf("%f", &n);
		if(n < 0 || n > 10) {
			printf("nota invalida\n");
		}
		else {
			soma += n;
			cont += 1;
		}
	}
	cont = 0;
	printf("media = %.2f\n", soma / 2.0);	
	
	opcao = 0;
	
	do {
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%d", &opcao);
		
		if(opcao == 1) {
			
			media();
			
		}	
	}while(opcao < 1 || opcao > 2);
}
