//
//  main.c
//  linearSearch
//
//  Created by Fitsum Teklehaimanot on 07/06/2015.
//  Copyright (c) 2015 Fitsum Teklehaimanot. All rights reserved.
//

#include <stdio.h>


int main(int argc, const char * argv[]) {
  void displayFoundElement(void *found);
  int intComparison(void *element1, void *element2);
//  int intComparisonFunction(key, element);
  
//  int nonGenericLinearSearch(int key, int array[], int size);
  void *genericSearch(void *key, void *base, int numOfElements, int elementSize, int (*intComparison(void *, void *)));

  
  int myArray[5] = {1,2,3,4,5};
  int key = 6;

//  printf("The index of the searched integer: %i\n",nonGenericLinearSearch(key, myArray, sizeof(myArray)));
  
  // To see the result from the first way of implementing the generic code
  int *found = genericSearch(&key, &myArray, sizeof(myArray), sizeof(int), **intComparison);

  displayFoundElement(found);

}

void displayFoundElement(void *found){
  if (found == 0) {
    printf("The character is found at memory location %p", found);
  } else {
    printf("No record found!!");
  }
}

//int intComparisonFunction(void* element1, void* element2){
//  int *p1 = *element1;
//  int *p2 = *element2;
//  return -1;
//}

int intComparison(void *element1, void *element2){
  int *ip1 = element1;
  int *ip2 = element2;
  
  return *ip1 - *ip2;
}