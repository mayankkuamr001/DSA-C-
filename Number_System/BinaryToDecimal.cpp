#include <iostream>
#include <math.h>
using namespace std;

int BinaryToDecimal(int num){
    int ans = 0;
    int i = 0;

    while(num != 0){
        int digit = num%10;
        if(digit != 0){
            ans = ans + pow(2,i);
        }
        num = num / 10;
        i++;
    }
    return ans;
}

int main(){
    int n = 111;
    int ans = BinaryToDecimal(n);
    cout<<ans;
    return 0;
}