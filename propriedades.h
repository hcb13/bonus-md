#ifndef _PROPRIEDADES_H
#define _PROPRIEDADES_H

//Função ehReflexiva [por @fonzaex]
//[Adaptada por @bispojr]
int ehReflexiva(int rho2[][2]);
int ehReflexiva(int rho2[][2]){ // funcao para verificar se eh reflexiva, return 0 =  falso, return 1 = verdade.

    //AINDA FALTA PASSAR O VALOR DO CONJS POR REFERENCIA E VERIFICAR SE TODO X PERTENCE AO COJUNTO S;
    //MOSTRANDO OS SUBCONJUNTOS, EM FORMA DE MATRIZ

    //UNICA LOGICA QUE ACHEI FOI ESSA, DEVE-SE IMPLEMENTAR EM CIMA NOS LAÇOS FOR
    if(rho2[0][0]==rho2[0][1] && rho2[1][0]==rho2[1][1] && rho2[2][0]==rho2[2][1]){
        return 1;
    }
    else{
        return 0;
    }
}
int ehSimetrica(){ // funcao para verificar se eh simetrica, return 0 =  falso, return 1 = verdade.
    return 1;
}
int ehTransitiva(){ // funcao para verificar se eh transitiva, return 0 =  falso, return 1 = verdade.
    return 0;
}
int ehAntiSimetrica(){ // funcao para verificar se eh anti-simetrica, return 0 =  falso, return 1 = verdade.
    return 1;
}
int ehEquivalencia(){ // funcao para verificar se eh anti-simetrica, return 0 =  falso, return 1 = verdade.
    return 0;
}

#endif
