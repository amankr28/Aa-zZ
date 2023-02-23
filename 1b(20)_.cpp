//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++)
        {
            for(int j=i;j>=1;j--)
            {
                cout<<"*";
            }
            for(int k=2*(n-i);k>0;k--)
            {
                cout<<" ";
            }
            for(int m=i;m>=1;m--)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        for(int i=n-1; i>=1;i--)
        {
            for(int j =i; j>=1; j--)
            {
                cout<<"*";
            }
            for(int k=1; k<=2*(n-i);k++)
            {
                cout<<" ";
            }
            for(int m=i; m>=1;m--)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends