class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        int col=1;
        int rows = a.size();
        int cols = a[0].size();
        for(int i=0;i<rows;i++){
            if(a[i][0]==0)
                col=0;
            for( int j=1;j<cols;j++){
                
                if(a[i][j]==0){
                    a[0][j]=0;
                    a[i][0]=0;
                }
            }
        }
        for(int i=rows-1;i>=0;i--){
            for(int j=cols-1;j>=1;j--){
                if(a[0][j] == 0 || a[i][0]==0)
                    a[i][j]=0; 
            }
            if(col==0)
                a[i][0]=0;
        }
        
    }
};
