#include <stdio.h>
#include <stdbool.h>
bool isspecial(char c)
{
    if ((c >= 'a') && (c <= 'z')) return false;
    if ((c >= 'A') && (c <= 'Z')) return false;
    return true;
}

void rev(char* array, int N)
{
    int i = 0;     // i points to the first index of the array 
    int j = N - 1; // j points to the last index of the array

    while (i < j)
    {
        if (isspecial(array[i]))
        {
            i++;
        }
        else if (isspecial(array[j]))
        {
            j--;
        }
        else
        {
            char tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
            i++;
            j--;
        }
    }
}
int main()
{
    char array[] = {'a','@','%','y','r'};
    rev(array,5);
    for(int i = 0 ; i < 5 ; i++){
        printf("\t%c\t",array[i]);
    }

    return 0;
}
