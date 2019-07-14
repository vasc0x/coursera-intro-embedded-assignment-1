/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author Adan Vasconcelos
 * @date 2019-07-10
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main(void)
{
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114,  88,  45,  76, 123,  87,  25,  23,
                              200, 122, 150,  90,  92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  
  print_statistics(test);
  
  print_array(test, SIZE);
  
  return 0;
}

void print_statistics(unsigned char *ptr_array)
{
  printf("Median: %f \n", find_median(ptr_array, SIZE));
  printf("Mean: %f \n", find_mean(ptr_array, SIZE));
  printf("Maximum: %d \n", find_maximum(ptr_array, SIZE));
  printf("Minimum: %d \n", find_minimum(ptr_array, SIZE));
}

void print_array(unsigned char *ptr_array, unsigned int array_size)
{
  printf("Array: ");
  
  for (int i = 0; i < array_size; i++)
  {
    printf("%d, ", ptr_array[i]);
  }
}

float find_median(unsigned char *ptr_array, unsigned int array_size)
{
  float median = 0;
  //float mean = find_mean(ptr_array, array_size);
  
  sort_array(ptr_array, array_size);
  
  return median;
}

float find_mean(unsigned char *ptr_array, unsigned int array_size)
{
  unsigned int total = 0;
  float mean = 0;

  for (int i = 0; i < array_size; i++)
  {
    total += ptr_array[i];
  }
  
  mean = total / array_size;
  
  return mean;
}

int find_maximum(unsigned char *ptr_array, unsigned int array_size)
{
  unsigned int max = 0;
  
  for (int i = 0; i < array_size; i++)
  {
    if (ptr_array[i] > max)
    {
      max = ptr_array[i];
    }
  }
  
  return max;
}

int find_minimum(unsigned char *ptr_array, unsigned int array_size)
{
  unsigned int min = ptr_array[0]; // Assume first element as minimum
  
  for (int i = 0; i < array_size; i++)
  {
    if (ptr_array[i] < min)
    {
      min = ptr_array[i];
    }
  }
  
  return min;
}

void sort_array(unsigned char *ptr_array, unsigned int array_size)
{
  unsigned int pivot = ptr_array[SIZE - 1];
  
  unsigned int i = 0;

  /*
  unsigned int a = 1;
  unsigned int b = 2;
  
  unsigned int *ptr_a = &a;
  unsigned int *ptr_b = &b;
  
  printf("%x %x \n", &a, ptr_a);
  
  printf("a before: %d. b before: %d \n", a, b);
  
  swap(ptr_a, ptr_b);
  
  printf("a after: %d. b after: %d \n", a, b);
  
     34, 201, 190, 154,   8, 194,   2,   6,
    114,  88,  45,  76, 123,  87,  25,  23,
    200, 122, 150,  90,  92,  87, 177, 244,
    201,   6,  12,  60,   8,   2,   5,  67,
      7,  87, 250, 230,  99,   3, 100,  90,
  */
  
  while (*ptr_array[i+1] < *ptr_array[i])
  {
    swap(ptr_array[i+1], ptr_array[i]);
    
    sort_array(ptr_array, SIZE);
  }
  
  print_array(ptr_array, SIZE);
}

void swap(unsigned int *a, unsigned int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

