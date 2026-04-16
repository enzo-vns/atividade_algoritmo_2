#include <stdio.h>

int main() {
    float peso, altura, imc;
    printf("Digite seu peso (kg) e altura (m): ");
    scanf("%f %f", &peso, &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC e: %.2f\n", imc);
    return 0;
}