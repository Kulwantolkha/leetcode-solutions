class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> snums(nums.size());
        transform(nums.begin(), nums.end(), snums.begin(), [](int num) {
            return to_string(num);
        });

        sort(snums.begin(), snums.end(), [](const string& a, const  string& b) {
            return a + b > b + a;
        });

        if (snums[0] == "0") {
            return "0";
        }

        return  accumulate(snums.begin(), snums.end(), string());
    }
};
