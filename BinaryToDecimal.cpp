#include<iostream>
using namespace std;
int binToDec(int bn){
    int rem, ans=0,pow=1;
    while(bn>0){
        rem = bn%10;
        ans = ans+(rem*pow);
        bn = bn/10;
        pow=pow*2;
    }
    return ans;
}
int main(){
    cout<<"\nDecimal of 1010:  "<<binToDec(1010);
}