class Solution {
public:
    bool isPalindrome(int x) {
        int rev = 0;
        int n=x;
        do{
            int digit = n%10;
             rev= (rev *10)+digit;
              n = n/10;
        }while (n!=0);
            if (x==rev)
                return 1;
        return 0;
        
        
    }
};