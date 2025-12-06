#include <stdio.h>

int main() {
	int numbers[]={29, 31, 28, 30, 32, 27, 29, 33, 30, 26};
	int sum=0;
	int size=sizeof(numbers)/sizeof(numbers[0]);
	int count= 0;
	int max =numbers[0];
	int i;
	for(i=0;i<size;i++){
	    sum=sum+numbers[i];
	    if (numbers[i]>max){
	        max=numbers[i];
	    }
	    if(numbers[i]>30){
	        count++;
	    }
	}
	int avg = sum/10;
	printf("\nMax number is: %d",max);
	printf("\nNo of numbers above 30 is: %d",count);
	printf("\naverage is: %d",avg);

}

