/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile 
*/
/// 26012024 - Josiane da Silva
/// Este programa recebe informacoes do usuario, organiza e imprime o resultado na tela 
/// carregando bibliotecas
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    /// declarando as variaveis 
    int v, tam, *pos, *qtd;
    float tamf, *val;
    printf("Informe total de notificações a serem registradas: ");
    scanf("%d", &tam);
    //
    
    int i = 0;
    //alocando memoria dos vetores
    pos = (int *) malloc(tam * sizeof(int));
    val= (float *) malloc(tamf * sizeof(float));
    qtd = (int *) malloc(tam * sizeof(int));
    /// leitura dos dados digitados pelo usuario 
    // e preenchimento dos vetores
    // posicao,  valor e quantidade
    while (i < tam) {
        printf("informe posicao: %i ", i+1);
        scanf("%i", &pos[i]);
        //printf("%i", pos[i]);
        printf("informe valor: %d ", i+1);
        scanf("%f", &val[i]);
        //printf("%.2f", val[i]);
        printf("informe  qtde: %i ", i+1);
        scanf("%i", &qtd[i]);
        printf("\n");
        i++;
    };
    /// imprindo os dados armazenados nos vetores
    printf("\n\n");
    int len = tam; //sizeof(pos)/sizeof(pos[0]);
    printf("Total de notificações: %i \n", len);
    printf("Posicao,  Valor, Quantidade ");
    
    for(int n=0; n<len; n++){
        printf("\n   %i,     %.2f,     %i ", pos[n], val[n], qtd[n]);
    };
    return 0;
}
    

