// 같은 라인에 1이 두 번 연속해 있으면 해당 사각형은 3개의 yellow가 필요
// 같은 라인에 양 옆이 1인 경우 2개의 yellow가 필요

// row가 동일한 경우도 마찬가지

class Solution {
public:
    int sum = 0;
    int count = 0;
    
    int islandPerimeter(vector<vector<int>>& grid) {
        
        for(int i = 0 ; i < grid.size() ; i++) {
            for(int j = 0 ; j < grid[i].size() ; j++) {
                if(grid[i][j] == 1) {
                    count += 4;
                    if(j != grid[i].size() - 1) {
                        if(grid[i][j+1] == 1) count -= 2;
                    }
                    if(i != grid.size() - 1) {
                        if(grid[i+1][j] == 1) count -= 2;
                    }
                    cout << count << endl;
                }
            }
        }
    return count;
    }