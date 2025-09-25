#include <stdio.h>

int main() {
    int codigoLivro, tipoUsuario, dias;
    
    printf("Digite o código do livro: ");
    scanf("%d", &codigoLivro);
    
    printf("Digite o tipo de usuário (1-Professor, 2-Aluno): ");
    scanf("%d", &tipoUsuario);

    if (tipoUsuario == 1) {
        dias = 7;
    } else if (tipoUsuario == 2) {
        dias = 3;
    } else {
        dias = 0;
    }

    if (dias == 0) {
        printf("Usuário inválido!\n");
    } else {
        printf("Recibo: Livro %d, usuário %d, dias de empréstimo: %d\n", codigoLivro, tipoUsuario, dias);
    }

    return 0;
}
