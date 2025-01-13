class Solution {
public:
    string getSmallestString(string s) {
        int n = s.size();
        int indexToSwap = -1;

        for (int i = 0; i < n - 1; i++) {
            int curr = s[i] - '0';
            int next = s[i + 1] - '0';

            if ((curr % 2 == next % 2) && curr > next) {
                indexToSwap = i;
                break;
            }
        }

        if (indexToSwap != -1) {
            swap(s[indexToSwap], s[indexToSwap + 1]);
        }

        return s;
    }
};
