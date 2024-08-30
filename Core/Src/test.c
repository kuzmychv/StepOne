

void Do_Command(uint8_t data_buffer[]){
    char *error_command = "command not found\r\n";
    char *color_log = "color found\r\n";
      if (strcmp((const char*)command_black, (const char*)data_buffer) == 0){

            //Print_To_Cli();

            HAL_UART_Transmit(&huart1,(uint8_t*)color_log,strlen(color_log),TX_DELAY); //transmit the full sentence again
		memset(color_log, 0, strlen(color_log)); // enpty the data buffer
            command_flag = 0;

            LedColor = black;
            Set_Led_Color(LedColor);
            
      } else if(strcmp((const char*)command_white, (const char*)data_buffer) == 0){

            //Print_To_Cli();

            HAL_UART_Transmit(&huart1,(uint8_t*)color_log,strlen(color_log),TX_DELAY); //transmit the full sentence again
		memset(color_log, 0, strlen(color_log)); // enpty the data buffer
            command_flag = 0;

            LedColor = white;
            Set_Led_Color(LedColor);

      } else if(strcmp((const char*)command_red, (const char*)data_buffer) == 0){

            //Print_To_Cli();

            HAL_UART_Transmit(&huart1,(uint8_t*)color_log,strlen(color_log),TX_DELAY); //transmit the full sentence again
		memset(color_log, 0, strlen(color_log)); // enpty the data buffer
            command_flag = 0;

            LedColor = red;
            Set_Led_Color(LedColor);

      } else if(strcmp((const char*)command_green, (const char*)data_buffer) == 0){

            //Print_To_Cli();

            HAL_UART_Transmit(&huart1,(uint8_t*)color_log,strlen(color_log),TX_DELAY); //transmit the full sentence again
		memset(color_log, 0, strlen(color_log)); // enpty the data buffer
            command_flag = 0;

            LedColor = green;
            Set_Led_Color(LedColor);

      } else if(strcmp((const char*)command_blue, (const char*)data_buffer) == 0){

            //Print_To_Cli();

            HAL_UART_Transmit(&huart1,(uint8_t*)color_log,strlen(color_log),TX_DELAY); //transmit the full sentence again
		memset(color_log, 0, strlen(color_log)); // enpty the data buffer
            command_flag = 0;

            LedColor = blue;
            Set_Led_Color(LedColor);

      } else if(strcmp((const char*)command_yellow, (const char*)data_buffer) == 0){

            //Print_To_Cli();

            HAL_UART_Transmit(&huart1,(uint8_t*)color_log,strlen(color_log),TX_DELAY); //transmit the full sentence again
		memset(color_log, 0, strlen(color_log)); // enpty the data buffer
            command_flag = 0;

            LedColor = yellow;
            Set_Led_Color(LedColor);

      } else if(strcmp((const char*)command_aqua, (const char*)data_buffer) == 0){

            //Print_To_Cli();

            HAL_UART_Transmit(&huart1,(uint8_t*)color_log,strlen(color_log),TX_DELAY); //transmit the full sentence again
		memset(color_log, 0, strlen(color_log)); // enpty the data buffer
            command_flag = 0;

            LedColor = aqua;
            Set_Led_Color(LedColor);

      } else if(strcmp((const char*)command_fuchsia, (const char*)data_buffer) == 0){

            //Print_To_Cli();

            HAL_UART_Transmit(&huart1,(uint8_t*)color_log,strlen(color_log),TX_DELAY); //transmit the full sentence again
		memset(color_log, 0, strlen(color_log)); // enpty the data buffer
            command_flag = 0;

            LedColor = fuchsia;
            Set_Led_Color(LedColor);

      } else {
            
            //Print_To_Cli();

            HAL_UART_Transmit(&huart1,(uint8_t*)error_command,strlen(error_command),TX_DELAY); //transmit the full sentence again
		memset(error_command, 0, strlen(error_command)); // enpty the data buffer
            command_flag = 0;

      }
}



//void Print_To_Cli(uint8_t cli_buffer[], uint8_t cli_buffer_lenght){
//  data_buffer[count++]='\r';
//  data_buffer[count++]='\n';
//  HAL_UART_Transmit(&huart1,data_buffer,count,TX_DELAY); //transmit the full sentence again
//	memset(data_buffer, 0, count); // enpty the data buffer
//  count = 0;
//}