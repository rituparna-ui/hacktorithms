#include <stdio.h>
#include <stdlib.h>

// Finds the minimum time for given chef details

int minimumTime(int n, char * b, int * a) {

  int res = 0;

  // declare minimum time variable for Chef 'C' and Chef 'AB'

  int cmin = 1000, abmin = 1000, i = 0, j = 0;

  // iterate through the chef time array

  for (i = 0; i < n - 1; i++) {

    char chef1 = b[i];

    int c1time = a[i];

    for (j = i + 1; j < n; j++) { // iterate the remaining from first element

      char chef2 = b[j];

      int c2time = a[j];

      // compare only if chef 1 and chef 2 are 'A' and 'B'

      if ((chef1 == 'A' && chef2 == 'B') ||

        (chef1 == 'B' && chef2 == 'A')) {

        if (c1time + c2time < abmin) { // if its minimum

          abmin = c1time + c2time; // assign as minimum

        }

      }

    }

    if (chef1 == 'C') { // check for chef 'C'

      if (c1time < cmin) { // if its minimum

        cmin = c1time; // assign as minimum

      }

    }

  }

  if (cmin < abmin) // check minimum among 'AB' and 'C' chefs

    res = cmin;

  else

    res = abmin;

  return res;

}

// driver code

int main() {

  int n, i;

  int * a;

  char * b;

  char * str;

  scanf("%d\n", & n);

  a = (int * ) malloc(sizeof(int) * n);

  b = (char * ) malloc(sizeof(char) * n);

  str = (char * ) malloc(sizeof(char) * 10);

  for (i = 0; i < n; i++) {

    fgets(str, sizeof(str), stdin);

    sscanf(str, "%c %d", & b[i], & a[i]);

  }

  printf("%d", minimumTime(n, b, a));

  return 0;
