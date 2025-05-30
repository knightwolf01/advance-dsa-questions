//In this module we'll do space optimization in dp

// we dont need full arary to keep the track... we jsut need 3 variable current ,prev1 and prev2;

#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n<=1) return n;
    //variables 
    int curr, prev1 = 1, prev2 = 0;
   for(int i=2;i<=n;i++){
       curr = prev2 + prev1;
       prev2 = prev1;
       prev1 = curr;
    }
    return curr;
}

int main(){
    cout<<fib(10);

  return 0;
}
