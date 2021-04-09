void swap(vector<vector<int>> &arr, int i ,int j){
    int n = arr.size();
    int temp = arr[i][j];
    arr[i][j] = arr[n-j-1][i];
    arr[n-j-1][i] = arr[n-i-1][n-j-1];
    arr[n-i-1][n-j-1] = arr[j][n-i-1];
    arr[j][n-i-1] = temp;
}

void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    for(int i=0;i<A.size()/2;i++){
        for(int j=i;j<A.size()-i-1;j++){
            swap(A,i,j);
        }
    }
    
}