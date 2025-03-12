/*
 * ex9.c
 *
 *  Created on: Sep 29, 2024
 *      Author: ASUS
 */


const int MAX_LED_MATRIX = 8;
 int index_led_matrix = 0;

 uint8_t matrix_buffer[8] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08};

 void clearColumn() {
     HAL_GPIO_WritePin(GPIOA, ENM0_Pin | ENM1_Pin | ENM2_Pin | ENM3_Pin | ENM4_Pin | ENM5_Pin | ENM6_Pin | ENM7_Pin, GPIO_PIN_RESET);
 }

 void setRow(int index){
	    HAL_GPIO_WritePin(GPIOB, ROW0_Pin, (matrix_buffer[index] >> 0) & 0x01);
	    HAL_GPIO_WritePin(GPIOB, ROW1_Pin, (matrix_buffer[index] >> 1) & 0x01);
	    HAL_GPIO_WritePin(GPIOB, ROW2_Pin, (matrix_buffer[index] >> 2) & 0x01);
	    HAL_GPIO_WritePin(GPIOB, ROW3_Pin, (matrix_buffer[index] >> 3) & 0x01);
	    HAL_GPIO_WritePin(GPIOB, ROW4_Pin, (matrix_buffer[index] >> 4) & 0x01);
	    HAL_GPIO_WritePin(GPIOB, ROW5_Pin, (matrix_buffer[index] >> 5) & 0x01);
	    HAL_GPIO_WritePin(GPIOB, ROW6_Pin, (matrix_buffer[index] >> 6) & 0x01);
	    HAL_GPIO_WritePin(GPIOB, ROW7_Pin, (matrix_buffer[index] >> 7) & 0x01);
 }


 void updateLEDMatrix(int index){
	 switch(index){
	 	 case 0:
	 		 clearColumn();
	 		 HAL_GPIO_WritePin(GPIOA, ENM0_Pin, GPIO_PIN_SET);
	 		 setRow(index);
	 		 break;
	 	 case 1:
	 		 clearColumn();
	 		 HAL_GPIO_WritePin(GPIOA, ENM1_Pin, GPIO_PIN_SET);
	 		 setRow(index);
	 		 break;
	 	 case 2:
	 		 clearColumn();
	 		 HAL_GPIO_WritePin(GPIOA, ENM2_Pin, GPIO_PIN_SET);
	 		 setRow(index);
	 		 break;
	 	 case 3:
	 		 clearColumn();
	 		 HAL_GPIO_WritePin(GPIOA, ENM3_Pin, GPIO_PIN_SET);
	 		 setRow(index);
	 		 break;
	 	 case 4:
	 		 clearColumn();
	 		 HAL_GPIO_WritePin(GPIOA, ENM4_Pin, GPIO_PIN_SET);
	 		 setRow(index);
	 		 break;
	 	 case 5:
	 		 clearColumn();
	 		 HAL_GPIO_WritePin(GPIOA, ENM5_Pin, GPIO_PIN_SET);
	 		 setRow(index);
	 		 break;
	 	 case 6:
	 		 clearColumn();
	 		 HAL_GPIO_WritePin(GPIOA, ENM6_Pin, GPIO_PIN_SET);
	 		 setRow(index);
	 		 break;
	 	 case 7:
	 		 clearColumn();
	 		 HAL_GPIO_WritePin(GPIOA, ENM7_Pin, GPIO_PIN_SET);
	 		 setRow(index);
	 		 break;
	 	 default:
	 		 break;
	 }
 }
