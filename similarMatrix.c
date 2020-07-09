#include<stdio.h>
int main(){
    int arr1[2][2]={1,2,3,4},arr2[2][2]={1,2,3,3},count=0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if(arr1[i][j]==arr2[i][j]){
                count++;
            }
        }
    }
    if(count==4){
        printf("both matrices are similar\n");
    }
    else{
        printf("matrices are not similar\n");
    }
    
}