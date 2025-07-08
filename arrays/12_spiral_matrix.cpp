#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int top = 0, bottom = 2, left = 0, right = 2;

    cout << "Spiral order:" << endl;
    while(top <= bottom && left <= right){
        // Left to right
        for(int i = left; i <= right; i++)
            cout << matrix[top][i] << " ";
        top++;

        // Top to bottom
        for(int i = top; i <= bottom; i++)
            cout << matrix[i][right] << " ";
        right--;

        // Right to left
        if(top <= bottom){
            for(int i = right; i >= left; i--)
                cout << matrix[bottom][i] << " ";
            bottom--;
        }

        // Bottom to top
        if(left <= right){
            for(int i = bottom; i >= top; i--)
                cout << matrix[i][left] << " ";
            left++;
        }
    }

    cout << endl;
    return 0;
}