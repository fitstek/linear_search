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
  
  
  int nonGenericLinearSearch(int key, int array[], int size);
  void *genericSearch(void *key, void *base, int numOfElements, int elementSize );
  
  int myArray[5] = {1,2,3,4,5};
  int key = 6;

  printf("The index of the searched integer: %i\n",nonGenericLinearSearch(key, myArray, sizeof(myArray)));
  
  // To see the result from the first way of implementing the generic code
  int *found = genericSearch(&key, &myArray, sizeof(myArray), sizeof(int));

  displayFoundElement(found);

}

void displayFoundElement(void *found){
  if (found != NULL) {
    printf("The character is found at memory location %p", found);
  } else {
    printf("No record found!!");
  }
}