#include <iostream>
// Include files
#include "main.h"
#include "simulateStandaloneNet.h"
#include "simulateStandaloneNet_terminate.h"

// Function Declarations
static void argInit_13x1_real_T(double result[13]);

// Function Definitions
static void argInit_13x1_real_T(double result[13])
{
  // Loop over the array to initialize each element.
  for (int idx0{0}; idx0 < 13; idx0++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result[idx0] = idx0+ 1.0;
  }
}



int main(int, char **)
{
  // The initialize function is being called automatically from your entry-point
  // function. So, a call to initialize is not included here. Invoke the
  // entry-point functions.
  // You can call entry-point functions multiple times.
  main_simulateStandaloneNet();
  // Terminate the application.
  // You do not need to do this more than one time.
  simulateStandaloneNet_terminate();
  return 0;
}

void main_simulateStandaloneNet()
{
  double dv[13];
  double b_y1;
  // Initialize function 'simulateStandaloneNet' input arguments.
  // Initialize function input argument 'x1'.
  // Call the entry-point 'simulateStandaloneNet'.
  argInit_13x1_real_T(dv);
  b_y1 = simulateStandaloneNet(dv);
  std::cout<<b_y1;
}
