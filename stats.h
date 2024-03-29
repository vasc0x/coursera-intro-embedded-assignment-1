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
 * @file stats.h 
 * @brief function prototypes
 *
 * <Add Extended Description Here>
 *
 * @author Adan Vasconcelos
 * @date 2019-07-10
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Information here>
 */
void print_statistics(unsigned char *ptr_array);
void print_array(unsigned char *ptr_array, unsigned int array_size);
float find_median(unsigned char *ptr_array, unsigned int array_size);
float find_mean(unsigned char *ptr_array, unsigned int array_size);
int find_maximum(unsigned char *ptr_array, unsigned int array_size);
int find_minimum(unsigned char *ptr_array, unsigned int array_size);
void sort_array(unsigned char *ptr_array, unsigned int array_size);
void swap(unsigned int *a, unsigned int *b);

#endif /* __STATS_H__ */
