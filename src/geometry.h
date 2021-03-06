#include <math.h>
#include "statistical_measure.h"
#include "volume.h"

#define PI 3.141592653589793

double degrees2radians(double degrees)
{
  double result = degrees / 180 * PI;
  return result;
}

double radians2degrees(double radians)
{
  double result = radians / PI * 180;
  return result;
}

double distancePoints(double ax, double ay, double bx, double by)
{
  double result = sqrt(pow((bx - ax), 2) + pow((by - ay), 2));
  return result;
}

double *midpointPoints(double ax, double ay, double bx, double by)
{
  double *result = (double *)malloc(sizeof(double) * 2),
         x[2] = {ax, bx},
         y[2] = {ay, by};
  result[0] = mean(x, 2);
  result[1] = mean(y, 2);
  return result;
}

double slopeOfLine(double x1, double y1, double x2, double y2)
{
  assert(x1 != x2 && y1 != y2);
  double result = (y2 - y1) / (x2 - x1);
  return result;
}

double angleOfInclineLine(double x1, double y1, double x2, double y2)
{
  double result = atan(slopeOfLine(x1, y1, x2, y2));
  return result;
}

double *equationOfLine(double x1, double y1, double x2, double y2)
{
  double *result = (double *)malloc(sizeof(double) * 2);
  result[0] = slopeOfLine(x1, y1, x2, y2);
  result[1] = y1 - result[0] * x1;
  return result;
}

double distancePointLine(double inclinationLine, double c, double x0, double y0)
{
  double result = absf(inclinationLine * x0 - y0 + c) /
                  hypotenusePythagorean(inclinationLine, -1);
  return result;
}

double circlePerimeter(double radius)
{
  double result = 2 * PI * radius;
  return result;
}

double regularPolygonSumInteAngles(double nOfSides)
{
  double result = (nOfSides - 2) * PI;
  return result;
}

double regularPolygonInteriorAngle(int nOfSides)
{
  double result = regularPolygonSumInteAngles(nOfSides) / nOfSides;
  return result;
}

double regularPolygonExteriorAngle(int nOfSides)
{
  double result = 2 * PI / nOfSides;
  return result;
}

int nOfDiagnonalsPolygon(int nOfSides)
{
  double result = nOfSides * (nOfSides - 3) / 2;
  return result;
}
