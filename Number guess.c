//
// Created by Anis Igue on 2026-01-27.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int g;
int main(void) {
    srand((unsigned int) time(NULL));
    int randomNumber = rand() % 100 + 1;

int nbEssais = 0;

    printf("Guess : ");
    scanf("%d", &g);


for (int i = 1; i <= 1000000000; i++) {


    while (g != randomNumber) {
        if (g < randomNumber) {
            printf("Higher\n\n");
            nbEssais++;
            printf("Tries : %d\n\n", nbEssais);
            printf("Guess : ");
            scanf("%d", &g);
        }
        else if (g > randomNumber) {
            printf("Lower\n\n");
            nbEssais++;
            printf("Tries : %d\n\n", nbEssais);
            printf("Guess : ");
            scanf("%d", &g);
        }
    }
}
    if (g == randomNumber) {
        printf("You win!\n");
    }
    return 0;
}