/*
Exercicio 02
Nome: Luana Vidal de Negreiros Nobrega
Faz-Tudo
Programa de estudo de menu atraves do switch com indicaçoes para
manipulaçao de strings, operaçoes matematicas, criaçoes de matrizes, etc
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <math.h>

#define NOME "Luana Vidal de Negreiros Nobrega" 
#define CONTATO "luanavidalnn@gmail.com"
#define DATA_ORIGEM "06/01/2022"

#define LIN 5
#define COL 3

void esperar (int seconds)
{
  clock_t endwait;
  endwait = clock () + seconds * CLK_TCK;
  while (clock() < endwait) {}
}

int main(int argc, char const *argv[])
{
    int dia;
    int mes; 
    int ano;
    int opcoes;
    int cont = 0;   

    printf("\nNome: %s", NOME);
    printf("\nContato: %s", CONTATO);
    printf("\nData de origem: %s\n", DATA_ORIGEM);

    printf("\nPor favor, informar data da alteracao do programa:\n");
    printf("Dia: ");
    scanf("%d", &dia);
    printf("Mes: ");
    scanf("%d", &mes);
    printf("Ano: ");
    scanf("%d", &ano);
    printf("Data de alteracao registrada: %d/%d/%d\n", dia, mes, ano);    

    do
    {
        printf("\nEscolha a opcao: \n1 -  Chamada para impressao de informacoes pessoais\n2 -  Operacoes matematicas\n3 -  Converter Fahrenheit em Celsius\n4 -  Calcular fatorial\n5 -  Criar vetor de string\n6 -  Tabuada\n7 -  Matriz do tipo double\n8 -  Contagem decrescente\n9 -  Modificador de string\n10 - Codigo ASCII do caracter\n0 -  Exit\n");
        scanf("%d", &opcoes);

        switch (opcoes)
        {
        case 1:
            { 
            char nome[20];
            char sobrenome[50];
            int ano_nascimento;
            int cont = 0;
            int i = 0;

            printf("\nDigite seu primeiro nome: ");
            scanf("%s", &nome);
            printf("\nDigite seu sobrenome: ");
            scanf("%s", &sobrenome);
            printf("\nDigite ano que voce nasceu: ");
            scanf("%d", &ano_nascimento);
            printf("\nNome completo: %s %s\n", nome, sobrenome);

            for(i = 0; i < strlen(nome)+strlen(sobrenome); i++)
            {
                cont += 1;
            }

            printf("\nIdade + numero de carateres: %d\n", (ano - ano_nascimento) + cont);
            
            system("pause");
            
            break;
            }
        case 2:
            {
            int numero1;
            int numero2;
            float soma;
            float produto; 
            float quadrado;
            float raiz; 
            float seno; 
            float modulo;

            printf("\nDigite o primeiro numero: ");
            scanf("%d", &numero1);
            printf("Digite o segundo numero: ");
            scanf("%d", &numero2);

            soma = numero1 + numero2;
            produto = numero1 * pow(numero2,2); 
            quadrado = pow(numero1,2);
            raiz = sqrt(pow(numero1,2) + pow(numero2,2));
            seno = sin(numero1 - numero2);
            modulo = abs(numero1);

            printf("\na) Soma dos numeros: %.1f\n", soma);
            printf("b) O produto do primeiro pelo quadrado do segundo: %.1f\n", produto);
            printf("c) O quadrado do primeiro numero: %.1f\n", quadrado);
            printf("d) A raiz quadrada da soma dos quadrados: %.1f\n", raiz);
            printf("e) O seno da diferenca do primeiro pelo segundo: %.1f\n", seno);
            printf("f) O modulo do primeiro: %.1f\n", modulo);
            
            system("pause");
            break;
            }
        case 3:
            {
                double grau;
                double celsius;

                printf("\nDigite a temperatura em Fahrenheit: ");
                scanf("%lf", &grau);

                celsius = (grau - 32.0) * (5.0/9.0);

                printf("\nResultado da conversao para Celsius: %.2lf\n", celsius);
                
                system("pause");
                break;
            }
        case 4:
            {
                int numero;
                int fatorial;

                printf("\nDigite um numero para calcular seu fatorial: ");
                scanf("%d", &numero);
                
                for(fatorial = 1; numero > 1; numero--)
                {
                    fatorial *= numero;             
                }

                printf("Resultado fatorial do numero informado eh %d\n", fatorial);
                
                system("pause");
                break;
            }
        case 5:
           /*nao consegui desenvolver porque deixei por ultimo e acabou que fique sem tempo hábil*/             
            break;
        case 6:
            {
                int x;
                int y;   

                for (y = 1; y <= 10; y++)
                {
                    for (x = 1; x <= 10; x++)
                    {
                        printf("%2d x %2d = %2d\n", x, y, y * x);
                    }
                    printf("\n");        
                } 

                system("pause");
                break;
            }
        case 7:
           {
                int i;
                int j;
                double matriz[5][3];                                
                
                printf("Digite os valores que irão compor a matriz: ");
                for(i = 0; i < LIN; i++)
                {        
                    for(j = 0; j < COL; j++)
                    {
                        scanf("%d ", &matriz[i][j]);
                    }            
                    
                } 

                 for(i = 0; i < LIN; i++)
                {        
                    for(j = 0; j < COL; j++)
                    {
                        printf("[%d] [%d] = %d\n", i, j, matriz[i][j]);
                    }
                }
                system("pause");                      
                break;
            }
        case 8:
            {
                int cont = 0;

                printf("\nContando: ");

                for(cont = 100; cont > 0; cont--)
                {
                    printf("%d \n", cont);
                }
                
                system("pause");
                break;
            }
        case 9:
            {
                char texto[50];
                int cont = 0;
                int i = 0;

                printf("\nDigite uma palavra ou frase: ");
                scanf("%s", &texto); 

                for(i = 0; i < strlen(texto); i++)
                {
                    if(texto[i] == 'a')
                    {
                        cont += 1;
                        texto[i] = 'b';
                    }
                }

                printf("Numero de caracter 'a' = %d\n", cont);
                printf("Texto modificado: %s\n", texto);
                
                system("pause");
                break;
            }
        case 10:
            {
                char caracter;

                printf("\nDigite um caracter: ");
                scanf("%s", &caracter);

                printf("\nCaracter digitado: %c", caracter);
                printf("\nCodico ASCII correspondente: %d\n", caracter);
                
                system("pause");
                break;
            }
        default:
            break;
    }

    system("cls");

    } 
    
    while (opcoes != 0);

    printf("\nContagem regressiva para sair do programa:\n");

    for (cont = 10; cont > 0; cont--)
    {
        printf("%d\n", cont);
        esperar(1);
    }

    printf("FIM!\n");   

    return 0;
}
