Registration:BSE-01-0051/2024
Date:20/6/2024
Description: matrix arrays
*/
#include <stdio.h>

int main() {
    int sum;
    int matrix[2][3] ={{1,2,3},{4,5,6}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("matrix[%d][%d]=%d\n",i,j,matrix[i][j]);
            sum=sum+matrix[i][j];
        }
    }
printf("sum is %d",sum);
    return 0;
}