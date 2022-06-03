#include <iostream>
using namespace std;
void reverse(int a[],int st, int en){
    if(st>=en) return;
    
    swap(a[st],a[en]);
    reverse(a,st+1,en-1);
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    reverse(a,0,n-1);
	    
	    for(int i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
