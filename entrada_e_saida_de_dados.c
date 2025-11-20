#include <stdio.h>
int main()
{
    char nome[30];
    char cidade[30];
    int idade;
    
    printf("Digite seu nome:\n");
    scanf("%s", nome);
    
    printf("Qual a sua idade:\n");
    scanf("%d", &idade);

    printf("Digite onde voçê mora:\n");
    scanf("%s", cidade);


    printf("seu nome e:%s\n", nome);
    printf("Voçê tem:%d anos\n", idade);
    printf("Mora em:%s\n", cidade);

    return 0;
}
