#include "assert.h"
#include <stdio.h>
#include <stdlib.h>

void binHex (char *src, char *dst, size_t max);
void hexBin (char *src, char *dst, size_t max);

void binHex (char src[], char dst[], size_t max)
{
j = 0;
  for (i = 0; i < sizeOf(src) - 4; i+4){
	char fourBit[4] = {src[	i],src[i + 1], src[i + 2], src[i + 3]};
	switch (fourBit){
		case "0000":
			dst[j] = '0';
			j++;
			break;
		case "0000":
                        dst[j] = '0';
                        j++;
                        break;
.
}

void hexBin(char src[], char dst[], size_t max)
{
  // YOUR CODE HERE...
}
