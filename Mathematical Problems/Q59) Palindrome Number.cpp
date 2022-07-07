class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long int rev=0 , num=x;
        
        while(x){
            int temp=x%10;
            rev = rev * 10 + temp;
            x/=10;
        }
        if(rev==num){
            return true;
        }
        else return false;
    }
};
