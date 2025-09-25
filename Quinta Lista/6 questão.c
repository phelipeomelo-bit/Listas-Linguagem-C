#include <stdio.h>

int main() {
    int anos;
    
    printf("Digite o tempo de serviço em anos: ");
    scanf("%d", &anos);

    if (anos >= 1 && anos <= 2) {
        printf("Categoria: Júnior\n");
    } else if (anos >= 3 && anos <= 5) {
        printf("Categoria: Pleno A\n");
    } else if (anos == 6) {
        printf("Categoria: Pleno B\n");
    } else if (anos >= 7) {
        printf("Categoria: Sênior\n");
    } else {
        printf("Tempo inválido\n");
    }

    return 0;
}
