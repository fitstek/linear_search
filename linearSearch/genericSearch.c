//
//  genericSearch.c
//  linearSearch
//
//  Created by Fitsum Teklehaimanot on 07/06/2015.
//  Copyright (c) 2015 Fitsum Teklehaimanot. All rights reserved.
// The challenge here is to make a program that can search through an array of any type and return the key if it finds it.
// we

#include "genericSearch.h"

//void *genericSearch(void *key, void *base, int numOfElements, int elementSize ){
//  for (int i = 0; i < numOfElements; i++) {
//    void *elementAddress = (char*) base + i * elementSize;
//    // this method will work for bool, short, int, char, long, double and float because everuthing resides directly in the memory location
//    // it will not work char*, strings, structs that have pointers inside
//    if (memcmp(key, elementAddress, elementSize) == 0) {
//      return elementAddress;
//    }
//  }
//  return NULL;
//}


// The following implementation attempts to cover what the previous implementation has left out
// Inorder to do that we have to replace memcmp with a custom function that the client passes as an argument pass in as an argument

void *genericSearch(void *key, void *base, int numOfElements, int elementSize, int (*intComparison(void *, void *))){
  
  for (int i = 0; i < numOfElements; i++) {
      void *elementAddress = base + i * elementSize;
    if (intComparison(key, elementAddress) == 0) {
      return elementAddress;
    }
  }
  return NULL;
}

