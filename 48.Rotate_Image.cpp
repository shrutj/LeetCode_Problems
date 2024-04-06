// # 48. Problem Statement: Rotate Image
//                          You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

//                          You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // int arr[n][n];

        // for(int i=0;i<n;i++){
        //     for(int j=n-1, k=0;j>=0, k<n;j--, k++){
        //         arr[i][k] = matrix[j][i];
        //     }
        // }
        
        
        // for(int i=0;i<n;i++){
           
        //     for(int j=0;j<n;j++){
        //         matrix[i][j] = arr[i][j];
        //     }
           
        // }
        for(int i=0;i<n;i++){
            int j=i;
            for(;j<n;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
            // i++, j=j+i;
        }
        
        for(int j=n-1, k=0; j>=n/2, k<n/2;j--, k++){
        for(int i=0;i<n;i++){
            swap(matrix[i][k], matrix[i][j]);
        }
        }

        
    }
};
