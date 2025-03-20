#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); // Same as push back but faster

    // vectors using pairs
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    // printing all the elements
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        cout << " " << v[i];
    }
 
    // auto iterator
    for(auto it : v){
        cout << it << " "<<endl;;
    }

    vector<int> arr = {1,2,3,4,5};
    for(int i = 0 ; i<arr.size(); i++){
        cout<<arr[i];
    }

    // deleting particular elements : [1,2 ,5]
    arr.erase(arr.begin() + 2,v.begin()+4);


    // inserting the element
    vector<pair<int, int>> vec(2, {100, 200}); // This will add 2 instance or values of 100
    vec.insert(vec.begin(), {300, 400}); //Inserting single element
    vec.insert(vec.begin() + 1, 2, {3, 4});

    // copying the vector

    
   
 

    return 0;
}