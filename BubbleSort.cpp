#include<iostream>
#include<vector>
using namespace std;
void BubbleSort(vector<int>&a){
    
    for(int i=0; i<a.size()-1; i++){
        for(int j = 0; j<a.size()-i-1; j++){
            if(a[j]> a[j+1]){
                a[j] = a[j]^a[j+1];
                a[j+1] = a[j]^a[j+1];
                a[j] = a[j]^a[j+1];
            }
        }
    }
}
void Print(vector<int>&a){
    for(int i =0; i<a.size(); i++){
        cout<<a[i]<<"  ";
    }cout<<endl;
}
int main(){
    vector<int> a = {7,5,8,4,9,3,2,1};
    BubbleSort(a);
    Print(a);
}