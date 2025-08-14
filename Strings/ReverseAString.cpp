#include<iostream>
#include<vector>
using namespace std;

void ReverseString(vector<char>& name){
    int s = 0 ;
    int e = name.size()-1;
    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
}

int main(){
    string input;
    cout << "Enter the name: ";
    cin >> input;

    vector<char> name(input.begin(), input.end());
    ReverseString(name);

    cout << "The Reverse of the String is: ";
    for(char c : name)
        cout << c;
    cout << endl;

    return 0;
}