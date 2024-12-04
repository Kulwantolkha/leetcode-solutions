class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;
        if(needle.size()>haystack.size())   return -1;
        size_t haystack_len = haystack.length();
        size_t needle_len = needle.length();
        for (size_t i = 0; i <= haystack_len - needle_len; i++) {
            size_t k = 0;
            while (k < needle_len && (i + k) < haystack_len && haystack[i + k] == needle[k]) {
                k++;
            }

            if (k == needle_len) {
                return i;
            }
        }
        return -1;
    }
};
