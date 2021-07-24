int islandPerimeter(int** grid, int gridRowSize, int* gridColSize) {
        int land = 0;
        int edge = 0;
        
        if (gridRowSize == 0 || *gridColSize == 0) {
            return 0;
        }

        for(int i = 0; i < gridRowSize; i++){
            for(int j = 0; j < *gridColSize; j++){
                if(grid[i][j] == 1){
                    land ++;
                    if(i > 0 && grid[i-1][j] == 1) edge ++; 
                    if(j > 0 && grid[i][j-1] == 1) edge ++; 
                }
            }
        }
    
        return land * 4 - edge * 2;
}
