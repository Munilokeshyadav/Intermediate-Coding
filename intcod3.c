#include <stdio.h>
#include <limits.h>

void bestTimeToSell(int prices[], int n, int *buyDay, int *sellDay) {
    int minPrice = INT_MAX;
    int maxProfit = 0;
    *buyDay = 0;
    *sellDay = 0;

    for (int i = 0; i < n; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
            *buyDay = i;
        }
        if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice;
            *sellDay = i;
        }
    }
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);
    int buyDay, sellDay;

    bestTimeToSell(prices, n, &buyDay, &sellDay);

    printf("Buy on day %d, Sell on day %d\n", buyDay, sellDay);
    return 0;
}
