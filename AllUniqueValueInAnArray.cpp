#include<iostream>
using namespace std;
void allUniqueValueOfAnArray(int ar[], int sz){
    for( int i=0; i<sz; i++){
        bool isUnique = true;
        for(int j=0; j<sz; j++){
            if(i!=j && ar[j]==ar[i]){
                isUnique = false;
            }
        }
        if(isUnique){
            cout<<ar[i]<<" ";
        }
    }
}
int main(){
    int a[]={1,2,2,3,6,3,5,6,8,7,10,8,9};
    int s = sizeof(a)/sizeof(int);                     
    allUniqueValueOfAnArray(a,s);
}