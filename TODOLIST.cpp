

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int x=0;
	    for(int i=0;i<n;i++){
	        if(a[i]>=1000)
	        {
	            x=x+1;
	        }
	    }
	    cout<<x<<endl;
	}
	return 0;
}
