#pragma once
#include <stdio.h>
#include <unistd.h>

int printing_code(){
    char name[3][20]={"bubble_sort.txt","insertion_sort.txt","selection_sort.txt"};
    printf("Here are the programs we have\n1) Bubble sort\n2) Insertion sort\n3) Selection sort\n");
    
    while (1){
        int sel;
        printf("Select the code you want (1,2,3): ");
        scanf("%d",&sel);
        if (sel<1 || sel>3){
            printf("Service doesn't found\nPlease select from given list only\n");
            continue;
        }
        
        else {
            FILE *f=fopen(name[sel-1],"r");
            if (f==NULL){
                printf("File %s doesn't found",name[sel-1]);
                break;
            }
            else{
                char a='\n';
                while (!feof(f)){
                    printf("%c",a);
                    a=fgetc(f);
                    usleep(1000);
                }
                break;
            }
        }
    }
}
