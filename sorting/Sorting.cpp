#include<iostream>
#include<vector>
using namespace std;

void selection_sort(vector<int> &arr , int n ){
    for(int i = 0 ; i < n-1 ; i++){
        int minIndex = i;
        for(int j = i ; j < n; j++){
            if(arr[j] < arr[minIndex]){
               minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void bubble_sort(vector<int> &arr , int n ){
    for(int i = 1 ; i<n;i++){
        for(int j = 0 ; j<n-i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }    
}

void insertion_sort(vector<int> &arr , int n){
    for(int i = 0 ; i<=n-1;i++){
        int j = i;
        while(j>0 && arr[j] < arr[j-1]){
            swap(arr[j] , arr[j-1]);
            j--;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the Size of the Array : "<<endl;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    selection_sort(arr , n);
    cout<<"Selection Sort Result:"<<endl;
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // If you want to test bubble sort, re-input the array or copy it before sorting
    bubble_sort(arr , n);
    cout<<"Bubble Sort Result:"<<endl;
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    insertion_sort(arr , n);
    cout<<"Insertion Sort Result:"<<endl;
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}