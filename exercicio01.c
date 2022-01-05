/*
Execicio 01
Criar programa que execute como um relogio e que receba uma entrada como hora no teclado e tenha uma saida com a resposta de 
"bom dia, boa tarde, boa noite ou horario invalido"
Autor: Luana Vidal de Negreiros Nobrega
*/

#include <stdio.h>
#include <string.h>

#define NOME_EXECUTOR "Luana Nobrega" //definindo veriavel constante com nome da unica pessoa que executa
#define ANO_ATUAL 2022 //definincdo variavel constante com ano atual
#define MES_ATUAL "Janeiro" //definindo variavel constante com mes atual


int main (int argc, char *argv[ ]){
    int hora; //variavel inteira para entrada do valor hora    

    printf("\nExecutor: %s\n", NOME_EXECUTOR); //imprimindo nome da pessoa que esta executando o relogio

    printf("\nData: 05/%s/%d\n", MES_ATUAL, ANO_ATUAL); //imprindo data em que o relogio esta sendo executado

    do{ //inicio da estrutura de repetiçao pra execuçao dos horarios digitados
        printf("\nDigite a hora: ");
        scanf("%d", &hora); //atribuindo valor a variavel "hora" atraves da entrada do usuario

        if(hora >= 0 && hora < 12){ //condicao para ser bom dia
            printf("\nBom dia\n");
        }
        else if(hora >= 12 && hora < 18){ //condicao para ser boa tarde
            printf("\nBoa tarde\n");
        }
        else if(hora >= 18 && hora <= 23){ //condicao para ser boa noite
            printf("\nBoa noite\n");
        }
        else{
            printf("\nHorario invalido\n"); //digitou horario diferente das condicoes eh invalido
        }
    }
    while(hora < 24); //enquanto a hora digitada for menor que 24, continuar rodando o programa, para sair digitar valor maior ou igual a 24

    return 0;
}