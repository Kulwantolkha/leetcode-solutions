class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxlen = 0;
        int left = 0;
        int right = 0;
        vector<int> hsmpp(26,0);
        int maxfreq = 0;
        while(right<s.length()){
            hsmpp[s[right]-'A']++;
            maxfreq = max(maxfreq,hsmpp[s[right]-'A']);
            int changes = (right-left+1)-maxfreq;
            if(changes<=k){
                maxlen = max(maxlen,(right-left+1));
            }
            else{
                hsmpp[s[left]-'A']--;
                left++;
            }
            right++;
        }
        return maxlen;
    }
};