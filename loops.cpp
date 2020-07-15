#include <iostream>

using namespace std;

uint32_t sumOneTo(uint32_t n);

uint32_t factorial(uint32_t n);

uint32_t slowFactorial(uint32_t n);  // No using the * or *= instruction

/*
printCheckerboard(5)
Expected output:
* * * * *
 * * * * *
* * * * * *
 * * * * *
* * * * *
*/
void printCheckerboard(uint32_t n);

/*printKite(9), where 9 is number of layers
Expected Output: (or can be filled, instead of spaces, up to you)
    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *
*/
void printKite(uint32_t n);

uint32_t countPrimesLessThan(uint32_t n);

// Please print the array in one line, separating the contents by tabs (\t)
void printArray(uint32_t* arr, uint32_t length);

uint32_t sumArray(uint32_t* arr, uint32_t length);

uint32_t dotProduct(uint32_t* arr1, uint32_t* arr2, uint32_t lengthOfBoth);

int main() {
  uint32_t answerTo1 = sumOneTo(432);
  cout << "Answer to 1: " << answerTo1 << " expected: " << 432 * 431 / 2
       << endl;

  uint32_t answerTo2 = factorial(5);
  cout << "Answer to 2: " << answerTo2 << " expected: 120" << endl;

  uint32_t answerTo3 = slowFactorial(5);
  cout << "Answer to 3: " << answerTo3 << "expected 120" << endl;

  printCheckerboard(13);

  printKite(15);

  uint32_t answerTo6 = countPrimesLessThan(30);
  cout << "Answer to 6: " << answerTo6
       << " expected 2 3 5 7 11 13 17 19 23 29 = 10?" << endl;

  uint32_t lenX = 10;
  uint32_t* x = new int[lenX];
  uint32_t* y = new int[lenX];
  uint32_t sum = 0;  // for answer checking use ONLY
  uint32_t dot = 0;  // for answer checking use ONLY
  for (uint32_t i = 0; i < lenX; i++) {
    x[i] = i + 1;
    sum += x[i];
    y[i] = i;
    dot += x[i] * y[i];
  }
  printArray(x);

  uint32_t sumComputed = sumArray(x, lenX);
  cout << "Answer to 8: " << sumComputed << " expected " << sum << endl;

  uint32_t answerTo9 = dotProduct(x, y);
  cout << "Answer to 9: " << answerTo9 << " expected: " << dot << endl;
}