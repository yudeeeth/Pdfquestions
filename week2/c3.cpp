    void booleanMatrix(vector<vector<int> > &matrix)
    {
        vector<vector<int>> sol(matrix.size(),vector<int>(matrix[0].size(),0));
        vector<bool> r(matrix.size(),false);
        vector<bool> c(matrix[0].size(),false);
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]){
                    if(!r[i]) {row(sol,i);r[i]=true;}
                    if(!c[j]) {col(sol,j);c[j]=true;}
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                matrix[i][j] = sol[i][j];
            }
        }
        // code here 
    }
    
    void row(vector<vector<int>> &sol, int i){
        for(int j=0;j<sol[i].size();j++){
            sol[i][j] = 1;
        }
    }
    void col(vector<vector<int>> &sol, int i){
        for(int j=0;j<sol.size();j++){
            sol[j][i] = 1;
        }
    }