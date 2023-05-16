#include <stdio.h>
#include <stdlib.h>


void flagged_bubbleSort(int* array,int size){
	int i =0; 

	void trocar(int* a,int*b){
		int temp;
		temp =*a; *a = *b; *b = temp;
	}
	void printArray(int* arr){
		for(i=0;i<size;i++){
			if(i!=size-1){
				printf("%d ",arr[i]);
			}
			else{
			printf("%d\n",arr[i]);
			}
		}
	}

	int sorted = 0;
	while(!sorted){
		sorted = 1;
		for(i=0;i<size-1;i++){
			if(array[i]>array[i+1]){
				trocar(&array[i],&array[i+1]);
				printArray(array);
				printf("\n");
				sorted = 0;
			}
		}
	}
	printf("Array ordenado\n");
}


int main(){
	int item=0; int *array;int size=0;
	scanf("%d",&item);	
while (item!=-1){
		if(size==0){
			size++; array = malloc(sizeof(int)*size); array[0]=item;
		}
		else{
			size++; array = realloc(array,sizeof(int)* size); array[size-1]=item;
		}
		
	scanf("%d",&item);
	}
	flagged_bubbleSort(array,size);
	printf("FIM");
}

