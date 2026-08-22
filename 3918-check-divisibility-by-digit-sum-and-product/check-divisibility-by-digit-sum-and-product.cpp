class Solution {
public:
    bool checkDivisibility(int n) {
        int num=n;
        int sum=0,pro=1;
        while(num>0){
            sum+=num%10;
            pro*=num%10;
            num/=10;
        }
        int number=n;
        return n%(sum+pro)==0;
    }
};