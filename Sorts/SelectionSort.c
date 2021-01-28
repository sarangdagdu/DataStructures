/*Implementation for Selection Sort
  Author - Sarang Dagdu
  Date : 01/25/2021
  Time Complexity: O(n2) as there are two nested loops.
  The good thing about selection sort is it never makes more than O(n) swaps
  and can be useful when memory write is a costly operation.*/
  
  #include<stdio.h>
  /*Swap Function*/
  void swap(int* entry_1, int* entry_2){
	int holder = 0;
	holder = *entry_1;
	*entry_1 = *entry_2;
	*entry_2 = holder;
  }
  /*SelectionSort Function*/
  void SelectionSort(int arr[],int num_of_elements){
	int loop_1 = 0;
	int loop_2 = 0;
	int min_index = 0;
	
	for(loop_1 = 0 ; loop_1 < num_of_elements - 1 ; loop_1++){
		min_index = loop_1;
		for(loop_2 = loop_1 + 1 ; loop_2 < num_of_elements ; loop_2++){
			if(arr[loop_2] < arr[min_index])
				min_index = loop_2;
		}
		swap(&arr[min_index], &arr[loop_1]);
	}	
  }
  
  /* Function to print an array */
	void printArray(int arr[], int size){ 
	  int loop; 
	  for (loop = 0; loop < size; loop++) 
          printf("%d ", arr[loop]); 
	      printf("\n"); 
	} 
  /*Driver Program*/
  int main(){
  	int num_of_elements = 0;
	int arr[] = {34,54,11,7,99,1};
	num_of_elements = sizeof(arr) / sizeof(arr[0]);
	SelectionSort(arr,num_of_elements);
	printArray(arr, num_of_elements);
  	return 0;
  }