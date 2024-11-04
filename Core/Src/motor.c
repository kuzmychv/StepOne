#include<motor.h>
#include<main.h>

#define DEFALT_SPEED 800 
#define STOP_SPEED 999

uint32_t MotorSpeed = DEFALT_SPEED;

extern TIM_HandleTypeDef htim3;

void Set_Direction(Direction_t direction){

	Motor_Deinit();

	switch(direction) {
		case forward_m:
				HAL_GPIO_WritePin(GPIOC, GPIO_FL_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(GPIOC, GPIO_FR_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(GPIOC, GPIO_BL_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(GPIOC, GPIO_BR_Pin, GPIO_PIN_SET);
				break;
		case back_m:
				HAL_GPIO_WritePin(GPIOC, GPIO_FL_Pin, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(GPIOC, GPIO_FR_Pin, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(GPIOC, GPIO_BL_Pin, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(GPIOC, GPIO_BR_Pin, GPIO_PIN_RESET);
				break;
		case left_m:
				HAL_GPIO_WritePin(GPIOC, GPIO_FL_Pin, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(GPIOC, GPIO_FR_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(GPIOC, GPIO_BL_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(GPIOC, GPIO_BR_Pin, GPIO_PIN_RESET);
				break;
		case right_m:
				HAL_GPIO_WritePin(GPIOC, GPIO_FL_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(GPIOC, GPIO_FR_Pin, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(GPIOC, GPIO_BL_Pin, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(GPIOC, GPIO_BR_Pin, GPIO_PIN_SET);
				break;
		default:
				break;
	}

	Motor_Init();

}


void Set_motor_Speed(uint32_t MotorSpeed)
  {

    TIM3 -> CCR1 = MotorSpeed; //
    TIM3 -> CCR2 = MotorSpeed; //
    TIM3 -> CCR3 = MotorSpeed; //
    TIM3 -> CCR4 = MotorSpeed; //

  }

void Motor_Init()
  {

    // Set_motor_Speed(DEFALT_SPEED); //

	HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_1);
	HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_2);
	HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_3);
	HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_4);

	HAL_Delay(100);

  }

void Motor_Deinit()
  {

    HAL_TIM_PWM_Stop(&htim3, TIM_CHANNEL_1);
	HAL_TIM_PWM_Stop(&htim3, TIM_CHANNEL_2);
	HAL_TIM_PWM_Stop(&htim3, TIM_CHANNEL_3);
	HAL_TIM_PWM_Stop(&htim3, TIM_CHANNEL_4);

	// Set_motor_Speed(STOP_SPEED);

	HAL_Delay(100);

  }

