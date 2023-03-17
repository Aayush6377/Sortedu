#pragma once
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

int bubble_explain(){
	int num[5]={6,7,8,9,10};
	srand(time(NULL));
	int b=rand() % 5;
	int n=num[b];
	printf("Let us take an example of an array having %d elements as:-\nArray: [ ",n);

	int a[n],elements[121];
	for (int i=-20,j=0; i<=100; i++) elements[j++]=i;  //creating elements
	for (int i=0; i<n; i++){
		int bb=rand() % 122;
		a[i]=elements[bb];
		printf("%d ",a[i]);
	}
	printf("]\nSince there are %d elements in array therefore it will take %d iterations.",n,n-1);
    printf("\n\nHere number in double quotation represends bubble.");
	printf("\n\nBubble sort steps are given by:-\n\n");
	sleep(10);
	
	for (int i=0; i<n-1; i++){
		printf("Iteration %d\n",i+1);
		for (int j=0;j<n-1-i; j++){
			
			for (int k=0; k<n; k++){  //printing each sort
			       if (k==j) printf("\"");  //bubble movement
			       printf("%d",a[k]);
			       usleep(90000);
			       if (k==j) printf("\"");
			       printf("  ");
			}
			
	        printf("\n");
			if (a[j]>=a[j+1]){   //main bubble sort
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				
			}
			
		}
		for (int k=0; k<n; k++){
		      if (k==n-1-i) printf("\"");  //for end bubble
		      printf("%d",a[k]);
		      usleep(90000);
		      if (k==n-1-i) printf("\"");
		      printf("  ");
		}
		printf("\n\n\n");
	}
    printf("Hence our array is sorted now.\n");
    sleep(1);
    printf("Sorted array: [ ");
	for (int i=0; i<n; i++) printf("%d ",a[i]);  // sorted array
	printf("]");
}