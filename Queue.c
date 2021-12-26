#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 6

int intArray[MAX];
int front = 0;
int rear = -1;
int itemCount = 0;

int last(){
   return intArray[rear];
}

int peek() {
   return intArray[front];
}

bool isEmpty() {
   return itemCount == 0;
}

bool isFull() {
   return itemCount == MAX;
}

int size() {
   return itemCount;
}  

void insert(int data) {

   if(!isFull()) {
	
      if(rear == MAX-1) {
         rear = -1;            
      }       

      intArray[++rear] = data;
      itemCount++;
   }
}

int removeData() {
   int data;
   
   if(!isEmpty()) {
      data = intArray[front];
      front = front + 1;   
      return data;
   } else {
      printf("Could not retrieve data, Queue is empty.\n");
   }
   return 0;  
}

void display(){
   if(!isFull())
      for(int k = 0; k < size(); k++){
         printf("\n");
         printf("%d\t",intArray[k]);
      }
   else
      for(int j = 0;j < MAX; j++){
         printf("\n");
         printf("%d\t",intArray[j]);
      }
}

int main() {
   int a;
   for(int i = 0;i < MAX;i++){
      printf("\nEnter %dth number to be added in the queue of size 6: ",(i+1));
      scanf("%d",&a);
      insert(a);
      printf("\n%d %d %d",peek(),last(),isFull());
      display();
   }
   for(int i = 0;i < MAX;i++){
      printf("\n%d",removeData());
   }
   return 0;
}