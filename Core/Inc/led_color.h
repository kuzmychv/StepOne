#include <stdint.h>

typedef enum LedColor {
    black,
    white,
    red, 
    green, 
    blue,
    yellow,
    aqua,
    fuchsia
  } led_c;

void Set_Led_Color(led_c led_cc, uint8_t bb);
