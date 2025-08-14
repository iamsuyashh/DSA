#include<iostream>
using namespace std;

bool Palindrome(char name[] , int n){
    int s = 0 ; 
    int e = n-1;
    while(s<=e){
        if(name[s]!=name[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
       
    }
     return 1;
}

int main(){
    char name[20];
    cout << "Enter the name: ";
    cin >> name;
    int n = 3;// Get the actual length of the input
    cout << "The Length of the String is: " << n << endl;
    if(Palindrome(name, n))
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;
    return 0;
}