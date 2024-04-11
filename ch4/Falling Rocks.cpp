#include <vector>
using namespace std;

bool canSurvive(vector<vector<char>> matrix, int playerPos) {
    int H = matrix.size();
    int W = matrix[0].size();

    vector<vector<bool>> dp(H, vector<bool>(W, false));
    dp[H-1][playerPos] = true;

    for (int i = H - 1; i > 0; --i) {
        for (int j = 0; j < W; ++j) {
            if (dp[i][j] && matrix[i][j] != 'R') {
                dp[i-1][j] = true;
                if (j > 0) dp[i-1][j-1] = true;
                if (j < W - 1) dp[i-1][j+1] = true;
            }
        }
    }

    for (int j = 0; j < W; ++j) {
        if (dp[0][j]) return true;
    }

    return false;
}