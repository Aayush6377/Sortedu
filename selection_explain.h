#pragma once
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

int selection_explain(){
    srand(time(NULL));
    int ran[]={6,7,8,9},elements[121];
    int n=ran[rand()%4];
    int a[n];
    
    for (int i=-20; i<=100; i++) elements[i+20]=i;
    
    for (int i=0; i<n; i++) a[i]=elements[rand()%122];
    
    printf("Let us take an example of an array having %d elements:-\n",n);
    printf("{ ");
    
    for (int i=0; i<n; i++) printf("%d ",a[i]);
    printf("}\n\n");
    
    printf("The two number in \" \" are the swapping numbers.\nThe numbers before | are sorted once which need not to be changed/swap.\n\n");
    
    sleep(10);
    
    for (int i=0; i<n-1; i++){
        int y=i;
        for (int j=i+1; j<n; j++) {
            if (a[y]>a[j]) y=j;
        }
        switch (i){
            case 0: 
                printf("Before swapping: ");
                break;
            case 1: 
                printf("Before swapping: ");
                break;
            case 2: 
                printf("Similarly:-\n\n");
                break;
        }
        
        
        for(int k=0; k<n; k++){
            if (k==i || k==y) printf("\"");
            printf("%d%s",a[k],(k+1==i)? "|": "");
            if (k==i || k==y) printf("\" ");
            else printf(" ");
        }
        
        if (a[i]!=a[y]){  //main swapping
            int temp=a[i];
            a[i]=a[y];
            a[y]=temp;
        }
        
        printf("\n");
        switch (i){
            case 0: 
                printf("After swapping: ");
                break;
            case 1: 
                printf("After swapping: ");
                break;
        }
      
        for (int k=0; k<n; k++){
            if (k==i || k==y) printf("\"");
            printf("%d%s",a[k],(k+1==i)? "|": "");
            if (k==i || k==y) printf("\" ");
            else printf(" ");
        }
        printf("\n\n");
        sleep(3);
    }
    printf("\n");
    printf("Hence our Sorted array: { ");
    for (int i=0; i<n; i++) printf("%d ",a[i]);
    printf("}");
}
