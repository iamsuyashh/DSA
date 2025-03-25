#include<iostream>
using namespace std;

int i = 1;
void printName(){
    if(i>5) return;
    cout<<"Lol"<<endl;
    i++;
    printName();
}

int main(){
    printName();
    return 0;
}
