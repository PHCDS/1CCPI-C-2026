#include <stdio.h>
#include <string.h>
int main (){

    char nome[50]; //= {'p','e','d','r','o','\0','\n'};
    printf("digite seu nome completo:");
    //scanf("%s", &nome);
    fgets(nome, 50, stdin);
    int tamanho_antes = strlen(nome);
   
    nome[strcspn(nome,"\n")] = '\0';
   
    int tamanho_depois = strlen(nome);
   

    printf("tamnho antes da funcao strpn:" "%d \n", tamanho_antes);
    printf("tamnho depois da funcao strpn:" "%d \n", tamanho_depois);
    printf("ola,%s\n",nome);

    char nome2[5];
    strcpy(nome2, nome);
    printf("como posso te ajudar?", "%s\n", nome2);

    return 0;
}