class Solution {
public:
    
    bool isPalindrome(int i,int j ,string s){
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int i=0;
        int n=s.size()-1;
        
        while(i<=n){
            if(s[i]==s[n]){
                i++;
                n--;
            }
            else{
                return (isPalindrome(i+1,n,s) || isPalindrome(i,n-1,s));
            }
        }
        return true;
    }
};
