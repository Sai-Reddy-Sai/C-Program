#include<stdio.h>
int main(){
	int n;
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements in an array:\n");
	int target,found=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the target number:\n");
	scanf("%d",&target);
	for(int i=0;i<n;i++){
		if(a[i]==target){
			printf("The element was found:%d",i,target);
			found=1;
			break;
		}
		}
		if(!found){
			printf("The element was not found:");
	}
	return 0;
}
