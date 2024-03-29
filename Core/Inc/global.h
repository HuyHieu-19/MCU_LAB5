/*
 * global.h
 *
 *  Created on: Dec 7, 2022
 *      Author: Huy Hieu
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "stdint.h"
#include "string.h"
#include "main.h"
#include "software_timer.h"
#include "stdio.h"

#define MAX_BUFFER_SIZE 30

UART_HandleTypeDef huart2;
ADC_HandleTypeDef hadc1;

#define START_COMMAND 0
#define	END_COMMAND 1

#define START_UART	    3
#define TRANSMIT_DATA	4
#define END_UART        5

extern uint8_t command_flag;
extern uint8_t command_data[MAX_BUFFER_SIZE];
extern uint8_t begin[MAX_BUFFER_SIZE];
extern uint8_t finish[MAX_BUFFER_SIZE];

extern int command_status;
extern int uart_status;

extern uint8_t temp;
extern uint8_t buffer[MAX_BUFFER_SIZE];
extern uint8_t index_buffer;
extern uint8_t buffer_flag;
extern uint8_t empty_str[MAX_BUFFER_SIZE];

extern uint32_t ADC_Value;

void str_cpy(uint8_t* str1, uint8_t* str2);

uint8_t compare(uint8_t* str1, uint8_t* str2);

#endif /* INC_GLOBAL_H_ */
