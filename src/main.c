#include <stdio.h>
#include <stdlib.h>

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

Exercise[] exercisesFactory() {
static Exercise exercises[] = {
    // NewExercise("Exercício 1", one),
    // NewExercise("Exercício 2", two),
    // NewExercise("Exercício 3", three),
    // NewExercise("Exercício 4", four),
    // NewExercise("Exercício 5", five),
    // NewExercise("Exercício 6", six),
    // NewExercise("Exercício 7", seven),
    // NewExercise("Exercício 8", eight),
    // NewExercise("Exercício 9", nine),
    // NewExercise("Exercício 10", ten),
};
    return exercises;
}

int main() {
    showBanner();
}