#define MIN(a, b) (a < b? a : b)

int minCostClimbingStairs(int* cost, int costSize) {
    int f[costSize+1];
    f[0]=cost[0];
    f[1]=cost[1];
    
   for(int i = 2; i < costSize; i++) f[i] = MIN(f[i-1],f[i-2]) + cost[i];

    return MIN(f[costSize-1], f[costSize-2]);
}