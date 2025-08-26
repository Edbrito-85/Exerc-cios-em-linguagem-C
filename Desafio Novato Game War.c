#include <stdio.h>
#include <string.h>

// Definição da struct Territorio
typedef struct {
    char nome[30];   // Nome do território
    char cor[10];    // Cor do exército
    int tropas;      // Quantidade de tropas
} Territorio;

int main() {
    Territorio territorios[5];  // Vetor para armazenar 5 territórios
    int i;

    printf("=== Cadastro de Territórios ===\n\n");
    printf("Vamos cadastrar os 5 territórios iniciais do nosso mundo.\n\n");

    // Laço para cadastro dos territórios
    for (i = 0; i < 5; i++) {
        printf("Cadastrando Território %d\n", i + 1);  // Exibe número correto do território

        printf("Digite o nome do território: ");
        fgets(territorios[i].nome, sizeof(territorios[i].nome), stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = 0; // Remove o '\n'

        printf("Digite a cor do exército: ");
        fgets(territorios[i].cor, sizeof(territorios[i].cor), stdin);
        territorios[i].cor[strcspn(territorios[i].cor, "\n")] = 0; // Remove o '\n'

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
        getchar(); // Limpa o '\n' que sobra no buffer do teclado

        printf("\n"); // Espaço para melhor visualização
    }

    // Exibição dos dados cadastrados
    printf("=== Dados dos Territórios ===\n\n");
    for (i = 0; i < 5; i++) {
        printf("Território %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Quantidade de tropas: %d\n\n", territorios[i].tropas);
    }

    return 0;
}










