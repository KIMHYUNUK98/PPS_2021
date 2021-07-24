package week3;

public class _11_1 {
	public static void main(String[] args){
		
	}
	
    public static int islandPerimeter(int[][] grid) {
    	int count=0;
    	
    	// 만약 각 배열 값이 1이면 count+=4
    	// 겹치는 구간
    	// 1. 상 하 2. 좌 우
    	
    	for(int i =0;i<grid.length;i++) {
    		for(int j = 0; j<grid[0].length;j++){
    			if(grid[i][j]==1) {
    				count+=4;
	    			if(j>0 && (grid[i][j-1]==grid[i][j]))
	    				count-=2;
	    			if(i>0 && (grid[i-1][j]==grid[i][j]))
	    				count-=2;
    			}
    		}
    		
    	}
        return count;
    }

}
