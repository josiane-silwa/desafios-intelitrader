/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/// este programa recebe 20 numeros digitados pelo usuario
/// armazena em 2 vetores, calcula a distancia entre os elementos dos vetores,
/// separa e retorna qual a menor distancia
/// 20012024 - Josiane da Silva
/// carregando bibliotecas
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{   
    // declaracao dos variaveis e vetores
    int a[10] = {};
    int b[10] = {};
    int ni = 0;
    // reacebendo os numeros digitados e armazenando nos vetores
    printf("Lendo os numeros \n");
    while(ni < 10){
        printf("\n Digite 20 numeros %i:  \n", ni+1);
        scanf("%i", &a[ni]);
        scanf("%i", &b[ni]);
        ni++;
    };
    // obtendo o tamanho do vetor 
    int len= sizeof(a)/sizeof(a[0]);
    // imprime os elementos dos vetores
    for(int i =0; i<len; ++i){
        printf("%i", a[i]);
        printf("%i", b[i]);
    };
    
    printf("\n calcula distancia entre os arrays \n");
    int m[10]={};
    
    // calcula a distancia entre os elementos dos vetores
    // e sempre subtrai o menor numero do maior numero 
    // evitando assim numeros negativos
    for (int n =0; n<len; ++n){
        if(a[n] > b[n]){
            int a1 = a[n] - b[n];
            //printf("\n a - b %i \n", a[n] - b[n]);
            m[n] = a1;
        }else{
            int a1 = b[n] - a[n];
            //printf("\n b - a %i \n", b[n] - a[n]);
            m[n] = a1;
        }
    }
    
    // imprime a diferença entre os elementos dos arrays
    for(int i =0; i<len; ++i){
        //printf("\n resultado subtracao %i \n", m[i]);
        printf("\n %i \n", m[i]);
    }
    
    printf("\n Separa a menor distancia entre os numeros dos vetores");
    // aqui é assumido que o menor valor é o primeiro elemento de m[0], armazenado em min
    // todos os elementos sao comparados com min e max,
    // se o valor for menor que o anterior, ele passa a ser o atual
    // da mesma forma com o menor valor, é comparado e substituido
    // até chegar no menor 
    int min = m[0]; 
    int max = 0;
    for (int d = 0; d < len; d++){
        if(m[d] > max){
            max = m[d];
        }else if (m[d] < min){
            min = m[d];
        }
    }
    printf("\n min: %i", min);
    //printf("\n max: %i", max);
    
    return 0;
}
