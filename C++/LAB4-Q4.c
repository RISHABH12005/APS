 //Write a C/C++ program to left rotate an array of integers by d times. https://www.hackerrank.com/challenges/array-left-rotation/problem
 *result_count = arr_count;
    int* rotated_array = malloc(arr_count * sizeof(int));
    for (int i = 0; i < arr_count; i++) {
        rotated_array[i] = arr[(i + d) % arr_count];
    }
    return rotated_array;