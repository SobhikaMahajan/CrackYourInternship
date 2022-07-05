class Solution {
public:
    int minMoves(vector<int>& a) {
        // 1 2 3
       int i, size, sum = 0, min = a[0], ans;
        size = a.size();
        for(i=0;i<size;i++){
            sum += a[i];       // 1+2+3 = 6
            if(a[i] < min){    //1<6
                min = a[i];       min=1
            }
        }
        ans = sum - size * min;      //6 - 3*1 = 3
        return ans;
    }
};
