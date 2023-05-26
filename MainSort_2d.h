#pragma once
#include <stdio.h>

int print_array(float *a,int r, int c,int transpose){
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            if (transpose){
                printf("%g ",*(a+j*r+i));
            }
            else{
                printf("%g ",*(a+j+i*c));
            }
        }
        printf("\n");
    }
    return 0;
}
int sort_2d(float *arr, int r,int c){
    for (int a=0; a<r; a++){
        for (int b=0; b<c-1; b++){
            for (int d=0; d<c-b-1; d++){
                if (*(arr+d+a*c)>*(arr+d+1+a*c)){
                    float temp=*(arr+d+a*c);
                    *(arr+d+a*c)=*(arr+d+1+a*c);
                    *(arr+d+1+a*c)=temp;
                }
            }
        }
    }
    printf("\n");
    return 0;
}

int MainSort_2d(){
    int r,c;
    printf("Enter the row: ");
    scanf("%d",&r);
    printf("Enter the column: ");
    scanf("%d",&c);
    
    printf("Enter the matrix: \n");
    float array[r][c], copy[c][r];
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            scanf("%f",&array[i][j]);
        }
    }
    
    for (int k=0; k<c; k++){
        for (int l=0; l<r; l++){
            copy[k][l]=array[l][k];
        }
    }
    
    printf("\nRow wise sorting:");
    sort_2d(&array[0][0],r,c);
    print_array(&array[0][0],r,c,0);
    
    printf("\nColumn wise sorting:");
    sort_2d(&copy[0][0],c,r);
    print_array(&copy[0][0],r,c,1);
    return 0;
}