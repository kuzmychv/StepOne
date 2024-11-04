#include <stdint.h>

typedef enum Wheel_e {
	frontleft = 0,
	frontright = 1,
	backleft = 2,
	backright = 3
} Wheel_t;

typedef enum Direction_m {
	forward_m, 
	back_m, 
	left_m,
	right_m
} Direction_t;

void Set_Direction(Direction_t s_direction);

void Set_motor_Speed(uint32_t MotorSpeed);

void Motor_Init();

void Motor_Deinit();