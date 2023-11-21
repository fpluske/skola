#include <stdio.h>

int main() {
    int countOfChar;
    int grade;
    do {
        printf("Type any grade:");
        scanf("%d", &grade);
        /*Musíme zkontrolovat vstupně výstupní buffer. Pokud uživatel nezadá
         * celé číslo, znaky jsou uloženy ve v/v bufferu. V tomto případě
         * funkce scanf nepozastaví konzoli a uživatel nemá možnost
         * zadat další známku. Způsobí to nekonečný cyklus. Funkce getchar()
         * přečte znak ze v/v bufferu a zároveň ho vymaže. */
        /*Uložení hodnoty 0 do proměnné countOfChar. */
        countOfChar = 0;
        while (getchar() != '\n') {
            /*Po přečtení a smazání 1 znaku z v/v bufferu přičteme k proměnné
             *countOfChar 1. */
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("You have not typed a whole number idiot. Try again.\n");
        } else if (grade == 1) {
            printf("Nice work!\n");
        } else if (grade == 2) {
            printf("Well done!\n");
        } else if (grade == 3) {
            printf("Good\n");
        } else if (grade == 4) {
            printf("Not bad\n");
        } else if (grade == 5) {
            printf("Loser\n");
        } else if (grade == 0) {
            printf("Program will be closed\n");
        } else {
            printf("Type number between 1-5\n");
        }
    /*do while je cyklus příkazy mezi do a while s opakují pokud podmínka
     * na konci cyklu platí. */
    } while (countOfChar != 0 || grade != 0);
    
    return 0;
}
