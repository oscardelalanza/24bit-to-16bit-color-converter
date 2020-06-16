#include <stdio.h>

unsigned int colorConvert(unsigned int color24bits);

int main() {
  unsigned int color = 1;

  while (color != 0) {
    printf("Hex value: ");
    scanf("%x", &color);
    printf("%x\n", colorConvert(color));
  }

  return 0;
}

unsigned int colorConvert(unsigned int color24bits) {
  unsigned int color16bits, red, green, blue;

  red = color24bits >> 19u;
  green = color24bits << 16u >> 26u;
  blue = color24bits << 24u >> 27u;

  color16bits = red << 11u | green << 5u | blue;

  return color16bits;
}