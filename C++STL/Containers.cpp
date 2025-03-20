#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    // list
    list<int> ls;//insert in vector is costly due to time complexity
    ls.push_back(2);

    //---->More containers
    // deque same as list
    // Stack(lifo) -> Top,push,size,pop,empty
    //queue (fifo) -> front,back
    //priorityqueue->Maximum says on the top (its not stpred in linear order) - push,pop,top -> Works as max and min heap 
    //Set(Everythin in sorted order and stores unique values) in ascending order (1,2,3,4) {Functions : find,count,insert}

    // --____________________________________________-----
    // Maps(key and value pair)also stores in sorted value
    map<int,int> mpp;
    map<int,pair<int,int>> mpp;

    mpp[1] = 2; //{1,2}
    mpp.insert({2,4}); //{2,4}

    // multimap - can store multiple duplicate keys 
    // unordered maps - unsorted pairs

    



    return 0;
}
