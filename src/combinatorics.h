#include <assert.h>
#include "factorial.h"

long long permutation(int num)
{
  assert(num > 0);
  long long result = factorial(num);
  return result;
}

long long cyclePermutation(int num)
{
  assert(num > 0);
  long long result = factorial(num - 1);
  return result;
}

long long arrangement(int total, int selected)
{
  assert(total > 0 && selected >= 0);
  long long result = factorial(total) / factorial(total - selected);
  return result;
}

long long combination(int total, int selected)
{
  assert(total > 0 && selected >= 0 && selected <= total);
  long long result = factorial(total) / (factorial(selected) * factorial(total - selected));
  return result;
}

double permutationlf(int num)
{
  assert(num > 0);
  double result = factorial(num);
  return result;
}

double cyclePermutationlf(int num)
{
  assert(num > 0);
  double result = factorial(num - 1);
  return result;
}

double arrangementlf(int total, int selected)
{
  assert(total > 0 && selected >= 0);
  double result = factorial(total) / factorial(total - selected);
  return result;
}

double combinationlf(int total, int selected)
{
  assert(total > 0 && selected >= 0 && selected <= total);
  double result = factorial(total) / (factorial(selected) * factorial(total - selected));
  return result;
}