#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "MainSort_2d.h"
#include "MainSort_1d.h"
#include "bubble_explain.h"
#include "insertion_explain.h"
#include "selection_explain.h"
#include "printing_code.h"

int perform_sorting(){
    printf("//**Perform Sorting Index**\\\\\n");
    printf("1) Single dimensional sorting\n2) Multi dimensional (2D) sorting\n\n");
    int n;
    printf("Enter task: ");
    scanf("%d",&n);
    if (n==0){
        return 1;
    }
    else if (n==1){
        printf("\n");
        MainSort_1d();
        return 0;
    }
    else if (n==2){
        printf("\n");
        MainSort_2d();
        return 0;
    }
    else {
        printf("Task %d not available",n);
        return 0;
    }
}

int understand_sorting(){
    printf("//**Understand Sorting Index**\\\\\n");
    printf("1) Bubble sort\n2) Insertion sort\n3) Selection sort\n\n");
    int n;
    printf("Enter task: ");
    scanf("%d",&n);
    if (n==0){
        return 1;
    }
    else if (n==1){
        printf("\n");
        bubble_explain();
        return 0;
    }
    else if (n==2){
        printf("\n");
        insertion_explain();
        return 0;
    }
    else if (n==3){
        printf("\n");
        selection_explain();
        return 0;
    }
    else {
        printf("Task %d not available",n);
        return 0;
    }
}

int code(){
    printf("//**Code Index**\\\\\n");
    printf("1) Bubble sort\n2) Insertion sort\n3) Selection sort\n\n");
    int n;
    printf("Enter task: ");
    scanf("%d",&n);
    int m=printing_code(n);
    return m;
}


int main(){
    char intro[]="Welcome to Sortedu!!\n\nSorting is the process of arranging data into meaningful order so that you can analyze it more effectively\n\nThis program helps you to sort a 1d as well as 2d array, provides codes and help in understanding different sorting algorithms\n\n";
    
    for (int i=0; i<strlen(intro); i++){
        printf("%c",intro[i]);
        usleep(30000);
    }
    
    sleep(2);
    printf("We have the following operations:\n\nNote: Enter 0 to exit/come to main index\n\n");
    
    int ope;
    while (1){
        printf("//**Main Index**\\\\\n1) Perform sorting\n2) Understand sorting alogorithms\n3) Code of sorting algorithm\n\n");
        printf("Enter operation: ");
        scanf("%d",&ope);
        
        if (ope==0){
            printf("\nProject by:\nAayush Kukreja\n1/22/FET/BCS/159\n");
            break;
        }
        else if (ope==1){
            while (1){
                 if (perform_sorting()){
                   break;
                 }
                 printf("\n\n");
            }
            continue;
        }
        
        else if (ope==2){
            while (1){
                if (understand_sorting()){
                    break;
                }
                printf("\n\n");
            }
            continue;
        }
        
        else if (ope==3){
            while (1){
                if (code()){
                    break;
                }
                printf("\n\n");
            }
            continue;
        }
        
        else {
            printf("Operation not found\n\n");
            continue;
        }
    }
    return 0;
}