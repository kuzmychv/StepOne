#include <string.h>

#include<command_line.h>
#include<motor.h>

#define TX_DELAY 1000

uint8_t command_forward[] = "forward";
uint8_t command_back[] = "back";
uint8_t command_left[] = "left";
uint8_t command_right[] = "right";

uint8_t command_stop[] = "stop";
uint8_t command_start[] = "start";

uint8_t command_speedup[] = "speedup";
uint8_t command_speeddown[] = "speeddown";

extern Direction_t Direction_m;
extern uint8_t data_buffer[];
extern uint32_t count;
extern uint8_t command_flag;
extern uint32_t MotorSpeed;

extern UART_HandleTypeDef huart1;

void Print_To_Cli(){
  //data_buffer[count++]='\r';
  //data_buffer[count++]='\n';
  HAL_UART_Transmit(&huart1,data_buffer,count,TX_DELAY); //transmit the full sentence again
  memset(data_buffer, 0, count); // enpty the data buffer
}

void Clear_Buffer(){

  memset(data_buffer, 0, count); // enpty the data buffer
  count = 0;
  
}

void Get_Command(uint8_t data_buffer[]){
    char *error_command = "command not found\r\n";
    char *command_res = "command found\r\n";
      if (strcmp((const char*)command_forward, (const char*)data_buffer) == 0){

            Set_Direction(forward_m);

            Clear_Buffer();

            HAL_UART_Transmit(&huart1,(uint8_t*)command_res,strlen(command_res),TX_DELAY); //transmit the full sentence again
		memset(command_res, 0, strlen(command_res)); // enpty the data buffer
            command_flag = 0;
            
      } else if(strcmp((const char*)command_back, (const char*)data_buffer) == 0){

            Set_Direction(back_m);

            Clear_Buffer();

            HAL_UART_Transmit(&huart1,(uint8_t*)command_res,strlen(command_res),TX_DELAY); //transmit the full sentence again
		memset(command_res, 0, strlen(command_res)); // enpty the data buffer
            command_flag = 0;


      } else if(strcmp((const char*)command_left, (const char*)data_buffer) == 0){

            Set_Direction(left_m);

            Clear_Buffer();

            HAL_UART_Transmit(&huart1,(uint8_t*)command_res,strlen(command_res),TX_DELAY); //transmit the full sentence again
		memset(command_res, 0, strlen(command_res)); // enpty the data buffer
            command_flag = 0;

      } else if(strcmp((const char*)command_right, (const char*)data_buffer) == 0){

            Set_Direction(right_m);

            Clear_Buffer();

            HAL_UART_Transmit(&huart1,(uint8_t*)command_res,strlen(command_res),TX_DELAY); //transmit the full sentence again
		memset(command_res, 0, strlen(command_res)); // enpty the data buffer
            command_flag = 0;

      } else if(strcmp((const char*)command_stop, (const char*)data_buffer) == 0){

            Motor_Deinit();

            Clear_Buffer();

            HAL_UART_Transmit(&huart1,(uint8_t*)command_res,strlen(command_res),TX_DELAY); //transmit the full sentence again
		memset(command_res, 0, strlen(command_res)); // enpty the data buffer
            command_flag = 0;

      } else if(strcmp((const char*)command_start, (const char*)data_buffer) == 0){

            Motor_Init();

            Clear_Buffer();

            HAL_UART_Transmit(&huart1,(uint8_t*)command_res,strlen(command_res),TX_DELAY); //transmit the full sentence again
		memset(command_res, 0, strlen(command_res)); // enpty the data buffer
            command_flag = 0;

      } else if(strcmp((const char*)command_speedup, (const char*)data_buffer) == 0){

            if(MotorSpeed <= 900){
                  MotorSpeed += 50;
                  Set_motor_Speed(MotorSpeed);
            }

            Clear_Buffer();

            HAL_UART_Transmit(&huart1,(uint8_t*)command_res,strlen(command_res),TX_DELAY); //transmit the full sentence again
		memset(command_res, 0, strlen(command_res)); // enpty the data buffer
            command_flag = 0;

      } else if(strcmp((const char*)command_speeddown, (const char*)data_buffer) == 0){

            if(MotorSpeed >= 100){
                  MotorSpeed -= 50;
                  Set_motor_Speed(MotorSpeed);
            }
            
            Clear_Buffer();

            HAL_UART_Transmit(&huart1,(uint8_t*)command_res,strlen(command_res),TX_DELAY); //transmit the full sentence again
		memset(command_res, 0, strlen(command_res)); // enpty the data buffer
            command_flag = 0;

      } else {
            
            Clear_Buffer();

            HAL_UART_Transmit(&huart1,(uint8_t*)error_command,strlen(error_command),TX_DELAY); //transmit the full sentence again
		memset(error_command, 0, strlen(error_command)); // enpty the data buffer
            command_flag = 0;

      }
}

