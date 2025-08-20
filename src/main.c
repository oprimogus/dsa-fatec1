#include <stdio.h>
#include <stdlib.h>
#include "exercises/one.h"

void clearDisplay() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void showExercise(const char* exerciseName) {
    printf("\n  🔹 EXECUTANDO EXERCÍCIO: %s ...\n", exerciseName);
    printf("  ═══════════════════════════════════════════════════════════════════════════\n");
}

void showBanner() {
    printf("\n");
    printf("   ██████╗ ██████╗ ██████╗ ██╗███╗   ███╗ ██████╗  ██████╗ ██╗   ██╗███████╗\n");
    printf("  ██╔═══██╗██╔══██╗██╔══██╗██║████╗ ████║██╔═══██╗██╔════╝ ██║   ██║██╔════╝\n");
    printf("  ██║   ██║██████╔╝██████╔╝██║██╔████╔██║██║   ██║██║  ███╗██║   ██║███████╗\n");
    printf("  ██║   ██║██╔═══╝ ██╔══██╗██║██║╚██╔╝██║██║   ██║██║   ██║██║   ██║╚════██║\n");
    printf("  ╚██████╔╝██║     ██║  ██║██║██║ ╚═╝ ██║╚██████╔╝╚██████╔╝╚██████╔╝███████║\n");
    printf("   ╚═════╝ ╚═╝     ╚═╝  ╚═╝╚═╝╚═╝     ╚═╝ ╚═════╝  ╚═════╝  ╚═════╝ ╚══════╝\n");
    printf("\n");
    printf("  ═══════════════════════════════════════════════════════════════════════════\n");
    printf("   Lista de Exercícios - Algoritmos e Lógica de Programação\n");
    printf("  ═══════════════════════════════════════════════════════════════════════════\n");
}

typedef struct {
    char* title;
    void (*execute)(void);
} Exercise;

Exercise NewExercise(char* title, void (*execute)(void)) {
    Exercise exercise = {title, execute};
    return exercise;
}

Exercise* exercisesFactory(size_t *count) {
    static Exercise exercises[] = {
        {"Receba via teclado um número qualquer e exiba o seu sucessor e seu antecessor.", one}
        // NewExercise("Exercício 2", two),
        // NewExercise("Exercício 3", three),
    };

    *count = sizeof(exercises) / sizeof(exercises[0]); // quantidade
    return exercises;
}

int main() {
    size_t count;
    Exercise* list = exercisesFactory(&count);

    int opcao = -1;
    while (opcao != 0) {
        clearDisplay();
        showBanner();

        for (size_t i = 0; i < count; i++) {
            printf("  %zu) %s\n", i + 1, list[i].title);
        }
        printf("  0) Sair\n");
        printf("  ═══════════════════════════════════════════════════════════════════════════\n");
        printf("  Escolha uma opção: ");
        scanf("%d", &opcao);

        clearDisplay();

        if (opcao > 0 && (size_t)opcao <= count) {
            showExercise(list[opcao - 1].title);
            list[opcao - 1].execute();
            printf("\nPressione ENTER para voltar ao menu...");
            getchar(); getchar(); // consome ENTER
        }
    }
    return 0;
}