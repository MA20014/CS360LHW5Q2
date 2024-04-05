#include <iostream>
#include <vector>
using namespace std;

void printDiagonalValues(const vector<vector<int>>& vals) {
    int rows = vals.size();
    if (rows == 0) return; // Handle empty vector
    int cols = vals[0].size();

    // Determine the length of the diagonal
    int diagonalLength = min(rows, cols);

    // Print the diagonal values
    for (int i = 0; i < diagonalLength; ++i) {
        cout << vals[i][i] << " ";
    }
    cout << endl;
}

// Verification in the main function
int main() {
    // Example vector of vectors
    vector<vector<int>> vals = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Values on the diagonal:" << endl;
    printDiagonalValues(vals);

    return 0;
}