#include <stdio.h>

int main() {
    float tamanhoMB, velocidadeMbps, tempoSegundos, tempoMinutos;
    printf("Tamanho do arquivo (MB): ");
    scanf("%f", &tamanhoMB);
    printf("Velocidade do link (Mbps): ");
    scanf("%f", &velocidadeMbps);

    // Converter Mbps para MB/s (1 byte = 8 bits)
    tempoSegundos = tamanhoMB / (velocidadeMbps / 8);
    tempoMinutos = tempoSegundos / 60;

    printf("Tempo aproximado: %.2f minutos\n", tempoMinutos);
    return 0;
}