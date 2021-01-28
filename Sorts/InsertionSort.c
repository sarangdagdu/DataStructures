/*Implementation for Insertion Sort
  Author - Sarang Dagdu
  Date : 01/25/2021
  Time Complexity: O(n2) as there are two nested loops.*/

  #include<stdio.h>

  /*InsertionSort Function*/
  void InsertionSort(int arr[],int num_of_elements){
	int loop_1 = 0;
	int loop_2 = 0;
	int key = 0;
	
	for(loop_1 = 1 ; loop_1 < num_of_elements ; loop_1++){
		
		/*Assign the key element and set loop 2 to prev element index*/
		key = arr[loop_1];
		loop_2 = loop_1 - 1;
		
		/*move the elements greater than key one position ahead*/
		while(loop_2 >= 0 && arr[loop_2] > key ){
			arr[loop_2 + 1] = arr[loop_2];
			loop_2 = loop_2 - 1;
		}
		arr[loop_2 + 1] = key;
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
	InsertionSort(arr,num_of_elements);
	printArray(arr, num_of_elements);
  	return 0;
  }