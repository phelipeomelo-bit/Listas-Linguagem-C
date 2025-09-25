#include <stdio.h>

int main() {
    int destino, idaVolta;
    float valor;

    printf("Digite o código do destino (1-Morros, 2-Barreirinhas, 3-Bacabeira, 4-Rosário): ");
    scanf("%d", &destino);
    
    printf("Digite 1 para apenas ida ou 2 para ida e volta: ");
    scanf("%d", &idaVolta);

    switch (destino) {
        case 1:
            valor = 120;
            break;
        case 2:
            valor = 200;
            break;
        case 3:
            valor = 50;
            break;
        case 4:
            valor = 80;
            break;
        default:
            valor = 0;
    }

    if (valor == 0) {
        printf("Destino inválido.\n");
    } else {
        if (idaVolta == 2) {
            valor *= 2 * 0.90; // ida e volta com 10% de desconto
        }
        printf("Valor da passagem: R$ %.2f\n", valor);
    }

    return 0;
}
