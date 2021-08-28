#include <stdio.h>
#define max_atributos 100
#define qtde_cartas 100

struct Carta{
    int atributos[max_atributos];
};

struct Carta deck_jogador01[qtde_cartas];
struct Carta deck_jogador02[qtde_cartas];

void deck_jogadores(int qtde_atributos);

int main() {

    int qtde_atributos;
    int i, j, jogador01_carta_selecionada, jogador02_carta_selecionada, atributo_selecionado;


        while (scanf("%d", &qtde_atributos) != EOF)
        {

            deck_jogadores(qtde_atributos);
            
            // Determinar as cartas selecionadas dos jogadores e o atributo selecionado para duelo 
            scanf("%d %d", &jogador01_carta_selecionada, &jogador02_carta_selecionada);
            scanf("%d", &atributo_selecionado);

            imprimir_vencedor(jogador01_carta_selecionada, jogador02_carta_selecionada, atributo_selecionado);
            
        }

    return 0;
}

void deck_jogadores(int qtde_atributos){

    int i, j, qtde_cartas_marcos, qtde_cartas_leonardo;

    scanf("%d %d", &qtde_cartas_marcos, &qtde_cartas_leonardo);

    // for para preencher os atributos de todas as cartas do primeiro player (marcos)
    for (i = 0; i < qtde_cartas_marcos; i++)
    {
        for (j = 0; j < qtde_atributos; j++)
        {
            scanf("%d", &deck_jogador01[i].atributos[j]);
        }
        
    }
    // for para preencher os atributos de todas as cartas do segundo player (Leonardo)
    for (i = 0; i < qtde_cartas_leonardo; i++)
    {
        for (j = 0; j < qtde_atributos; j++)
        {
            scanf("%d", &deck_jogador02[i].atributos[j]);
        }
        
    }
}

void imprimir_vencedor(int jogador01_carta_selecionada, int jogador02_carta_selecionada, int atributo_selecionado){


    if (deck_jogador01[jogador01_carta_selecionada - 1].atributos[atributo_selecionado - 1] > deck_jogador02[jogador02_carta_selecionada - 1].atributos[atributo_selecionado - 1])
    {
        /* Player01 win */
        printf("Marcos\n");
    } else if (deck_jogador01[jogador01_carta_selecionada - 1].atributos[atributo_selecionado - 1] == deck_jogador02[jogador02_carta_selecionada - 1].atributos[atributo_selecionado - 1])
    {
        /* Empate */
        printf("Empate\n");
    } else {
        /* Player02 win */
        printf("Leonardo\n");
    }

}
