#include<iostream>
using namespace std;



int linearSearch(int arr[],int n ){
    int num = 3;
    for(int i = 0 ; i<n;i++){
        if(arr[i] == num)
               return i;
    }
    return -1   ;
 
}


int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int ans=linearSearch(arr,n);
    cout<<ans;
    return 0;
}
