class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        map<string,int> mpp;
        bool center = false;
        int length = 0;

        for(auto word : words){
            mpp[word]++;
        }

        for(auto it:mpp){
            string rev = it.first;
            reverse(rev.begin(),rev.end());

            if(it.first==rev){
                if(it.second%2 == 1){
                    center=true;
                }
                length += (it.second / 2) * 4;
            }
            else if(it.first < rev && mpp.find(rev)!=mpp.end()){
                int mini = min(it.second, mpp[rev]);
                length += (mini)*4;
            }
        }
        if(center==true)    length += 2;
        return length;
    }

};
