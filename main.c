#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,n,a[]={7,5,3,1,2};
	char c[]={'a','b','c','d','e'};
	n=sizeof(a)/sizeof(int);
	for(i=0;i<n;i++){
		printf("\na[%d]=%d",i,a[i]);
	}
	printf("\na�}�C�O����Ŷ��G%dBytes\n\n",sizeof(a));
	n=sizeof(c)/sizeof(char);
	for(i=0;i<n;i++){
		printf("\nc[%d]=%d",i,c[i]);
	}
	printf("\nc�}�C�O����Ŷ��G%dBytes\n\n",sizeof(c));
	system("PAUSE");
	
	return 0;
}
