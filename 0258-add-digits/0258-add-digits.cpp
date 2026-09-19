class Solution {
public:
    int singleDigit(int n){
        int sum = 0;
        while(n > 0){
            int ld = n % 10 ;
            sum = sum + ld;
            n = n / 10;           
        }
        if(sum >= 0 && sum <= 9) 
            return sum;
        else 
            return singleDigit(sum);
    }
    int addDigits(int num) {
       return singleDigit(num);
    }
};