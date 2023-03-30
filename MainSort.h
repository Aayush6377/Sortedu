#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int MainSort(){
    char a[1000];
    printf("Enter an array: ");
    gets(a);
    int count=1; //counting no. of elements
    for (int i=0; i<strlen(a); i++){
        (a[i]==' ')? count++:count;
    }
    
    float ele[count]; //adding of elements
    ele[0]=atof(strtok(a," "));
    for (int i=1; i<count; i++){
        ele[i]=atof(strtok(NULL," "));
    }
    
    for (int i=1; i<count; i++){ //sorting
        float temp=ele[i];
        int j=i-1;
        while (j>=0 && ele[j]>temp){
            ele[j+1]=ele[j];
            j--;
        }
        ele[j+1]=temp;
    }
    
    printf("Sorted array: ");
    for (int i=0; i<count; i++){
        printf("%g ",ele[i]);
    }
}
