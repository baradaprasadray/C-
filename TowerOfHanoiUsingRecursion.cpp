#include<iostream>
using namespace std;
void towerOfHanoi(int n,char src, char help, char dest){

    if(n == 1) {
        cout<<"transfer disk " << n << " from " << src << " to " << dest<<endl;
        return;
    }
    //transfer top n-1 from src to helper using dest as 'helper'
    towerOfHanoi(n-1, src, dest ,help);
    //transfer nth from src to dest
    cout<<"transfer disk " << n << " from " << src << " to " << dest <<endl;
    //transfer n-1 from helper to dest using src as 'helper'
    towerOfHanoi(n-1, help,src, dest);
}

int main(){
    int n =4;
    towerOfHanoi(n,'S','H','D');
}