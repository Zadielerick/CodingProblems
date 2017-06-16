#include "problem1.h"

int main(){
	int arr[] = {1,2,3};	
	printf("For Loop: The sum of array is: %d\n", forLoopSum(arr, 3));
	printf("While Loop: The sum of array is: %d\n", whileLoopSum(arr, 3));
	printf("Recursive: The sum of array is: %d\n", recursiveSum(arr, 3));
	return 0;
}

int forLoopSum(int* arr, int arrLen){
	int i, sum = 0;
	for(i = 0; i < arrLen; i++){
		sum += arr[i];
	}
	return sum;
}

int whileLoopSum(int* arr, int arrLen){
	int i = 0, sum = 0;
	while(i < arrLen){
		sum += arr[i];
		i++;
	}
	return sum;
}

int recursiveSum(int* arr, int arrLen){
	if(arrLen == 0){
		return 0;
	}
	else{
		return *arr + recursiveSum(++arr, --arrLen);
	}
}
