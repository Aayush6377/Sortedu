#pragma once
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

int insertion_explain(){
    srand(time(NULL));
    int no[5]={6,7,8,9,10};
    int n=no[rand()%5];  //No. of elements in array
    int elements[120]; //Actual array elements
    for (int i=-20; i<100; i++) elements[i+20]=i;
    
    int a[n]; //inserting array elements
    for (int y=0; y<n;y++) a[y]=elements[rand()%121];
    
    printf("Let us take an example of an array having %d elements as:-\nArray: [ ",n);
    for (int i=0; i<n ; i++){ //Printing array
        printf("%d ",a[i]);
    }
    printf("]");
    sleep(2);
    
    printf("\n\n%d is already sorted as there is only one element.",a[0]);
    sleep(3);
    printf("\n\nNow we will take every element from unsorted array and put it in its correct position in sorted array.");
    sleep(4);
    printf("\n\nThe element in \" \" denotes selected element.");
    sleep(3);
    printf("\n\n");
    
    
    printf("      Sorted               Unsorted\n");
    for (int i=1; i<n; i++){
        
        printf("Before:"); //Printing before array
        for (int u=0; u<n ; u++){
               if (u==i) printf("      ");
               (u==i)? printf("\""):printf(" ");
               printf("%d",a[u]);
               (u==i)? printf("\""): printf(" ");
               usleep(300000);
        }
        printf("\n");
        
        
        int temp=a[i];  //Main insertion sort
        int j=i-1;
        for (; j>=0 && a[j]>temp; j--){
            a[j+1]=a[j];
        }
        a[j+1]=temp;
        
        
        printf("After: "); //Printing after array
        for (int u=0; u<n ; u++){
               (u==j+1)? printf("\"") : printf(" ");
               printf("%d",a[u]);
               (u==j+1)? printf("\"") : printf(" ");
               if (u==i) printf("      ");
               usleep(300000);
        }
        printf("\n\n");
    }
    
    sleep(2);
    printf("Hence our array is sorted now\n");
    sleep(2);
    printf("Sorted array: [ ");
    for (int u=0; u<n ; u++){
           printf("%d ",a[u]);
    }
    printf("]");
}