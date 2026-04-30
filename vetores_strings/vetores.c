#include <stdio.h>

void exibir_vetor(int vetor [], int n ){
   for (int i = 0; i < n; i++){
        int valor = vetor [i];
        printf("O indece do valor e:%d\n O valor do vetor e: %d\n\n,",i, valor); 
    } 
}

int main(){
    int tamanho; //tamno do vetor
    int valores[5];//inicialização do vetor
    
    printf("digite a quantidade de valores que gostaria no vetor:");
    scanf("%d", &tamanho);
    valores[tamanho];//vetor a ser utilizado

// exibir os valores dentro do vetor
    exibir_vetor(valores,tamanho);

// atraves da interação com usuario , armazenar os valores 1,5,4
for(int i = 0; i < 3; i++){
    printf("digite o valor que gostaria de armazenar no indice %d:",i);
    scanf("%d", &valores[i]);
}

exibir_vetor(valores,tamanho);
return 0;
}