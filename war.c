// ============================================================================
//         PROJETO WAR ESTRUTURADO - DESAFIO DE CÓDIGO
// ============================================================================
//        
// ============================================================================
// OBJETIVOS:
// - Modularizar completamente o código em funções especializadas.
// - Implementar um sistema de missões para um jogador.
// - Criar uma função para verificar se a missão foi cumprida.
// - Utilizar passagem por referência (ponteiros) para modificar dados e
//   passagem por valor/referência constante (const) para apenas ler.
// - Foco em: Design de software, modularização, const correctness, lógica de jogo.
// ============================================================================





// Nível Novato/Aventureiro/Mestre - Começo //
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Vetor Territorio com suas caracteristicas/variaveis
typedef struct { 

    char nome [30] ;
    char cor [10] ;
    int tropas ;

} Territorio ;

// Função atacar
void atacar(Territorio *atacante, Territorio *defensor) {
    printf("\n--- BATALHA: %s ataca %s! ---\n", atacante->nome, defensor->nome);

    // 1. Rolar os dados de 1 a 6 para os dois lados
    int dado_atacante = (rand() % 6) + 1;
    int dado_defensor = (rand() % 6) + 1;

    printf("Dado Atacante: %d | Dado Defensor: %d\n", dado_atacante, dado_defensor);

    if (dado_atacante >= dado_defensor) {

        printf("Atacante venceu a rodada!\n");
        printf("Tropas inimigas abatidas!\n") ;
        defensor->tropas--; 

        if (defensor->tropas == 0) {

            strcpy(defensor->cor, atacante->cor);
            defensor->tropas = atacante->tropas / 2;
            atacante->tropas = atacante->tropas - defensor->tropas; 

        }
        
    } else {

        printf("Defensor venceu a rodada!\n");
        atacante->tropas--;

    }

}

// Mochila do jogador
void atribuirMissao(char *destino, char *missoes[], int totalMissoes) {

    int missao_sorteada = (rand () % totalMissoes) ;
    
    strcpy(destino, missoes [missao_sorteada]) ; 

}

// Função de Exibir Mapa
void exibirMapa(Territorio *mapa, int tamanho) {
    printf("\n--- STATUS DO MAPA ---\n");
    
    for (int i = 0; i < tamanho; i++) {

        printf ("Territorio: %s, Cor: %s, Tropas: %d\n", mapa[i].nome, mapa[i].cor, mapa[i].tropas);

    }

}

// Função de Limpeza de memória
void liberarMemoria(Territorio *mapa, char *missao) {

    free(mapa);
    free(missao);

    printf("Memoria liberada com sucesso!\n");

}

// Função que verifica se a condição de vitória foi atingida
int verificarMissao(char *missao, Territorio *mapa, int tamanho) {
    
    // Verifica se a missão sorteada foi a de destruir o Azul
    if (strcmp(missao, "Destruir o exercito Azul") == 0) {
        int azul_vivo = 0;
        
        // Varre o mapa para ver se ainda sobrou alguma bandeira azul
        for (int i = 0; i < tamanho; i++) {
            // Checa tanto "Azul" quanto "azul" para evitar erros de digitação
            if (strcmp(mapa[i].cor, "Azul") == 0 || strcmp(mapa[i].cor, "azul") == 0) {
                azul_vivo = 1; // Encontrou um exército azul ainda vivo!
            }
        }
        
        // Se depois de varrer o mapa inteiro não achou nenhum azul:
        if (azul_vivo == 0) {
            return 1; // Retorna 1 (Missão Cumprida / Vitória)
        }
    }

    // Verifica se a missão sorteada foi a de destruir o Vermelho
    else if (strcmp(missao, "Destruir o exercito Vermelho") == 0) {
        int vermelho_vivo = 0;
        
        // Varre o mapa para ver se ainda sobrou alguma bandeira vermelha
        for (int i = 0; i < tamanho; i++) {
            if (strcmp(mapa[i].cor, "Vermelho") == 0 || strcmp(mapa[i].cor, "vermelho") == 0) {
                vermelho_vivo = 1; // Encontrou um vermelho vivo!
            }
        }
        
        if (vermelho_vivo == 0) {
            return 1; // Vitória!
        }
    }
    
    // Se for outra missão (ainda não implementada) ou o azul estiver vivo, retorna 0
    return 0; 
}

// A main
int main () {

    // A semente aleatória para o ataque e defesa
    srand(time(NULL));

    // Vetor com 5 missões secretas
    char *lista_missoes[5] = {
        "Conquistar 2 territorios",
        "Destruir o exercito Azul",
        "Conquistar 5 territorios",
        "Destruir o exercito Vermelho",
        "Sobreviver por 5 rodadas"
    } ;

    // Alocando espaço dinâmico para um texto de até 50 letras
    char *missao_jogador = (char *)malloc(50 * sizeof(char));

    // Sorteando a missão
    atribuirMissao(missao_jogador, lista_missoes, 5);
    
    // Revelando para o jogador
    printf("\n*** SUA MISSAO SECRETA: %s ***\n\n", missao_jogador);

    // O tamanho dinâmico
    int qntd_territorios ;
    printf ("Quantos territórios deseja cadastrar no mapa?") ;
    scanf ("%d", &qntd_territorios) ;

    // A Alocação
    Territorio *mapa = (Territorio *)calloc(qntd_territorios, sizeof(Territorio));

    // Laço para receber os dados do usuário
    for (int i = 0; i < qntd_territorios; i++ ) { 

        printf ("Digite o nome do território: \n") ;
        scanf (" %[^\n]", mapa[i].nome) ;

        printf ("Digite a cor do exército: \n") ;
        scanf (" %[^\n]", mapa[i].cor) ;

        printf ("Digite a quantidade de tropas do seu exército: \n") ;
        scanf ("%d", &mapa[i].tropas) ;

    }

    exibirMapa(mapa, qntd_territorios);

    // --- SIMULAÇÃO DE BATALHA ---
    atacar(&mapa[0], &mapa[1]);

    printf("\n--- RELATÓRIO PÓS-GUERRA ---\n");
    exibirMapa(mapa, qntd_territorios);

    printf("\n--- VERIFICACAO DE VITORIA ---\n");
    int vitoria = verificarMissao(missao_jogador, mapa, qntd_territorios);
    
    if (vitoria == 1) {
        printf("🏆 PARABENS! Voce cumpriu sua missao secreta e venceu o jogo!\n\n");
    } else {
        printf("A guerra continua... Objetivo ainda nao alcancado.\n\n");
    }
    
    // Limpeza final de memória
    liberarMemoria(mapa, missao_jogador);

    return 0;

}
// Nível Novato/Aventureiro/Mestre - Fim // 