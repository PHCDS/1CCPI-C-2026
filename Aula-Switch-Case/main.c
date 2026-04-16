#include <stdio.h>


void menu(){
    printf("---MENU---\n");
    printf("1-Calculadora media do aluno \n");
    printf("2-verificador de presenca \n");
    printf("aprovacao");
}

float media_aritimetica(float nota1, float nota2){

    return (nota1 + nota2)/2; 
}

void verificador_presenca(int p){
  
    if (p >= 75 && p <= 100){
            printf("presenca em dia \n");
        }else if(p >= 0 && p <=74){
             printf("presenca pendente \n");
        }else{
            printf("presenca invalida \n");
        }

}
void criterio_aprovacao(float m){

    if (m >= 6 && m <=10){
        printf("aprovado");
    } else if (m >= 4 ){
        printf("recuperacao");
    }else{
        printf("reprovado");

    }

}

int main() {

    int opcao, presenca;
    float media, n1, n2;
 
    menu();
    printf("Escolha uma das opcoes");
    scanf("%d", &opcao );

    switch (opcao) {
        case 1: 
        printf("---calculadora de media--- \n"); 
        printf("digite sua primeira nota");
        scanf("%f", &n1);
        printf("digite sua segunda nota");
        scanf("%f", &n2);
        media = media_aritimetica(n1, n2);
        printf("sua media e: %.2f", media);
        break;
        
        
        case 2: printf("---verificador de presenca---; \n"); 
        printf("digite seu precentual de presenca(0-100)\n");
        scanf("%d", &presenca);
        verificador_presenca(presenca);
        break;

       
    

        case 3:
        criterio_aprovacao(media);
        
        break;  
              
        default: printf("opcao invalida \n");       
            
    }
    return 0;
}