#include <stdio.h>
#include <stdlib.h>
void spiralOrder(int n){
    int** matrix=(int**)malloc(5* sizeof(int*));
    int top=0;
    int bottom=n-1;
    int left=0;
    int right=n-1;
    int num=1;
    for (int i=0;i<n;i++){
        matrix[i] = malloc(n * sizeof *matrix[i]);    
    }
    while (top <= bottom && left <= right){
        // Left to Right
        for (int i = left; i <= right; i++){
            matrix[top][i] = num++;
        }
        top++;
        // Top to Bottom
        for (int i = top; i <= bottom; i++){
            matrix[i][right] = num++;
        }
        right--;
        // Right to Left
        if (top <= bottom){
            for (int i = right; i >= left; i--){
                matrix[bottom][i] = num++;
            }
        bottom--;
        }
        // Bottom to Top
        if (left <= right){
            for (int i = bottom; i >= top; i--){
                matrix[i][left] = num++;
            }
        left++;
        }
    }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                printf("%d ", matrix[i][j]);
            }
        printf("\n");
    }
    free(matrix);     
}
int main(){
   int n=3;
   spiralOrder(n);
}
