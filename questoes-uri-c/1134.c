#include <stdio.h>

int main() {
	int contA = 0, contG = 0, contD = 0;
	int combustivel;
	
	do{
	   printf("1.Alcool\n");
	   printf("2.Gasolina\n");
	   printf("3.Diesel\n");
	   printf("4.Fim\n");
	   scanf("%d", &combustivel);
	   
		if(combustivel == 1) {
			contA += 1;
		}
		else if(combustivel == 2) {
			contG += 1;
		}
		else if(combustivel == 3) {
			contD += 1;
		}
		
	}while(combustivel != 4);
	 
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", contA);
	printf("Gasolina: %d\n", contG);
	printf("Diesel: %d\n", contD);
	
  return 0;
}
