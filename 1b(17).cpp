//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for (int i=1;i<=n;i++)
        {
            for(int k=n-i;k>0;k--)
            {
                cout<<" ";
            }
            for(char ch='A';ch<=i+64;ch++)
            {
                cout<<ch;
            }
           for(char dh=i+63;dh>=65;dh--)
           {   
                cout<<dh;
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