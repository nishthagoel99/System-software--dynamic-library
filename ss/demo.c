#include<stdio.h>
int main()
{
	int i,n,search;

	int arr[10];
	printf("enter no of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter array element %d : ",i+1);
		scanf("%d",&arr[i]);
	}

printf("Addition of 1 and 2 is :%d\n",add(1,2));

printf(" \n sorting of elements: \n");
printf("ARRAY BEFORE SORTING: \n");
p(arr,n);
sort(n,arr);
printf("ARRAY AFTER SORTING:\n");
p(arr,n);


printf("\nBinary search : enter element: ");
scanf("%d",&search);
bsearch(arr,search,n);



return 0;
}

