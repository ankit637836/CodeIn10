#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;

class Solution{
    public:
      ll powerof2(int n){
          if(n==0) return 1;
          
          ll recResult = powerof2(n-1);
          
          ll result = 2*recResult;
          
          return result;
      }
};

int main(){
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        
        Solution ob;
        cout<<ob.powerof2(n)<<endl;
    }
    return 0;
}
