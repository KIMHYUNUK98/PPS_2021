#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N,i,k,DP[1001]={0};
    scanf("%d",&N);

    for(i=1;i<=N;i++) 
        scanf("%d",&DP[i]);

    for(i=2;i<=N;i++)
        for(k=i;k >= 0;k--) 
            DP[i] = std::max(DP[k]+DP[i-k],DP[i]);

    cout << DP[N];
}