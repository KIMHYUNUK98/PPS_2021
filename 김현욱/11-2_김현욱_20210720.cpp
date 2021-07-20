class Solution {
public:
    
    void dfs(vector<vector<int>>& image, vector<vector<int>>& visited, int sr, int sc, int newColor, 
             int oldColor, int col, int row) {
        if(sr < 0 || sr >= col || sc < 0 || sc >= row || 
           image[sr][sc] != oldColor || visited[sr][sc] == 1) return;
        
        visited[sr][sc] = 1;
        if(image[sr][sc] == oldColor) 
            image[sr][sc] = newColor;
        
        
        dfs(image, visited, sr-1, sc, newColor, oldColor, col, row);
        dfs(image, visited, sr+1, sc, newColor, oldColor, col, row);
        dfs(image, visited, sr, sc+1, newColor, oldColor, col, row);
        dfs(image, visited, sr, sc-1, newColor, oldColor, col, row);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int num = image[sr][sc];
        int col = image.size();
        int row = image[0].size();
            
        
        vector<vector<int>> visited(col, vector<int>(row, 0));
        dfs(image, visited, sr, sc, newColor, num, col, row);
        
        return image;
    }
};