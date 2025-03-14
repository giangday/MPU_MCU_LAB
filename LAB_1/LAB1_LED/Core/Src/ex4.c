/*
 * ex4.c
 *
 *  Created on: Sep 8, 2024
 *      Author: ASUS
 */
#include "ex4.h"

void display7SEG(int num){

	switch(num){
		case 0:
			HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_SET);
			break;
		case 1:
			HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_SET);
			break;
		case 2:
			HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_SET);
			break;
		case 8:
			HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_RESET);
			break;
	}
}

void display7SEG1(int num){

	switch(num){
		case 0:
			HAL_GPIO_WritePin(LED_A1_GPIO_Port, LED_A1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G1_Pin, GPIO_PIN_SET);
			break;
		case 1:
			HAL_GPIO_WritePin(LED_A1_GPIO_Port, LED_A1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_B1_GPIO_Port, LED_B1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_C1_GPIO_Port, LED_C1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_D1_GPIO_Port, LED_D1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_E1_GPIO_Port, LED_E1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_F1_GPIO_Port, LED_F1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_G1_GPIO_Port, LED_G1_Pin, GPIO_PIN_SET);
			break;
		case 2:
			HAL_GPIO_WritePin(LED_A1_GPIO_Port, LED_A1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_B1_GPIO_Port, LED_B1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_C1_GPIO_Port, LED_C1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_D1_GPIO_Port, LED_D1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_E1_GPIO_Port, LED_E1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_F1_GPIO_Port, LED_F1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_G1_GPIO_Port, LED_G1_Pin, GPIO_PIN_RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(LED_A1_GPIO_Port, LED_A1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_B1_GPIO_Port, LED_B1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_C1_GPIO_Port, LED_C1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_D1_GPIO_Port, LED_D1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_E1_GPIO_Port, LED_E1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_F1_GPIO_Port, LED_F1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_G1_GPIO_Port, LED_G1_Pin, GPIO_PIN_RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(LED_A1_GPIO_Port, LED_A1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_B1_GPIO_Port, LED_B1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_C1_GPIO_Port, LED_C1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_D1_GPIO_Port, LED_D1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_E1_GPIO_Port, LED_E1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_F1_GPIO_Port, LED_F1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_G1_GPIO_Port, LED_G1_Pin, GPIO_PIN_RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(LED_A1_GPIO_Port, LED_A1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_B1_GPIO_Port, LED_B1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_C1_GPIO_Port, LED_C1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_D1_GPIO_Port, LED_D1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_E1_GPIO_Port, LED_E1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_F1_GPIO_Port, LED_F1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_G1_GPIO_Port, LED_G1_Pin, GPIO_PIN_RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(LED_A1_GPIO_Port, LED_A1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_B1_GPIO_Port, LED_B1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_C1_GPIO_Port, LED_C1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_D1_GPIO_Port, LED_D1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_E1_GPIO_Port, LED_E1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_F1_GPIO_Port, LED_F1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_G1_GPIO_Port, LED_G1_Pin, GPIO_PIN_RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(LED_A1_GPIO_Port, LED_A1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_B1_GPIO_Port, LED_B1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_C1_GPIO_Port, LED_C1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_D1_GPIO_Port, LED_D1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_E1_GPIO_Port, LED_E1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_F1_GPIO_Port, LED_F1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_G1_GPIO_Port, LED_G1_Pin, GPIO_PIN_SET);
			break;
		case 8:
			HAL_GPIO_WritePin(LED_A1_GPIO_Port, LED_A1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_B1_GPIO_Port, LED_B1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_C1_GPIO_Port, LED_C1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_D1_GPIO_Port, LED_D1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_E1_GPIO_Port, LED_E1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_F1_GPIO_Port, LED_F1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_G1_GPIO_Port, LED_G1_Pin, GPIO_PIN_RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(LED_A1_GPIO_Port, LED_A1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_B1_GPIO_Port, LED_B1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_C1_GPIO_Port, LED_C1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_D1_GPIO_Port, LED_D1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_E1_GPIO_Port, LED_E1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_F1_GPIO_Port, LED_F1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_G1_GPIO_Port, LED_G1_Pin, GPIO_PIN_RESET);
			break;
	}
}

