#include <stdbool.h>
#include <stdio.h>

// Define an enum for the competitors
typedef enum {
    TORTOISE,
    HARE
} Competitor;

int main() {

    int round = 1, finish_line;
    Competitor winner; 

    // Get the finish line from user input
    printf("Enter the finish line position: ");
    scanf("%d", &finish_line);

    int tort_position = 0;
    int hare_position = 0;

    while (true) {
        tort_position += 2;
        hare_position += 3;
        if (hare_position >= finish_line) {
            winner = HARE;
            break;
        }
        if (tort_position >= hare_position) {
            winner = TORTOISE;
            break;
        }
        tort_position += 2;
        hare_position += 0;
        if (hare_position >= finish_line) {
            winner = HARE;
            break;
        }
        if (tort_position >= hare_position) {
            winner = TORTOISE;
            break;
        }
        tort_position += 2;
        hare_position += 1;
        if (hare_position >= finish_line) {
            winner = HARE;
            break;
        }
        if (tort_position >= hare_position) {
            winner = TORTOISE;
            break;
        }
        tort_position += 2;
        hare_position += 0;
        if (hare_position >= finish_line) {
            winner = HARE;
            break;
        }
        if (tort_position >= hare_position) {
            winner = TORTOISE;
            break;
        }
    }
  
    if(winner == 0){
      printf("\nWinner: Tortoise");
    }else{
      printf("\nWinner: Hare");
    }

    return 0;
}
