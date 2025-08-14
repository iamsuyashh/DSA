#include<iostream>
using namespace std;


char getMaxValue(string s){
    char ans;
    int max_freq = 0;int n = s.length();
    int count[250] = {0};
    for(int i = 0  ; i<n ; i++){
        count[s[i]]++;
        if(count[s[i]]>max_freq)
        {
            max_freq = count[s[i]];
            ans = s[i]; 
        }
    }
    return ans;
}

int main(){
    string s = "testsample";
    cout<<"Ans:"<<getMaxValue(s);
    return 0;
}
