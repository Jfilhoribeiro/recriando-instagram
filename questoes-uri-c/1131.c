#include <stdio.h>

int main() {
	int inter, grem, total = 0;
	int opcao = 0, cont1 = 0, cont2 = 0, cont3 = 0;
	
	do {
	  scanf("%d %d", &inter, &grem);
	    if(inter > grem) 
		{
	  	  cont1 += 1;
	    }
	    else if(grem > inter) 
		{
	  	  cont2 += 1;
	    }
	    else 
		{
	  	  cont3 += 1;
	    }
	     printf("Novo grenal (1-sim 2-nao)\n");
	     scanf("%d", &opcao);
	  }while(opcao != 2);
	   total = cont1 + cont2 + cont3;
	   printf("%d grenais\n", total);
	   printf("Inter:%d\n", cont1);
	   printf("Gremio:%d\n", cont2);
	   printf("Empates:%d\n", cont3);
	   if(cont1 > cont2) 
	   {
		  printf("Inter venceu mais\n");
	   }
	   else if(cont2 > cont1) 
	   {
	 	  printf("Gremio venceu mais\n");
	   }
	   else 
	   {
		  printf("Nao houve vencedor\n");
	   }
   return 0;
}
