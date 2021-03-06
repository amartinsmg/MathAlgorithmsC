#include <math.h>
#include "basic_operations.h"

double mean(double *values, int length)
{
  double sum = 0,
         result;
  for (int i = 0; i < length; i++)
    sum += values[i];
  result = sum / length;
  return result;
}

double weightedMean(double **valuesWeightsPairs, int length)
{
  double sum = 0,
         weightSum = 0,
         result;
  for (int i = 0; i < length; i++)
  {
    sum += valuesWeightsPairs[i][0] * valuesWeightsPairs[i][1];
    weightSum += valuesWeightsPairs[i][1];
  }
  result = sum / weightSum;
  return result;
}

double geometricMean(double *values, int length)
{
  double product = 1,
         result;
  for (int i = 0; i < length; i++)
    product *= values[i];
  result = nthRoot(product, length);
  return result;
}

double harmonicMean(double *values, int length)
{
  double sum = 0,
         result;
  for (int i = 0; i < length; i++)
    sum += 1 / values[i];
  result = length / sum;
  return result;
}

double variance(double *values, int length)
{
  double mu = mean(values, length),
         sum = 0,
         result;
  for (int i = 0; i < length; i++)
    sum += pow((values[i] - mu), 2);
  result = sum / length;
  return result;
}

double standardDeviation(double *values, int length)
{
  double result = sqrt(variance(values, length));
  return result;
}

double sampleVariance(double *values, int length)
{
  double mu = mean(values, length),
         sum = 0,
         result;
  for (int i = 0; i < length; i++)
    sum += pow((values[i] - mu), 2);
  result = sum / (length - 1);
  return result;
}

double sampleStandardDeviation(double *values, int length)
{
  double result = sqrt(sampleVariance(values, length));
  return result;
}
