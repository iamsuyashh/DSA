#include<iostream>
using namespace std;

int getLength(char name[] ){
    int i = 0;
    int cnt = 0;
    while(name[i] != '\0'){
        cnt++;
        i++;
    }
    return cnt;
}

int main(){
    char name[20];
    cout << "enter the name";
    cin>>name;
    cout<<"The Length of the String is :";
    
    cout<<"Length : "<<getLength(name);
    return 0;
}
