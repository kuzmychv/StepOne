#include <stdio.h>
#include <stdint.h>

#define IN 1 /* всерединi слова */
#define OUT 0 /* зовнi слова */

void Split_Buffer(char c[]);

uint8_t data_buffer[];

uint8_t command_forward[] = "forward";
uint8_t command_back[] = "back";
uint8_t command_left[] = "left";
uint8_t command_right[] = "right";

uint8_t command_stop[] = "stop";
uint8_t command_start[] = "start";
uint8_t command_start[] = "speed";
uint8_t command_start[] = "speedup";
uint8_t command_start[] = "speeddown";

main(){

    printf("Enter command");
    scanf("%c", *data_Buffer[]);


}

void Split_Command(uint8_t data_buffer[];){
    
    uint8_t command[], subcommand[];



}