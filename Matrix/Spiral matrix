class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;

        int rows = matrix.size();
        int cols = matrix[0].size();
        int count = rows * cols;

        int lrRow = 0, rlRow = rows - 1;
        int tdCol = cols - 1, dtCol = 0;

        int hStart = 0, hEnd = cols - 1;
        int vStart = 1, vEnd = rows - 1;

        bool horizontalFlag = true, verticalFlag = true;

        while (result.size() != count) {
            if (horizontalFlag) {
                for (int i = hStart; i <= hEnd; i++) {
                    result.push_back(matrix[lrRow][i]);
                   // cout << "hey";
                }
                lrRow++;
                int temp = hStart;
                hStart = hEnd - 1;
                hEnd = temp;
                horizontalFlag = false;
            } else if (!horizontalFlag) {
                for (int i = hStart; i >= hEnd; i--) {
                    result.push_back(matrix[rlRow][i]);
                }
                rlRow--;
                int temp = hStart;
                hStart = hEnd + 1;
                hEnd = temp;
                horizontalFlag = true;
            }
            if (verticalFlag) {
                for (int i = vStart; i <= vEnd; i++) {
                    result.push_back(matrix[i][tdCol]);
                }
                tdCol--;
                int temp = vStart;
                vStart = vEnd - 1;
                vEnd = temp;
                verticalFlag = false;
            } else if (!verticalFlag) {
                for (int i = vStart; i >= vEnd; i--) {
                    result.push_back(matrix[i][dtCol]);
                }
                dtCol++;
                int temp = vStart;
                vStart = vEnd + 1;
                vEnd = temp;
                verticalFlag = true;
            }
        }
        return result;
    }
};
