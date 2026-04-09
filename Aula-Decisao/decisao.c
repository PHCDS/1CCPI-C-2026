#include<stdio.h>

int main (){

    float n1;
    float n2;
    int presenca;
    float media;

    printf("digite a nota 1:");
    scanf("%f", &n1);
    printf("digite nota 2:");
    scanf("%f", &n2);
    printf("digite sua presenca");
    scanf("%d", &presenca);

    media = ((float)n1 + n2)/2;
    printf("a sua media e: %.2f \n", media);

    if (media >= 9 && presenca >= 75){
        printf ("aluno aprovado com exelencia!\n");      
    }else if (media >= 6 && presenca >= 75){
        printf("aprovado");
    }else if (media >= 4 && presenca >= 75){ 
        printf("aluno de recuperação");
    }else if (media >= 6 && presenca < 75){
        printf("aluno reprovado por falta");
    }else{
        printf("aluno reprovado");
    }


return 0;
}