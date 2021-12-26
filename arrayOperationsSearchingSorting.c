#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void getData(int x[],int size);
void display(int x[],int size);
void copy(int x[],int size);
void deletes(int x[],int size,int j);
void linearSearch(int x[], int size);
void binarySearch(int x[],int size , int num);
void bubbleSort(int x[], int size);
void insertionSort(int x[],int size);
void selectionSort(int x[],int size);
int main()
{   int a[10];
    int size = 10;
    printf("Size of declared array is %d",size);
    getData(a,size);
    display(a,size);
    return 0;


    /*int a[10];
    int size = 10;
    printf("size of declared array is %d.",size);
    getData(a,size);
    int option;
    printf("\n Enter an option: ");
    scanf("%d",&option);
    switch(option){
        case 1:
            bubbleSort(a,size);
            break;
        case 2:
            insertionSort(a,size);
            break;
        case 3:
            selectionSort(a,size);
            break;
        default:
            printf("Invalid option");*/


}

void getData(int x[],int size){
    int i;
    for(i=0;i < size;i++){
        printf("\nEnter a number: ");
        scanf("%d",&x[i]);
     }
}

void display(int x[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("\n Element of array on %d th index is %d. \n",i,x[i]);
     }
}

void copy(int x[],int size){
    int b[10];
    int i;
    for(i = 0;i < size;i++){
        b[i] = x[i];
    }

}

void deletes(int x[],int size,int j){
    while (j < size){
        x[j] = x[j+1];
        j++;
    }
   size--;
}

void linearSearch(int x[], int size){
    int i;
    int num;
    printf("Enter the number to search: \n");
    scanf("%d",&num);
    for(i=0;i<size;i++){
        if (x[i] == num)
            break;
    }
    if (i == size)
        printf("Number not found. \n");
    else
        printf("Number found out at %d position of the array.\n",i);

}

void binarySearch(int x[],int size , int num){
    int mid;
    int low = 0;
    int up = (size - 1);
    bool flag = true;
    for((mid = (low+up)/2); low <= up; (mid = (low+up)/2)){
        if (x[mid] == num){
            printf("Number located at position %d of the array.\n",mid);
            flag = false;
            break;
        }
        if (x[mid] > num)
            up = mid - 1;
        else
            low = mid +1;

        }
        if (flag)
            printf("Number not found.\n");
}

void bubbleSort(int x[], int size){
    int i,j,temp;
    printf("Array before sorting.\n");
    for(i=0;i<size;i++){
        printf("%d \t",x[i]);
    }
    for(i = 0 ;i < size ;i++){
        for(j = 0 ; j < (size - 1);j++){
            if (x[j] > x[j+1])
            {
                temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
        }
    }
    printf("\n Array after sorting \n");
    for(i=0;i<size;i++){
        printf("%d \t",x[i]);
    }
    printf("\n This array is sorted by bubble-sort.");
}

void insertionSort(int x[],int size){
    int i,j,k,temp;
    printf("Array before sorting.\n");
    for(i=0;i<size;i++){
        printf("%d \t",x[i]);
    }
    for(i=0;i<size;i++){
        for(j=0;j<i;j++){
            if (x[j]>x[i]){
                temp = x[j];
                x[j] = x[i];
                for(k=i;k>j;k--)
                    x[k] = x[k-1];
                x[k+1] = temp;
            }
        }
    }
    printf("\n Array after sorting \n");
    for(i=0;i<size;i++){
        printf("%d \t",x[i]);
    }
    printf("\n This array is sorted by insertion sort.");
}

void selectionSort(int x[],int size){
    int i,j,temp;
    printf("Array before sorting.\n");
    for(i=0;i<size;i++){
        printf("%d \t",x[i]);
    }
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if (x[i]>x[j]){
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    printf("\n Array after sorting \n");
    for(i=0;i<size;i++){
        printf("%d \t",x[i]);
    }
    printf("\n This array is sorted by selection sort.");
}
