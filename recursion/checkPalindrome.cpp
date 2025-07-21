#include<iostream>  // Including the input-output stream library
using namespace std;  // Using the standard namespace

// Recursive function to check if a string is a palindrome
// i: current index position being checked
// s: reference to the string being checked
bool f(int i , string &s){
    if(i>s.size()/2) return true;  // Base case: if we've checked half the string, it's a palindrome
    if(s[i] != s[s.size()-i-1]) return false;  // If characters don't match, it's not a palindrome
    return f(i+1,s);  // Recursive call to check next character pair (missing return statement added)
}   

int main(){
    string s = "msdam";  // Define a string to check
    cout<<f(0,s);  // Call the palindrome checking function starting from index 0 and print result
    return 0;  // End the program with successful execution
}