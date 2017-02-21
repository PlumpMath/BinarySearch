#include <iostream>

int main() {
  //Populate our array
  int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  //declare the middle pointer (integer)
  int middle = 5;
  //Declare the end pointer (integer)
  int end = 10;

  //Value whe are looking for
  int searched = 10;

  int step;

  while (true) {
    //Print out the value pointed at by middle
    std::cout << "Middle = " << middle << std::endl;
    std::cout << "End = " << end << std::endl;

    //Change the middle and end variables to narrow down the search

    step = (end - middle) / 2;

    if (searched > array[middle]) {
      middle += step;
      continue;
    } else if (searched < array[middle]) {
      middle -= step;
      end = middle;
      middle = middle * 0.5;
      continue;
    } else if (searched == array[middle]) {
      break;
    }



  }

  std::cout << "The value searched for was in the " << middle + 1 << "th slot of the array" << std::endl;

  return 0;
}
