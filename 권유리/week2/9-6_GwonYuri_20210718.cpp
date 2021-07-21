// 백준 2210 숫자판 점프 DFS
#include <stdio.h>
#include <iostream>
using namespace std;
 
int map[10][10];
int choice[10];
int visited[1000000];
int ans;
 
int dx[4] = {-1, 1, 0, 0}; 
int dy[4] = {0, 0, -1, 1};
 
int safe(int x, int y){
    if(x >= 0 && y >= 0 && x < 5 && y < 5) return 1;  
    else return 0;  
}
 
void DFS(int x, int y, int cnt){    
    if(cnt == 7){
        int val = choice[0]*100000 + choice[1]*10000 + choice[2]*1000 + choice[3]*100 + choice[4]*10 + choice[5]*1;
        
        if(visited[val] == 0){
            visited[val] = 1;
            ans++;
        }
        return;
    }
    
    for(int i = 0; i < 4; i++){
        int xpos = x+dx[i];
        int ypos = y+dy[i];
        
        if(safe(xpos, ypos) == 1){
            choice[cnt] = map[xpos][ypos];
            DFS(xpos, ypos, cnt+1);    
        }
    }
}
 
int main(void){  
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++) scanf("%d", &map[i][j]);
    }
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++) DFS(i, j, 0);       
    }
    
    cout << ans;
    return 0;
}
