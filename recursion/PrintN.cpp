//print from 1 to n recursively

#include<iostream>
using namespace std;

int cnt = 1;
void printN(){

    if(cnt > 64) return;
    cout << cnt <<endl;
    cnt++;
    printN();
}
int main(){
    printN();
    return 0;
}
