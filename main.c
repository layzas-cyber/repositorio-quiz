// Jogo de Quiz em C
// Atividade Pontuada EXTRA
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int iniciarQuiz() {
    char resposta;
    int pontos = 0;

    printf("\n========== QUIZ MPB - MUSICA POPULAR BRASILEIRA ==========\n\n");

    printf("Pergunta 1: Quem e o compositor de 'Garota de Ipanema'?\n");
    printf("a) Caetano Veloso\n");
    printf("b) Tom Jobim\n");
    printf("c) Chico Buarque\n");
    printf("Sua resposta: ");
    scanf(" %c", &resposta);
    if (tolower(resposta) == 'b') {
        printf("Correto!\n\n");
        pontos += 2;
    } else {
        printf("Incorreto! A resposta correta e 'b'\n\n");
    }

    printf("Pergunta 2: Em qual estado brasileiro surgiu a MPB?\n");
    printf("a) Bahia\n");
    printf("b) Rio de Janeiro\n");
    printf("c) Sao Paulo\n");
    printf("Sua resposta: ");
    scanf(" %c", &resposta);
    if (tolower(resposta) == 'b') {
        printf("Correto!\n\n");
        pontos += 2;
    } else {
        printf("Incorreto! A resposta correta e 'b'\n\n");
    }

    printf("Pergunta 3: Como o estilo musical foi conhecido antes de se chamar Musica Popular Brasileira (MPB)?\n");
    printf("a) Musica Popular Moderna\n");
    printf("b) Musica Popular Baiana\n");
    printf("c) Musica Popular\n");
    printf("Sua resposta: ");
    scanf(" %c", &resposta);
    if (tolower(resposta) == 'a') {
        printf("Correto!\n\n");
        pontos += 2;
    } else {
        printf("Incorreto! A resposta correta e 'a'\n\n");
    }

    printf("Pergunta 4: Qual e a nacionalidade do cantor Ritchie, de Menina Veneno?\n");
    printf("a) Brasileiro\n");
    printf("b) Britanico\n");
    printf("c) Argentino\n");
    printf("Sua resposta: ");
    scanf(" %c", &resposta);
    if (tolower(resposta) == 'b') {
        printf("Correto!\n\n");
        pontos += 2;
    } else {
        printf("Incorreto! A resposta correta e 'b'\n\n");
    }

    printf("Pergunta 5: A MPB surgiu como uma sucessao de qual movimento musical?\n");
    printf("a) Jovem Guarda\n");
    printf("b) Tropicalia\n");
    printf("c) Bossa Nova\n");
    printf("Sua resposta: ");
    scanf(" %c", &resposta);
    if (tolower(resposta) == 'c') {
        printf("Correto!\n\n");
        pontos += 2;
    } else {
        printf("Incorreto! A resposta correta e 'c'\n\n");
    }

    return pontos;
}

void exibirResultado(int pontos) {
    printf("\n========== RESULTADO FINAL ==========\n");
    printf("Pontuacao total: %d pontos\n", pontos);

    if (pontos >= 0 && pontos <= 4) {
        printf("Precisa estudar mais!\n");
    } else if (pontos >= 6 && pontos <= 8) {
        printf("Muito bem!\n");
    } else if (pontos == 10) {
        printf("Excelente, parabens!\n");
    }

    printf("=====================================\n\n");
}

void exibirRegras() {
    printf("\n>>> VER REGRAS <<<\n");
    printf("----------------------------------------\n");
    printf("COMO JOGAR:\n");
    printf("1. O quiz possui 5 perguntas sobre MPB\n");
    printf("2. Cada pergunta tem 3 alternativas (a, b, c)\n");
    printf("3. Cada resposta correta vale 2 pontos\n");
    printf("4. Pontuacao maxima: 10 pontos\n");
    printf("5. Responda com a letra da alternativa\n");
    printf("----------------------------------------\n");
    printf("Boa sorte e divirta-se!\n\n");
}

int main() {
    int opcao;
    int pontos;
    int continuar = 1;

    printf("========================================\n");
    printf("  BEM-VINDO AO QUIZ DE MPB (MUSICA POPULAR BRASILEIRA)!\n");
    printf("========================================\n");
    printf("Ola! Prepare-se para se divertir com\n");
    printf("o classico da musica brasileira!\n");
    printf("========================================\n\n");

    while (continuar) {
        printf("===== MENU PRINCIPAL =====\n");
        printf("1 - Iniciar Quiz\n");
        printf("2 - Ver Regras\n");
        printf("3 - Sair\n");
        printf("==========================\n");
        printf("Digite sua opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                {
                    char jogarNovamente;
                    do {
                        printf("\n>>> INICIAR QUIZ <<<\n");
                        pontos = iniciarQuiz();
                        exibirResultado(pontos);

                        printf("Deseja jogar novamente? (s/n): ");
                        scanf(" %c", &jogarNovamente);
                        jogarNovamente = tolower(jogarNovamente);

                        if (jogarNovamente == 's') {
                            printf("\n");
                        } else if (jogarNovamente == 'n') {
                            printf("\nVoltando ao menu principal...\n\n");
                        } else {
                            printf("\nOpcao invalida! Voltando ao menu principal...\n\n");
                            jogarNovamente = 'n';
                        }
                    } while (jogarNovamente == 's');
                }
                break;

            case 2:
                exibirRegras();
                break;

            case 3:
                printf("\nObrigado por jogar! Ate logo!\n");
                continuar = 0;
                break;

            default:
                printf("\n>>> OPCAO INVALIDA! <<<\n");
                printf("Por favor, escolha uma opcao entre 1 e 3.\n\n");
                break;
        }
    }

    return 0;
}
