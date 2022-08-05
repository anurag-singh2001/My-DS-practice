 bool isSafe(int row,int col,int grid[N][N],int val){
        
        for(int i=0;i<N;i++){
            
            if(grid[row][i]==val)
                return false;
            if(grid[i][col]==val)
                return false;
            if(grid[3*(row/3)+i/3][3*(col/3)+i%3]==val)
                return false;
        }
        return true;
    }
    
    
    bool solve(int grid[N][N]){
        
        
        for(int row=0;row<N;row++){
            for(int col=0;col<N;col++){
                if(grid[row][col]==0){
                    for(int val=1;val<=9;val++){
                        if(isSafe(row,col,grid,val)){
                            grid[row][col]=val;
                            bool possible=solve(grid);
                            if(possible)
                                return true;
                            else
                                grid[row][col]=0;
                        }
                    }
                    return false;
                }
            }
        }
        return true;
        
    }
    
    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
        solve(grid);
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here 
        for(int i = 0 ; i < N ; i++){
            for(int j = 0 ; j < N ; j++){
                cout << grid[i][j] << " ";
            }
        }
    }