//Q1->Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
//You must do it in place.
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> v;
        vector<int> y;
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    v.push_back(i);
                    y.push_back(j);
                }
            }
        }
        
        for (int a = 0; a < v.size(); a++) {
            for (int k = 0; k < rows; k++) {
                matrix[k][y[a]] = 0;
            }
            for (int m = 0; m < cols; m++) {
                matrix[v[a]][m] = 0;
            }
        }
    }
};

int main() {
    Solution sol;
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Original matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    sol.setZeroes(matrix);

    cout << "Modified matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
