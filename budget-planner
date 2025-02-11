#include <stdio.h>

int main() {
    int budget, numGuests, foodCostPerGuest, decorationCost, musicCost, extraExpenses;
    scanf("%d", &budget);
    scanf("%d", &numGuests);
    scanf("%d", &foodCostPerGuest);
    scanf("%d", &decorationCost);
    scanf("%d", &musicCost);
    scanf("%d", &extraExpenses);
    int totalFoodCost = numGuests * foodCostPerGuest;
    int totalCost = totalFoodCost + decorationCost + musicCost + extraExpenses;
    if (totalCost <= budget &&
        numGuests > 5 && numGuests <= 50 &&
        ((decorationCost < 0.30 * budget) || (totalFoodCost < 0.50 * budget)) &&
        !(numGuests > 25 && musicCost == 0)) {
        
        printf("Celebration Approved\n");
    } else {
        printf("Celebration Denied\n");
    }

    return 0;
}
