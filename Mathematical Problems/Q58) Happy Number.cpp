class Solution {
public:
    
    int sum_of_squares(int num){
        int sum=0;
        while(num){
            int d=num%10;
            sum+=d*d;
            num=num/10;
        }
        return sum;
    }
    
    bool isHappy(int n) {
        if(n==0)
           return false;
        
        unordered_set<int>cache;
        while(cache.find(n)==cache.end()){
            cache.insert(n);
            n=sum_of_squares(n);
            if(n==1)
                return true;
        }
        return false;
    }
};



//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
// using floyd's rule



class Solution {
public:
    
    int sum_of_squares(int num){
        int sum=0;
        while(num){
            int d=num%10;
            sum+=d*d;
            num=num/10;
        }
        return sum;
    }
    
    bool isHappy(int n) {
        if(n==0)
            return false;
        
        
        int slow = n;
        int fast = sum_of_squares(n);
        if(slow==1 || fast==1)
            return true;
        
        while(slow!=fast){
            slow = sum_of_squares(slow);
            fast = sum_of_squares(sum_of_squares(fast));
            if(slow==1 || fast==1)
                return true;            
        }
        
        return false;
    }
};
