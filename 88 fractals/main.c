#include <stdio.h>

typedef struct s_complex
{
  double real;
  double i;
  double tmp_real;

} t_complex;

int main()
{
  t_complex z;
  // point
  t_complex c;
  z.real = 0;
  z.i = 0;
  c.real = 0.25;
  c.i = 0.4;

  for (int i = 0; i < 3; ++i)
  {
    // general formula
    // z= z^2 + c
    z.tmp_real = (z.real * z.real) - (z.i * z.i);
    z.i = 2 * z.real * z.i;
    z.real = z.tmp_real;

    // adding the constant
    z.real += c.real;
    z.i += c.i;
    printf("iteration n-> %d real %f imaginary %f\n", i, z.real, z.i);
  }

  return 0;
}
