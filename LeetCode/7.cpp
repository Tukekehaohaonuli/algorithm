#include<iostream>
using namespace std;
class Solution{

    public :
        int reverse(int x){
            long ans=0,b;
            while(x!=0){
                b=x%10;
                x/=10;
                ans=ans*10+b;
                if(ans<INT_MIN||ans>INT_MAX)
                return 0;
            }

            return (int)ans;
        }
};
int main(){
    Solution s;
    cout << s.reverse(12323);
    system("pause");
    return 0;
}
