/******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_registers.h
 *
 * Description: Header file for TM4C123GH6PM Microcontroller - PORT Driver Registers
 *
 * Author: Omar Ahmed Hassan
 ******************************************************************************/
#ifndef PORT_REG_H_
#define PORT_REG_H_


#include "Std_Types.h"

/*******************************************************************************
 *                              Module Definitions                             *
 *******************************************************************************/

/* RCCG2 Register to enable clocks for all ports */
#define SYSCTL_REGCGC2_REG              (*((volatile uint32 *)0x400FE108))

/* Magic Number for the Lock Register */
#define LOCK_MAGIC_NUMBER           (uint32)0x4C4F434B;

/* GPIO Registers base addresses */
#define GPIO_PORTA_BASE_ADDRESS           0x40004000
#define GPIO_PORTB_BASE_ADDRESS           0x40005000
#define GPIO_PORTC_BASE_ADDRESS           0x40006000
#define GPIO_PORTD_BASE_ADDRESS           0x40007000
#define GPIO_PORTE_BASE_ADDRESS           0x40024000
#define GPIO_PORTF_BASE_ADDRESS           0x40025000

/* GPIO Registers offset addresses */
#define PORT_DATA_REG_OFFSET              0x3FC
#define PORT_DIR_REG_OFFSET               0x400
#define PORT_ALT_FUNC_REG_OFFSET          0x420
#define PORT_PULL_UP_REG_OFFSET           0x510
#define PORT_PULL_DOWN_REG_OFFSET         0x514
#define PORT_DIGITAL_ENABLE_REG_OFFSET    0x51C
#define PORT_LOCK_REG_OFFSET              0x520
#define PORT_COMMIT_REG_OFFSET            0x524
#define PORT_ANALOG_MODE_SEL_REG_OFFSET   0x528
#define PORT_CTL_REG_OFFSET               0x52C

#endif /* PORT_REG_H_ */
