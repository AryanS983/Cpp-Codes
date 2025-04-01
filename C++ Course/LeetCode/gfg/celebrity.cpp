class Solution {
  public:
    int celebrity(vector<vector<int> >& mat) {
        // code here
        
        int n = mat.size();
        stack <int> s;
        int cele=-1;
        for(int i=0; i<n; i++){
            int j;
            for(j =0; j<n; j++){
                if(mat[i][j]==1 && j!=i){
                    break;
                }
            }
            if(j==n){
                s.push(i);
            }
        }
        
        while(!s.empty()){
            int k = s.top();
            int i;
            for(i=0; i<n; i++){
                if(mat[i][k]!=1){
                    break;
                }
            }
            if(i==n){
                cele = k;
                break;
            }
            s.pop();
        }
        
        return cele;
    }
};