
// #include <iostream>
// using namespace std;
// // Functioned way of recursion(sum of n numbers)
// int sum(int n)
// {   
//     if (n == 1)
//     {
//         return 0;
//     }
//     else
//         return n + sum(n - 1);
// }

// // multiplication of n numbers
// int mult(int n){
//     if(n==0) return 0;
//     return n * sum(n-1);
// }
// int main()
// {
//     int n = 3;
//     cout << sum(n);
//     cout<< mult(n);

//             return 0;
// }




// Paramasterised way
#include<bits/stdc++.h>
using namespace std;

void func(int i, int sum){
   
   // Base Condition.
   if(i<1)
   {
       cout<<sum<<endl;
       return;
   }

   // Function call to increment sum by i till i decrements to 1.
   func(i-1,sum+i);

}

int main(){
  
  // Here, let’s take the value of n to be 3.
  int n = 3;
  func(n,0);
  return 0;

}