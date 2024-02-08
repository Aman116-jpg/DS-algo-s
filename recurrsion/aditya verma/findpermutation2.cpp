class Solution
{
    void solve(string input, string output, vector<string>&v){
        if(input.size() == 0){
            v.push_back(output);
            return;
        }
        unordered_set<char>mp;
        for(int i=0; i<input.size(); i++){
            if(mp.find(input[i]) == mp.end()){
                mp.insert(input[i]);
              string ninp = input.substr(0,i) + input.substr(i+1);
              string nout  = output + input[i];
              solve(ninp,nout, v);
            }
          
        }
    }
	public:
		vector<string>find_permutation(string s)
		{
		    // Code here there
		    string output = "";
		    vector<string>v;
		    solve(s,output,v);
		    return v;
		}
};
