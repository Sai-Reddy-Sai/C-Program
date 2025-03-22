#include<stdio.h>
int main(){
	int n,mid,low=0;
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	int a[n],high=n-1;
	printf("Enter the elements in an array:\n");
	int target,found=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the target number:\n");
	scanf("%d",&target);
	while(low<=high){
		mid=(low+high)/2;
		if(a[mid]>target)
		high=mid-1;
		else if(a[mid]<target)
		low=mid+1;
		else if(a[mid]==target){
			printf("The element was found:%d\n",mid,target);
			found=1;
			break;
		}
		if(!found){
			printf("The element was not found:\n");
		}
	}
	return 0;
}
