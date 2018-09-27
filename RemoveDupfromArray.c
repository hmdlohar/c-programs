#include<stdio.h>
#include<stdlib.h>
void sortArray(int ary[],int size){
	int i,j,temp;
	for(i=0;i<size-1;i++){
		for(j=i+1;j<size;j++){
			if(ary[i]>ary[j]){
				temp=ary[i];
				ary[i]=ary[j];
				ary[j]=temp;
			}
		}
	}
}
int removeDup(int ary[],int size){
	int i,j,k;
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(ary[i]==ary[j]){
				size--;
				//printf("-%d-%d-",ary[j],j);
				for(k=j;k<size;k++){
					ary[k]=ary[k+1];
				}
			}
		}
	}
	return size;
}
int removeDup2(int ary[],int size){
	int i,j,k;
	for(i=0;i<size-1;i++){
		if(ary[i]==ary[i+1]){
			size--;
			for(k=i+1;k<size;k++){
					ary[k]=ary[k+1];
			}
		}
	}
	return size;
}
void printArray(int ary[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d,",ary[i]);
	}
}

int main(){
	int i,j;
	int array[10]={2,5,6,6,1,2,65,4,1,5};
	printf("before Removing duplicate\n");
	printArray(array,10);
	
	printf("\nafter sorting\n");
	sortArray(array,10);
	printArray(array,10);
	printf("\nafter removing duplicate\n");
	i=removeDup2(array,10);
	
	printArray(array,i);
}
