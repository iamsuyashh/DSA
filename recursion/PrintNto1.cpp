#include<iostream>
using namespace std;

int cnt = 5;
void printNto1(){
    if(cnt < 1) return;
    cout<<cnt<<endl;
    cnt--;
    printNto1();
}

int main(){
    printNto1();
    return 0;
}
