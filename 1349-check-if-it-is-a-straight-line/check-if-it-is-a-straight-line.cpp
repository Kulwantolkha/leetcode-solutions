class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if (coordinates.size() < 3) return true;

        int initialDeltaY = coordinates[1][1] - coordinates[0][1];
        int initialDeltaX = coordinates[1][0] - coordinates[0][0];

        for (size_t i = 2; i < coordinates.size(); ++i) {
            int currentDeltaY = coordinates[i][1] - coordinates[0][1];
            int currentDeltaX = coordinates[i][0] - coordinates[0][0];

            if (initialDeltaY * currentDeltaX != initialDeltaX * currentDeltaY) {
                return false;
            }
        }

        return true;
    }
};