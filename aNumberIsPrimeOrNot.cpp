#include<iostream>
using namespace std;
void primeCheck(int n){
    bool pr=true;
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            pr=false;
            break;
        }
    }
    if(pr==true){
        cout<<n<<" is a prime number\n";
    }else{
        cout<<n<<" is not a prime number\n";
    }
}
int main(){
    primeCheck(13);
    primeCheck(6);
    primeCheck(4);
    primeCheck(7);
}