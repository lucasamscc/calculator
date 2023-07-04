/* No Projeto-1 os alunos deverão produzir uma calculadora na linguagem de programação C, cujas operações devem ser no mínimo
 as seguintes: adição, subtração, multiplicação, divisão, potenciação, raiz quadrada, seno, cosseno, tangente e o fatorial de um valor.
 Todos os parâmetros devem ser lidos do teclado. Cuidar para poder utilizar graus e/ou radianos. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int adicao();
int subtracao();
float multiplicacao();
float divisao();
int potencia();
int raizQuadrada();
double sct(); // seno, cosseno e tangente
int fatorial();

 int main(){

    int operacao;
    
    printf("\tBem vindo a calculadora em C\n");
    printf("Informe a opcao que deseja: \n");
    printf("1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n5. Potenciacao\n6. Raiz Quadrada\n7. Seno, Cosseno, e Tangente.\n8. Fatorial de um Valor\n");
    scanf("%d", &operacao);


    switch (operacao) {
    case 1:
        printf("Adicao = %d\n", adicao());
        break;
    case 2:
        printf("Subtracao = %d\n", subtracao());
        break;
    case 3:
        printf("Multiplicacao = %f\n", multiplicacao());
        break;
    case 4:
        printf("Divisao = %f\n", divisao());
        break;
    case 5:
        printf("Potencia = %d\n", potencia());
        break;
    case 6:
        printf("Raiz Quadrada = %d\n", raizQuadrada());
        break;
    case 7:
        printf("Resposta = %lf\n", sct());
        break;
    case 8:
        printf("Fatorial = %d\n", fatorial());
        break;
    default:
        break;
    }
    int opcao;
    printf("Deseja continuar? 1. sim 2. nao: ");
    scanf("%d", &opcao);
    if(opcao ==1){
    	system("cls");
        return main();
	}
    printf("FIM DO PROGRAMA!!!");
    return 0;
 }

 int adicao(){

    int num1,num2;

    printf("Informe o 1 numero: ");
    scanf("%d", &num1);
    printf("Informe o 2 numero: ");
    scanf("%d", &num2);

    return num1 + num2;
}

int subtracao(){
    int num1,num2;
    printf("Informe o 1 valor: ");
    scanf("%d", &num1);
    printf("Informe o 2 numero: ");
    scanf("%d", &num2);
    int sub = num1 - num2;    
    return sub;
}

float multiplicacao(){
    float num1,num2;
    printf("Informe o 1 numero: ");
    scanf("%f", &num1);
    printf("Informe o 1 numero: ");
    scanf("%f", &num2);

    float mult = num1 * num2;
    return mult;
}

float divisao(){

    float num1, num2;
    printf("Informe o 1 numero: ");
    scanf("%f",  &num1);
    printf("Informe o 1 numero: ");
    scanf("%f", &num2);

    float div = num1/num2;

    return div;
}

int potencia(){

    int base, expo;

    printf("Informe a base: ");
    scanf("%d", &base);
    printf("Informe o expoente: ");
    scanf("%d", &expo);

    int soma = 1;

    for(int i = 0; i < expo; i++){
        soma *= base;
    }

    return soma;
}

int raizQuadrada(){
    int numero;

    printf("Informe um valor inteiro: ");
    scanf("%d", &numero);

    for(int i = 0; i < numero; i++){
        if ( pow(i,2) == numero){
            return i;
        }
    }

}

double sct(){
    int op;

    printf("(1). Seno\n(2). Cosseno\n(3). Tangente\n");
    scanf("%d", &op);

    double seno = 0;
    double cosseno = 0;
    double tangente = 0;

    double valor;
    printf("Informe o valor: ");
    scanf("%lf", &valor);
    switch (op)
    {
    case 1:
        seno = sin(valor);
        return seno;
        break;
    case 2:
        cosseno = cos(valor);
        return cosseno;
    case 3: 
        tangente = tan(valor);
        return tangente;
    default:
        break;
    }
}

int fatorial(){
    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);

    int fat = 1;

    for(int i = 1; i <= num; i++){
        fat *= i;
    }
    return fat;
}
