#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Solution{
  public:
    ll n_fibonacci(int n){
      //base case
      if(n==0) return 0;
      if(n==1) return 1;
      
      //recursive calls
      ll rec1 = n_fibonacci(n-1);
      ll rec2 = n_fibonacci(n-2);
      
      ll smallCal = rec1 + rec2; 
      return smallCal;
      
    }
};
  
int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    int n;
    cin>>n;
    
    Solution ob;
    cout<<ob.n_fibonacci(n)<<endl;
  }
  return 0;
}
