#include <string.h>
#include "stm32f2xx_hal.h"

#include<command_line.h>
#include<led_color.h>

#define TX_DELAY 1000

uint8_t command_colors[] = "colors";
uint8_t command_black[] = "black";
uint8_t command_white[] = "white";
uint8_t command_red[] = "red";
uint8_t command_green[] = "green";
uint8_t command_blue[] = "blue";
uint8_t command_yellow[] = "yellow";
uint8_t command_aqua[] = "aqua";
uint8_t command_fuchsia[] = "fuchsia";

uint8_t command_br0[] = "br0";
uint8_t command_br1[] = "br1";
uint8_t command_br2[] = "br2";
uint8_t command_br3[] = "br3";



extern led_c LedColor;
extern uint8_t data_buffer[];
extern uint32_t count;
extern uint8_t command_flag;
extern uint8_t brightness;

extern UART_HandleTypeDef huart1;

void Get_Command(uint8_t data_buffer[]){
    char *error_command = "command not found\r\n";
    char *color_log = "color found\r\n";
      if (strcmp((const char*)command_black, (const char*)data_buffer) == 0){

            Print_To_Cli();

            HAL_UART_Transmit(&huart1,(uint8_t*)color_log,strlen(color_log),TX_DELAY); //transmit the full sentence again
		memset(color_log, 0, strlen(color_log)); // enpty the data buffer
            command_flag = 0;

            LedColor = black;
            Set_Led_Color(LedColor,brightness);
            
      } else if(strcmp((const char*)command_white, (const char*)data_buffer) == 0){

            Print_To_Cli();

            HAL_UART_Transmit(&huart1,(uint8_t*)color_log,strlen(color_log),TX_DELAY); //transmit the full sentence again
		memset(color_log, 0, strlen(color_log)); // enpty the data buffer
            command_flag = 0;

            LedColor = white;
            Set_Led_Color(LedColor,brightness);

      } else if(strcmp((const char*)command_red, (const char*)data_buffer) == 0){

            Print_To_Cli();

            HAL_UART_Transmit(&huart1,(uint8_t*)color_log,strlen(color_log),TX_DELAY); //transmit the full sentence again
		memset(color_log, 0, strlen(color_log)); // enpty the data buffer
            command_flag = 0;

            LedColor = red;
            Set_Led_Color(LedColor,brightness);

      } else if(strcmp((const char*)command_green, (const char*)data_buffer) == 0){

            Print_To_Cli();

            HAL_UART_Transmit(&huart1,(uint8_t*)color_log,strlen(color_log),TX_DELAY); //transmit the full sentence again
		memset(color_log, 0, strlen(color_log)); // enpty the data buffer
            command_flag = 0;

            LedColor = green;
            Set_Led_Color(LedColor,brightness);

      } else if(strcmp((const char*)command_blue, (const char*)data_buffer) == 0){

            Print_To_Cli();

            HAL_UART_Transmit(&huart1,(uint8_t*)color_log,strlen(color_log),TX_DELAY); //transmit the full sentence again
		memset(color_log, 0, strlen(color_log)); // enpty the data buffer
            command_flag = 0;

            LedColor = blue;
            Set_Led_Color(LedColor,brightness);

      } else if(strcmp((const char*)command_yellow, (const char*)data_buffer) == 0){

            Print_To_Cli();

            HAL_UART_Transmit(&huart1,(uint8_t*)color_log,strlen(color_log),TX_DELAY); //transmit the full sentence again
		memset(color_log, 0, strlen(color_log)); // enpty the data buffer
            command_flag = 0;

            LedColor = yellow;
            Set_Led_Color(LedColor,brightness);

      } else if(strcmp((const char*)command_aqua, (const char*)data_buffer) == 0){

            Print_To_Cli();

            HAL_UART_Transmit(&huart1,(uint8_t*)color_log,strlen(color_log),TX_DELAY); //transmit the full sentence again
		memset(color_log, 0, strlen(color_log)); // enpty the data buffer
            command_flag = 0;

            LedColor = aqua;
            Set_Led_Color(LedColor,brightness);

      } else if(strcmp((const char*)command_fuchsia, (const char*)data_buffer) == 0){

            Print_To_Cli();

            HAL_UART_Transmit(&huart1,(uint8_t*)color_log,strlen(color_log),TX_DELAY); //transmit the full sentence again
		memset(color_log, 0, strlen(color_log)); // enpty the data buffer
            command_flag = 0;

            LedColor = fuchsia;
            Set_Led_Color(LedColor,brightness);

      } else if(strcmp((const char*)command_br0, (const char*)data_buffer) == 0){

            Print_To_Cli();

            HAL_UART_Transmit(&huart1,(uint8_t*)color_log,strlen(color_log),TX_DELAY); //transmit the full sentence again
		memset(color_log, 0, strlen(color_log)); // enpty the data buffer
            command_flag = 0;
            brightness = 16;
            Set_Led_Color(LedColor,brightness);

      } else if(strcmp((const char*)command_br1, (const char*)data_buffer) == 0){

            Print_To_Cli();

            HAL_UART_Transmit(&huart1,(uint8_t*)color_log,strlen(color_log),TX_DELAY); //transmit the full sentence again
		memset(color_log, 0, strlen(color_log)); // enpty the data buffer
            command_flag = 0;
            brightness = 96;
            Set_Led_Color(LedColor,brightness);

      } else if(strcmp((const char*)command_br2, (const char*)data_buffer) == 0){

            Print_To_Cli();

            HAL_UART_Transmit(&huart1,(uint8_t*)color_log,strlen(color_log),TX_DELAY); //transmit the full sentence again
		memset(color_log, 0, strlen(color_log)); // enpty the data buffer
            command_flag = 0;
            brightness = 160;
            Set_Led_Color(LedColor,brightness);

      } else if(strcmp((const char*)command_br3, (const char*)data_buffer) == 0){

            Print_To_Cli();

            HAL_UART_Transmit(&huart1,(uint8_t*)color_log,strlen(color_log),TX_DELAY); //transmit the full sentence again
		memset(color_log, 0, strlen(color_log)); // enpty the data buffer
            command_flag = 0;
            brightness = 255;
            Set_Led_Color(LedColor,brightness);

      } else {
            
            Print_To_Cli();

            HAL_UART_Transmit(&huart1,(uint8_t*)error_command,strlen(error_command),TX_DELAY); //transmit the full sentence again
		memset(error_command, 0, strlen(error_command)); // enpty the data buffer
            command_flag = 0;

      }
}

void Print_To_Cli(){
  //data_buffer[count++]='\r';
  //data_buffer[count++]='\n';
  //HAL_UART_Transmit(&huart1,data_buffer,count,TX_DELAY); //transmit the full sentence again
  memset(data_buffer, 0, count); // enpty the data buffer
  count = 0;
}