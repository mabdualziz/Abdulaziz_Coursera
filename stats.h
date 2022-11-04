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
 * @brief Definitions and macros required for the c1m1 assignment
 *
 *
 * @author Mohamed Abdulaziz
 * @date 11/5/2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints the statistics of an array
 *
 * This function takes the minimum, maximum, mean and median, 
 * and print those values on the screen
 * 
 * @param minimum The minimum number of an array
 * @param maximum The maximum number of an array
 * @param mean The mean of an array
 * @param median The median of an array
 *
 * @return void
 */
void print_statistics (unsigned char minimum, unsigned char maximum, float mean, unsigned char median);


/**
 * @brief Prints the contents of an array
 *
 * This function takes an array and prints it to the
 * screen.
 * 
 * @param array The first element of the array to be printed on the screen
 *
 * @return void
 */
void print_array (unsigned char *array, unsigned int counter);


/**
 * @brief Finds the median of an array
 *
 * This function takes the array and finds
 * its median.
 * 
 * @param array The first element of the array to be processed
 * @param 
 *
 * @return median The median value of the given array.
 */
unsigned char find_median (unsigned char *array, unsigned int counter);

/**
 * @brief Finds the mean of the array
 *
 * This function takes the array and finds
 * its mean.
 * 
 * @param array The first element of the array to be processed
 *
 * @return mean The mean value of the array.
 */
float find_mean (unsigned char *array, unsigned int counter);

/**
 * @brief Finds the maximum of an array
 *
 * This function takes an array and finds
 * its maximum.
 * 
 * @param array The first element of the array to be processed
 *
 * @return maximum The maximum value of an array.
 */
unsigned char find_maximum (unsigned char *array, unsigned int counter);

/**
 * @brief Finds the minimum of an array
 *
 * This function takes an array and finds
 * its minimum.
 * 
 * @param array The first element of the array to be processed
 *
 * @return minimum The minimum value of an array.
 */
unsigned char find_minimum (unsigned char *array, unsigned int counter);

/**
 * @brief Sorts an array from the largest to smallest
 *
 * This function takes the array and its length, sorts
 * the array from the largest to smallest using bubble sort and returns the
 * sorted array.
 * 
 * @param array The first element of the array to be processed
 *
 * @return median The median value of the given array.
 */
void sort_array (unsigned char *array, unsigned int counter);

#endif /* __STATS_H__ */