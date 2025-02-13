#include <stdio.h>

void treasure() {
    int p;
    scanf("%d", &p);

    if (p == 1) {
        printf("Player chooses the Left path.\n");
        int action;
        scanf("%d", &action);
        if (action == 1) {
            printf("Poor choice, Game Over!\n");
            return;
        } else if (action == 2) {
            printf("Player found a bridge.\n");
            int bridge;
            scanf("%d", &bridge);

            if (bridge == 1) {
                printf("Player crosses the bridge safely.\n");
            } else if (bridge == 2) {
                printf("Poor luck, Game Over!\n");
                return;
            }
        }

    } else if (p == 2) {
        printf("Player chooses the Middle path.\n");
        int puzzle_answer;
        scanf("%d", &puzzle_answer);

        if (puzzle_answer == 582) {
            printf("Player solved the puzzle.\n");
        } else {
            printf("Foolish player, Game Over!\n");
            return;
        }

    } else if (p == 3) {
        printf("Player chooses the Right path.\n");
        int sequence_answer;
        scanf("%d", &sequence_answer);

        if (sequence_answer == 30) {
            printf("Player solved the puzzle.\n");
        } else {
            printf("Foolish player, Game Over!\n");
            return;
        }

    } 

    int chest;
    scanf("%d", &chest);

    if (chest == 1) {
        printf("All that glitters is not gold, Game Over!\n");
    } else if (chest == 2) {
        printf("All your efforts were for nothing, Game Over!\n");
    } else if (chest == 3) {
        printf("Congratulations!! You won the treasure.\n");
    } 
}

int main() {
    treasure();
    return 0;
}
