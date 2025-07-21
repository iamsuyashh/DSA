#include<iostream>  // Including the input-output stream library
using namespace std;  // Using the standard namespace

// Recursive function to reverse an array
// i: current index position
// arr: the array to be reversed
// n: size of the array
void f(int i, int arr[], int n){
    if(i>=n/2) return;  // Base case: stop when we reach the middle of the array
    swap(arr[i], arr[n-i-1]);  // Swap elements from both ends (first with last, second with second-last, etc.)
    f(i+1, arr, n);  // Recursive call with the next index
}

int main(){
    int n;  // Variable to store the size of the array
    cin>>n;  // Input the size of the array from user
    int arr[n];  // Declare an array of size n
    for(int i = 0; i<n; i++){  // Loop to input all elements
        cin>>arr[i];  // Input each element of the array
    }
    f(0, arr, n);  // Call the recursive function to reverse the array starting from index 0
    for(int i = 0; i<n; i++){  // Loop to output all elements
        cout<<arr[i]<<" ";  // Print each element of the reversed array with a space
    }
    return 0;  // End the program with successful execution
}