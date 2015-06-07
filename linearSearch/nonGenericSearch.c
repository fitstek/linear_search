
//
//  nonGenericSearch.c
//  linearSearch
//
//  Created by Fitsum Teklehaimanot on 07/06/2015.
//  Copyright (c) 2015 Fitsum Teklehaimanot. All rights reserved.
// This program searches a given array until it finds the key it is looking for if it doesn't find anything it finished with -1

#include "nonGenericSearch.h"

int nonGenericLinearSearch(int key, int array[], int size){
  for (int i = 0; i < size; i++) {
    if (array[i] == key) {
      return i;
    }
  }
  
  
  return -1;
}
