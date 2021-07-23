int islandPerimeter(int** grid, int gridSize, int* gridColSize){
    int peri = 0;

    if (gridSize == 0 || *gridColSize == 0) {
        return 0;
    }

    for (int row = 0; row < gridSize; row++) {
        for (int col = 0; col < *gridColSize; col++) {
            if (grid[row][col] == 1) {
                peri += 4;
                if (row+1 < gridSize && grid[row+1][col] == 1) peri -= 2;
                if (col+1 < *gridColSize && grid[row][col+1] == 1) peri -= 2;
            }
        }
    }

    return peri;
}