#ifndef _RELACOES_H
#define _RELACOES_H

#include "propriedades.h"

void relacao_01(){

    char nome[4] = "R01";
    int conjS[3] = {1,2,3};
    int rho[3][2] = { {1,2}, {3,2}, {1,1} };

    int reflexiva = 0;          //Valor 0: Relação NÃO é reflexiva
    int simetrica = 0;          //Valor 0: Relação NÃO é simétrica
    int transitiva = 1;         //Valor 1: Relação É transitiva
    int anti_simetrica = 1;     //Valor 1: Relação É anti-simétrica
    int equivalencia = 0;       //Valor 0: Relação NÃO é uma equivalência

    printf("\n");

    if(ehReflexiva(rho) != reflexiva){
        printf("ERRO: [%s] - Problema na propriedade reflexiva!\n", nome);
    }
    if(ehSimetrica() != simetrica){
        printf("ERRO: [%s] - Problema na propriedade simetrica!\n", nome);
    }
    if(ehTransitiva() != transitiva){
        printf("ERRO: [%s] - Problema na propriedade transitiva!\n", nome);
    }
    if(ehAntiSimetrica() != anti_simetrica){
        printf("ERRO: [%s] - Problema na propriedade anti-simetrica!\n", nome);
    }
    if(ehEquivalencia() != equivalencia){
        printf("ERRO: [%s] - Problema na verifiacao da equivalencia!\n", nome);
    }
}

//Relação 02 [por @bispojr]
void relacao_02(){

    char nome[4] = "R02";
    int conjS[3] = {1,2,3};
    int rho[5][2] = { {1,1}, {1,2}, {2,1}, {2,2}, {3,3} };

    int reflexiva = 1;          //Valor 1: Relação É reflexiva
    int simetrica = 1;          //Valor 1: Relação É simétrica
    int transitiva = 1;         //Valor 1: Relação É transitiva
    int anti_simetrica = 0;     //Valor 0: Relação NÃO É anti-simétrica
    int equivalencia = 1;       //Valor 1: Relação É uma equivalência

    printf("\n");

    if(ehReflexiva(rho) != reflexiva){
        printf("ERRO: [%s] - Problema na propriedade reflexiva!\n", nome);
    }
    if(ehSimetrica() != simetrica){
        printf("ERRO: [%s] - Problema na propriedade simetrica!\n", nome);
    }
    if(ehTransitiva() != transitiva){
        printf("ERRO: [%s] - Problema na propriedade transitiva!\n", nome);
    }
    if(ehAntiSimetrica() != anti_simetrica){
        printf("ERRO: [%s] - Problema na propriedade anti-simetrica!\n", nome);
    }
    if(ehEquivalencia() != equivalencia){
        printf("ERRO: [%s] - Problema na verifiacao da equivalencia!\n", nome);
    }
}

//Relação 03 [por @bispojr]
void relacao_03(){

    char nome[4] = "R03";
    int conjS[3] = {1,2,3};
    int rho[6][2] = { {1,1}, {2,2}, {2,3}, {3,2}, {1,3}, {3,1} };

    int reflexiva = 0;          //Valor 0: Relação NÃO é reflexiva
    int simetrica = 1;          //Valor 1: Relação É simétrica
    int transitiva = 1;         //Valor 1: Relação É transitiva
    int anti_simetrica = 0;     //Valor 0: Relação NÃO É anti-simétrica
    int equivalencia = 0;       //Valor 0: Relação NÃO é uma equivalência

    printf("\n");

    if(ehReflexiva(rho) != reflexiva){
        printf("ERRO: [%s] - Problema na propriedade reflexiva!\n", nome);
    }
    if(ehSimetrica() != simetrica){
        printf("ERRO: [%s] - Problema na propriedade simetrica!\n", nome);
    }
    if(ehTransitiva() != transitiva){
        printf("ERRO: [%s] - Problema na propriedade transitiva!\n", nome);
    }
    if(ehAntiSimetrica() != anti_simetrica){
        printf("ERRO: [%s] - Problema na propriedade anti-simetrica!\n", nome);
    }
    if(ehEquivalencia() != equivalencia){
        printf("ERRO: [%s] - Problema na verifiacao da equivalencia!\n", nome);
    }
}

#endif
