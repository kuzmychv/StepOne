/// @brief 
/// @param ledc 

#include<led_color.h>
#include <stm32f205xx.h>



void Set_Led_Color(led_c ledc, uint8_t bb)
  {
    // uint8_t *LedR, *LedG, *LedB;
    switch(ledc){
      case black:
        TIM3 -> CCR1 = 0; //G
        TIM3 -> CCR2 = 0; //R
        TIM3 -> CCR4 = 0; //B
        break;
      case white:
        TIM3 -> CCR1 = bb;
        TIM3 -> CCR2 = bb;
        TIM3 -> CCR4 = bb;
        break;
      case red: 
        TIM3 -> CCR1 = 0;
        TIM3 -> CCR2 = bb;
        TIM3 -> CCR4 = 0;
        break;
      case green: 
        TIM3 -> CCR1 = bb;
        TIM3 -> CCR2 = 0;
        TIM3 -> CCR4 = 0;
        break;
      case blue:
        TIM3 -> CCR1 = 0;
        TIM3 -> CCR2 = 0;
        TIM3 -> CCR4 = bb;
        break;
      case yellow:
        TIM3 -> CCR1 = bb;
        TIM3 -> CCR2 = bb;
        TIM3 -> CCR4 = 0;
        break;
      case aqua:
        TIM3 -> CCR1 = bb;
        TIM3 -> CCR2 = 0;
        TIM3 -> CCR4 = bb;
        break;
      case fuchsia:
        TIM3 -> CCR1 = 0;
        TIM3 -> CCR2 = bb;
        TIM3 -> CCR4 = bb;
        break;
    }
  }