#pragma once
#include <stdio.h>
#include <unistd.h>

int printing_code(int sel)
{
    char name[3][20] = {"bubble_sort.txt", "insertion_sort.txt", "selection_sort.txt"};
    
    if (sel==0){
        return 1;
    }
    else if (sel < 1 || sel > 3)
    {
        printf("Task %d not available", sel);
        return 0;
    }
    else
    {
        FILE *f = fopen(name[sel - 1], "r");
        if (f == NULL)
        {
            printf("File %s doesn't found", name[sel - 1]);
        }
        else
        {
            char a = '\n';
            while (!feof(f))
            {
                printf("%c", a);
                a = fgetc(f);
                usleep(1000);
            }
        }
        return 0;
    }
}
