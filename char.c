#include <stdio.h>

/* count characters in input, first version */

// main()
// {
//   int nc;

//   nc=0;
//   while(getchar() != EOF)
//     ++nc;
//   printf("%1d\n", nc);
// }

// to EOF, hit control-d in the command line

int main()
{
  double nc;

  for (nc = 0; getchar() != EOF; ++nc)
    ;
  printf("%.0f\n", nc);
}
