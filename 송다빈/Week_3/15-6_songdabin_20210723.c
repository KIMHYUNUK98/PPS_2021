int maxProfit(int* prices, int pricesSize){
    int max = 0, min = prices[0];
    int profit = 0;

    if (pricesSize == 0) return 0;

    for (int i = 1; i < pricesSize; i++) {
        min = (prices[i] < min)? prices[i] : min;
        profit = prices[i] - min;
        max = (max > profit)? max : profit;
    }

    return max;
}