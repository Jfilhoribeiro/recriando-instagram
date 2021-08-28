#include <stdio.h>

int main() {
	int m, l, n;
	int Cm = 0, Cl = 0;
	int i, j, a;
	
	printf("Digite a quantidade de atributos: \n");
	scanf("%d", &n);
	printf("Digite a quantidade de cartas de marcos e leonardo: ");
	
	scanf("%d %d", &m, &l);
	int M[m][n];
	int L[l][m];
	
	for(i = 0; i < m; i++) {
	 for(j = 0; j < n; j++) {
	 	
	 	printf("Cartas %d coluna %d marcos: ", i+1, j);
	 	scanf("%d", &M[i][j]);
	   }
	}
	for(i = 0; i < l; i++) {
	 for(j = 0; j < n; j++) {
	 	
	 	printf("Cartas %d coluna %d leonardo: ", i+1, j);
	 	scanf("%d", &L[i][j]);
	   }
	}
	 printf("Carta escolhida por marcos: \n");
	 scanf("%d", &Cm);
	 printf("Carta escolhida por leonardo: \n");
	 scanf("%d", &Cl);
	 printf("Atributo escolhido: \n");
	 scanf("%d", &a);
	 Cm--;
	 Cl--;
	 a--;
	 if(M[Cm][a] > L[Cl][a]) {
	 	printf("Marcos");
	 }
	 else if(M[Cm][a] < L[Cl][a]) {
	 	printf("Leonardo");
	 }
	 else {
	 	printf("Empate");
	 }
	
	return 0;
}
