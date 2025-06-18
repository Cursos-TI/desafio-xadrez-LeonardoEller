#include <stdio.h>
#include <stdlib.h>


// --- REQUISITO: Definição de Constantes ---
// Usamos constantes para definir o número de casas que cada peça irá se mover.
// Isso facilita a manutenção do código, evitando "números mágicos".
#define MOVIMENTOS_BISPO 5
#define MOVIMENTOS_TORRE 5
#define MOVIMENTOS_RAINHA 8

// Função principal do programa
int main() {

    printf("============================================\n");
    printf("  INICIANDO TESTE DE MOVIMENTACAO DE PECAS  \n");
    printf("============================================\n\n");

    // --- 1. Movimentação do Bispo (Usando o loop 'for') ---
    // O loop 'for' é ideal quando sabemos exatamente quantas vezes queremos repetir o bloco de código.
    printf("--- Movimentacao do Bispo (%d casas na diagonal superior direita) ---\n", MOVIMENTOS_BISPO);
    
    int i; // Variável de controle do loop
    for (i = 0; i < MOVIMENTOS_BISPO; i++) {
        // Imprime o número do movimento atual (i + 1 para começar a contagem em 1)
        printf("Movimento %d:\n", i + 1);
        // Para o movimento diagonal, imprimimos as duas direções básicas
        printf("  Cima\n");
        printf("  Direita\n");
    }
    printf("\n--- Fim da movimentacao do Bispo ---\n\n\n");


    // --- 2. Movimentação da Torre (Usando o loop 'while') ---
    // O loop 'while' verifica a condição ANTES de executar o bloco de código.
    printf("--- Movimentacao da Torre (%d casas para a direita) ---\n", MOVIMENTOS_TORRE);

    int contador_torre = 0; // Inicializa o contador de movimentos da torre
    while (contador_torre < MOVIMENTOS_TORRE) {
        printf("Movimento %d: Direita\n", contador_torre + 1);
        contador_torre++; // Incrementa o contador para evitar um loop infinito
    }
    printf("\n--- Fim da movimentacao da Torre ---\n\n\n");


    // --- 3. Movimentação da Rainha (Usando o loop 'do-while') ---
    // O loop 'do-while' executa o bloco de código PELO MENOS UMA VEZ e só depois verifica a condição.
    printf("--- Movimentacao da Rainha (%d casas para a esquerda) ---\n", MOVIMENTOS_RAINHA);
    
    int contador_rainha = 0; // Inicializa o contador de movimentos da rainha
    do {
        printf("Movimento %d: Esquerda\n", contador_rainha + 1);
        contador_rainha++; // Incrementa o contador
    } while (contador_rainha < MOVIMENTOS_RAINHA);
    printf("\n--- Fim da movimentacao da Rainha ---\n\n\n");

    // --- Pausa para visualização do resultado ---
    // Esta parte do código impede que o console feche imediatamente após a execução.
    printf("============================================\n");
    printf("   TESTE FINALIZADO COM SUCESSO!          \n");
    printf("============================================\n");
    printf("Pressione a tecla ENTER para fechar o programa...");
    
    // Aguarda o usuário pressionar uma tecla. getchar() é uma forma simples e portável de fazer isso.
    getchar(); 

    // Retorna 0 para indicar que o programa foi executado com sucesso.
    return 0;
}
