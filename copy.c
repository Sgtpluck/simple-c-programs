#include <stdio.h>

/* copy input to output, first version */
// main()
// {
//   int c;

//   c = getchar();
//   while (c != EOF) {
//     putchar(c);
//     c = getchar();
//   }
// }

/* copy input to output second version */
int main()
{
  int c;

  while ((c=getchar()) != EOF){
    putchar(c);
  }
    printf("%d\n", EOF);
    return 0;

  // printf("%d\n", getchar() != EOF );

}
