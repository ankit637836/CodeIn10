 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int helper(string s, int st, int en){
        if(st>=en){
            return 1;
        }
        
        if(s[st]!=s[en]){
            return 0;
        }
        
        return helper(s,st+1,en-1);
    }
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    return helper(S,0,S.size()-1);
	}

};

// { Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends
