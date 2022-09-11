//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        int n=S.length();
        int k=0, flag=0;
        string help;
        string ans;
        for(int i=0; i<n; i++)
        {
            if(S[i]!='.')
            {
                help.push_back(S[i]);
            }
            if(S[i]=='.' || i==n-1)
            {
                if(flag!=0)
                    help.push_back('.');
                flag=1;
                ans.insert(0, help);
                k++;
                help.erase();
            }
        }
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends