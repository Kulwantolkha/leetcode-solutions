class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> res(n, 0);
        
        int leftMoves = 0, leftBalls = 0;
        for (int i = 0; i < n; ++i) {
            res[i] += leftMoves;
            if (boxes[i] == '1') {
                leftBalls++;
            }
            leftMoves += leftBalls;
        }
        
        int rightMoves = 0, rightBalls = 0;
        for (int i = n - 1; i >= 0; --i) {
            res[i] += rightMoves;
            if (boxes[i] == '1') {
                rightBalls++;
            }
            rightMoves += rightBalls;
        }
        
        return res;
    }
};
