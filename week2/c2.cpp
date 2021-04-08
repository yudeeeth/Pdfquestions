vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> sol;
        int left,right,up,down;
        int dir=0;
        int i,j;
        up=0; down = r-1;
        left=0;right = c-1;
        i=up;
        j=left;
        while(left<=right && up<=down){
            if(dir==0){
                sol.push_back(matrix[i][j]);
                if(j!=right)
                j++;
                else {up++;i++;dir=1;}
            }
            else if(dir==1){
                sol.push_back(matrix[i][j]);
                if(i!=down)
                i++;
                else {right--;j--;dir=2;}
            }
            else if(dir==2){
                sol.push_back(matrix[i][j]);
                if(j!=left)
                j--;
                else {down--;i--;dir=3;}
            }
            else if(dir==3){
                sol.push_back(matrix[i][j]);
                if(i!=up)
                i--;
                else {left++;j++;dir=0;}
            }
        }
        return sol;
        // code here 
    }