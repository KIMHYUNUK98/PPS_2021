// ���� ���ο� 1�� �� �� ������ ������ �ش� �簢���� 3���� yellow�� �ʿ�
// ���� ���ο� �� ���� 1�� ��� 2���� yellow�� �ʿ�

// row�� ������ ��쵵 ��������

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