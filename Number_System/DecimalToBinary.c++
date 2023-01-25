#include <iostream>
#include <math.h>
using namespace std;

// CODE SAHI H COMPILER KI GALTI H ONLINE COMPILER M SAHI OUTPUR AA RHA H

int DecimalToBinary(int num){
    int ans = 0;
    int i = 0;
    while(num != 0){
        int bit = num&1;
        ans = (bit * pow(10,i)) + ans;
        num = num >> 1;
        i++;
    }
    return ans;
}

int main(){
    int n = 7 ;
    int ans = DecimalToBinary(n);
    cout<<ans;
}