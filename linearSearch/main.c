//
//  main.c
//  linearSearch
//
//  Created by Fitsum Teklehaimanot on 07/06/2015.
//  Copyright (c) 2015 Fitsum Teklehaimanot. All rights reserved.
//
//
//#include <stdio.h>
//
//
//int main(int argc, const char * argv[]) {
//  void displayFoundElement(void *found);
//  int intComparison(void *element1, void *element2);
//
////  int nonGenericLinearSearch(int key, int array[], int size);
//  void *genericSearch(void *key, void *base, int numOfElements, int elementSize, int (intComparison(void *, void *)));
//
//
//  int myArray[5] = {1,2,3,4,5};
//  int key = 3;
//
//  int *found = genericSearch(&key, &myArray, sizeof(myArray), sizeof(int), *intComparison);
//  displayFoundElement(found);
//
//}
//
//void displayFoundElement(void *found){
//  if (found != NULL) {
//    printf("The character is found at memory location %p", found);
//  } else {
//    printf("No record found!!");
//  }
//}
//
//
//// comparison function written by client to pass into the genericSearch function if the list is of int
//int intComparison(void *element1, void *element2){
//  int *ip1 = element1;
//  int *ip2 = element2;
//
//  return *ip1 - *ip2;
//}

// if we wanted to search through a list of character arrays
//in this case we are looking for our favourite note in the list of notes

int main() {
  
  void *genericSearch(void *key, void *base, int numOfElements, int elementSize, int (intComparison(void *, void *)));
  
  char *notes[] = {"AB", "F#", "B", "Gb", "D"};
  
  char * favouriteNote = "Eb";
  
  char **found = genericSearch(&favouriteNote, notes, 5, sizeof(char *), StrCmp);

}