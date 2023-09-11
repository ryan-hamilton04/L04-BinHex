#include "assert.h"
#include <stdio.h>
#include <stdlib.h>

void binHex (char *src, char *dst, size_t max);
void hexBin (char *src, char *dst, size_t max);

void binHex (char src[], char dst[], size_t max)
{
  int j = 0;
  for (int i = 0; i < max - 3; i += 4){
		if (src[i]== '0' && src[i+1] == '0' && src[i + 2] == '0' && src[i + 3] == '0'){
		  dst[j] = '0';
			j++;
			}
		else if (src[i]== '0' && src[i+1] == '0' && src[i + 2] == '0' && src[i + 3] == '1'){
      dst[j] = '1';
      j++;
      }
		else if (src[i]== '0' && src[i+1] == '0' && src[i + 2] == '1' && src[i + 3] == '0'){
      dst[j] = '2';
      j++;
      }
		else if (src[i]== '0' && src[i+1] == '0' && src[i + 2] == '1' && src[i + 3] == '1'){
      dst[j] = '3';
      j++;
      }
		else if (src[i]== '0' && src[i+1] == '1' && src[i + 2] == '0' && src[i + 3] == '0'){
      dst[j] = '4';
      j++;
      }
		else if (src[i]== '0' && src[i+1] == '1' && src[i + 2] == '0' && src[i + 3] == '1'){
      dst[j] = '5';
      j++;
      }
		if (src[i]== '0' && src[i+1] == '1' && src[i + 2] == '1' && src[i + 3] == '0'){
      dst[j] = '6';
      j++;
      }
		else if (src[i]== '0' && src[i+1] == '1' && src[i + 2] == '1' && src[i + 3] == '1'){
      dst[j] = '7';
      j++;
      }
		else if (src[i]== '1' && src[i+1] == '0' && src[i + 2] == '0' && src[i + 3] == '0'){
      dst[j] = '8';
      j++;
      }
		else if (src[i]== '1' && src[i+1] == '0' && src[i + 2] == '0' && src[i + 3] == '1'){
      dst[j] = '9';
      j++;
      }
		else if (src[i]== '1' && src[i+1] == '0' && src[i + 2] == '1' && src[i + 3] == '0'){
      dst[j] = 'a';
      j++;
      }
		else if (src[i]== '1' && src[i+1] == '0' && src[i + 2] == '1' && src[i + 3] == '1'){
      dst[j] = 'b';
      j++;
      }
		else if (src[i]== '1' && src[i+1] == '1' && src[i + 2] == '0' && src[i + 3] == '0'){
      dst[j] = 'c';
      j++;
      }
		else if (src[i]== '1' && src[i+1] == '1' && src[i + 2] == '0' && src[i + 3] == '1'){
      dst[j] = 'd';
      j++;
      }
		else if (src[i]== '1' && src[i+1] == '1' && src[i + 2] == '1' && src[i + 3] == '0'){
      dst[j] = 'e';
      j++;
      }
		else if (src[i]== '1' && src[i+1] == '1' && src[i + 2] == '1' && src[i + 3] == '1'){
      dst[j] = 'f';
      j++;
      }
}
}

void hexBin(char src[], char dst[], size_t max)
{
  int j = 0;
  for (int i = 0; i < max; i ++){
    if (src[i] == '0'){
      dst[j] = '0';
      j++;
      dst[j] = '0';
      j++;
      dst[j] = '0';
      j++;
      dst[j] = '0';
      j++;
    } else if (src[i] == '1'){
      dst[j] = '0';
      j++;
      dst[j] = '0';
      j++;
      dst[j] = '0';
      j++;
      dst[j] = '1';
      j++;
    } else if (src[i] == '2'){
      dst[j] = '0';
      j++;
      dst[j] = '0';
      j++;
      dst[j] = '1';
      j++;
      dst[j] = '0';
      j++;
    } else if (src[i] == '3'){
      dst[j] = '0';
      j++;
      dst[j] = '0';
      j++;
      dst[j] = '1';
      j++;
      dst[j] = '1';
      j++;
    } else if (src[i] == '4'){
      dst[j] = '0';
      j++;
      dst[j] = '1';
      j++;
      dst[j] = '0';
      j++;
      dst[j] = '0';
      j++;
    } else if (src[i] == '5'){
      dst[j] = '0';
      j++;
      dst[j] = '1';
      j++;
      dst[j] = '0';
      j++;
      dst[j] = '1';
      j++;
    } else if (src[i] == '6'){
      dst[j] = '0';
      j++;
      dst[j] = '1';
      j++;
      dst[j] = '1';
      j++;
      dst[j] = '0';
      j++;
    } else if (src[i] == '7'){
      dst[j] = '0';
      j++;
      dst[j] = '1';
      j++;
      dst[j] = '1';
      j++;
      dst[j] = '1';
      j++;
    }else if (src[i] == '8'){
      dst[j] = '1';
      j++;
      dst[j] = '0';
      j++;
      dst[j] = '0';
      j++;
      dst[j] = '0';
      j++;
    } else if (src[i] == '9'){
      dst[j] = '1';
      j++;
      dst[j] = '0';
      j++;
      dst[j] = '0';
      j++;
      dst[j] = '1';
      j++;
    } else if (src[i] == 'a'){
      dst[j] = '1';
      j++;
      dst[j] = '0';
      j++;
      dst[j] = '1';
      j++;
      dst[j] = '0';
      j++;
    } else if (src[i] == 'b'){
      dst[j] = '1';
      j++;
      dst[j] = '0';
      j++;
      dst[j] = '1';
      j++;
      dst[j] = '1';
      j++;
    } else if (src[i] == 'c'){
      dst[j] = '1';
      j++;
      dst[j] = '1';
      j++;
      dst[j] = '0';
      j++;
      dst[j] = '0';
      j++;
    } else if (src[i] == 'd'){
      dst[j] = '1';
      j++;
      dst[j] = '1';
      j++;
      dst[j] = '0';
      j++;
      dst[j] = '1';
      j++;
    } else if (src[i] == 'e'){
      dst[j] = '1';
      j++;
      dst[j] = '1';
      j++;
      dst[j] = '1';
      j++;
      dst[j] = '0';
      j++;
    } else if (src[i] == 'f'){
      dst[j] = '1';
      j++;
      dst[j] = '1';
      j++;
      dst[j] = '1';
      j++;
      dst[j] = '1';
      j++;
    }
  }
}
