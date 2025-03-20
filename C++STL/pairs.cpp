#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main() {
    
    // pairs
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    // nested properties of pair
    pair<int,pair<int,int>> s = {2,{3,4}};
    cout << s.first << " " << s.second.second <<" "<<s.second.first << endl;


    //pair arrau
    pair<int,int> arr[] = {{1,2},{2,3},{3,4},{4,5}};
    cout << arr[1].second;

    return 0;
}
