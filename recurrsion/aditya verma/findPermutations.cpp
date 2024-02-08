//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    void solve(int index, string &s, vector<string>&ans){
        if(index == s.size()){
        ans.push_back(s);
        return;
    }
    unordered_set<char>mp;
    for(int i = index; i<s.size(); i++){
        if(mp.find(s[i]) == mp.end()){
            mp.insert(s[i]);
            swap(s[index],s[i]);
            solve(index+1,s,ans);
            swap(s[index],s[i]);
        }
    }
    }

	public:
		vector<string>find_permutation(string s)
		{
		    // Code here there
		    vector<string>ans;
		    solve(0,s,ans);
		    return ans;
		    
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends