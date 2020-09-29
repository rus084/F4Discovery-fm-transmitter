/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
volatile uint32_t Tone_enabled = 0;

void tone(int a,int freq,int d)
{
  uint32_t systick = 45000000 / freq;
  uint32_t len = d * freq / 500;
  SysTick->LOAD = systick;
  Tone_enabled = len;
  while (Tone_enabled);
  SysTick->LOAD = 45000;
}

#define delay HAL_Delay

void mario()
{
  tone(9,1318,150);
  delay(150);
  tone(9,1318,300);
  delay(300);
  tone(9,1318,150);
  delay(300);
  tone(9,1046,150);
  delay(150);
  tone(9,1318,300);
  delay(300);
  tone(9,1568,600);
  delay(600);
  tone(9,784,600);
  delay(600);
  tone(9,1046,450) ; // 2? ????
  delay(450);
  tone(9,784,150);
  delay(450);
  tone(9,659,300);
  delay(450);
  tone(9,880,300);
  delay(300);
  tone(9,987,150);
  delay(300);
  tone(9,932,150);
  delay(150);
  tone(9,880,300);
  delay(300);
  tone(9,784,210); // 3? ????
  delay(210);
  tone(9,1318,210);
  delay(210);
  tone(9,1568,150);
  delay(150);
  tone(9,1750,300);
  delay(300);
  tone(9,1396,150);
  delay(150);
  tone(9,1568,150);
  delay(300);
  tone(9,1318,300);
  delay(300);
  tone(9,1046,150);
  delay(150);
  tone(9,1174,150);
  delay(150);
  tone(9,987,450);
  delay(450);
  tone(9,1046,450); // 4? ????
  delay(450);
  tone(9,784,150);
  delay(450);
  tone(9,659,300);
  delay(450);
  tone(9,880,300);
  delay(300);
  tone(9,987,150);
  delay(300);
  tone(9,932,150);
  delay(150);
  tone(9,880,300);
  delay(300);
  tone(9,784,210); // 5? ????
  delay(210);
  tone(9,1318,210);
  delay(210);
  tone(9,1568,150);
  delay(150);
  tone(9,1750,300);
  delay(300);
  tone(9,1396,150);
  delay(150);
  tone(9,1568,150);
  delay(300);
  tone(9,1318,300);
  delay(300);
  tone(9,1046,150);
  delay(150);
  tone(9,1174,150);
  delay(150);
  tone(9,987,450);
  delay(600);
  tone(9,1568,150); // 6?? ????? ????
  delay(150);
  tone(9,1480,150);
  delay(150);
  tone(9,1396,150);
  delay(150);
  tone(9,1244,300);
  delay(300);
  tone(9,1318,150);
  delay(300);
  tone(9,830,150);
  delay(150);
  tone(9,880,150);
  delay(150);
  tone(9,1046,150);
  delay(300);
  tone(9,880,150);
  delay(150);
  tone(9,1046,150);
  delay(150);
  tone(9,1174,150);
  delay(150);
  delay(300); // 7??
  tone(9,1568,150);
  delay(150);
  tone(9,1480,150);
  delay(150);
  tone(9,1396,150);
  delay(150);
  tone(9,1244,300);
  delay(300);
  tone(9,1318,150);
  delay(300);
  tone(9,2093,300);
  delay(300);
  tone(9,2093,150);
  delay(150); 
  tone(9,2093,600);
  delay(600);
  tone(9,1568,150); // 6?? ????? ???? ??????
  delay(150);
  tone(9,1480,150);
  delay(150);
  tone(9,1396,150);
  delay(150);
  tone(9,1244,300);
  delay(300);
  tone(9,1318,150);
  delay(300);
  tone(9,830,150);
  delay(150);
  tone(9,880,150);
  delay(150);
  tone(9,1046,150);
  delay(300);
  tone(9,880,150);
  delay(150);
  tone(9,1046,150);
  delay(150);
  tone(9,1174,150);
  delay(450);
  tone(9,1244,300);
  delay(450);
  tone(9,1174,450);
  delay(450);
  tone(9,1046,600);
  delay(1200 );
  tone(9,1568,150); // 6?? ????? ????
  delay(150);
  tone(9,1480,150);
  delay(150);
  tone(9,1396,150);
  delay(150);
  tone(9,1244,300);
  delay(300);
  tone(9,1318,150);
  delay(300);
  tone(9,830,150);
  delay(150);
  tone(9,880,150);
  delay(150);
  tone(9,1046,150);
  delay(300);
  tone(9,880,150);
  delay(150);
  tone(9,1046,150);
  delay(150);
  tone(9,1174,150);
  delay(150);
  delay(300); // 7??
  tone(9,1568,150);
  delay(150);
  tone(9,1480,150);
  delay(150);
  tone(9,1396,150);
  delay(150);
  tone(9,1244,300);
  delay(300);
  tone(9,1318,150);
  delay(300);
  tone(9,2093,300);
  delay(300);
  tone(9,2093,150);
  delay(150);
  tone(9,2093,600);
  delay(600);
  tone(9,1568,150); // 6?? ????? ???? ??????
  delay(150);
  tone(9,1480,150);
  delay(150);
  tone(9,1396,150);
  delay(150);
  tone(9,1244,300);
  delay(300);
  tone(9,1318,150);
  delay(300);
  tone(9,830,150);
  delay(150);
  tone(9,880,150);
  delay(150);
  tone(9,1046,150);
  delay(300);
  tone(9,880,150);
  delay(150);
  tone(9,1046,150);
  delay(150);
  tone(9,1174,150);
  delay(450);
  tone(9,1244,300);
  delay(450);
  tone(9,1174,450);
  delay(450);
  tone(9,1046,600);
  delay(1200);
  tone(9,1046,150); // 8?? ????
  delay(150);
  tone(9,1046,300);
  delay(300);
  tone(9,1046,150);
  delay(300);
  tone(9,1046,150);
  delay(150);
  tone(9,1174,300);
  delay(300);
  tone(9,1318,150);
  delay(150);
  tone(9,1046,300);
  delay(300);
  tone(9,880,150);
  delay(150);
  tone(9,784,600);
  delay(600);
  tone(9,1046,150);
  delay(150);
  tone(9,1046,300);
  delay(300);
  tone(9,1046,150);
  delay(300);
  tone(9,1046,150);
  delay(150);
  tone(9,1174,300);
  delay(300);
  tone(9,1318,150);
  delay(150);
  delay(1200);
  tone(9,1046,150); // 8?? ????
  delay(150);
  tone(9,1046,300);
  delay(300);
  tone(9,1046,150);
  delay(300);
  tone(9,1046,150);
  delay(150);
  tone(9,1174,300);
  delay(300);
  tone(9,1318,150);
  delay(150);
  tone(9,1046,300);
  delay(300);
  tone(9,880,150);
  delay(150);
  tone(9,784,600);
  delay(600);
  tone(9,1046,150);
  delay(150);
  tone(9,1046,300);
  delay(300);
  tone(9,1046,150);
  delay(300);
  tone(9,1046,150);
  delay(150);
  tone(9,1174,300);
  delay(300);
  tone(9,1318,150);
  delay(150);
  delay(1200);
  tone(9,1046,450) ; // 2? ????
  delay(450);
  tone(9,784,150);
  delay(450);
  tone(9,659,300);
  delay(450);
  tone(9,880,300);
  delay(300);
  tone(9,987,150);
  delay(300);
  tone(9,932,150);
  delay(150);
  tone(9,880,300);
  delay(300);
  tone(9,784,210); // 3? ????
  delay(210);
  tone(9,1318,210);
  delay(210);
  tone(9,1568,150);
  delay(150);
  tone(9,1750,300);
  delay(300);
  tone(9,1396,150);
  delay(150);
  tone(9,1568,150);
  delay(300);
  tone(9,1318,300);
  delay(300);
  tone(9,1046,150);
  delay(150);
  tone(9,1174,150);
  delay(150);
  tone(9,987,450);
  delay(450);
  tone(9,1046,450); // 4? ????
  delay(450);
  tone(9,784,150);
  delay(450);
  tone(9,659,300);
  delay(450);
  tone(9,880,300);
  delay(300);
  tone(9,987,150);
  delay(300);
  tone(9,932,150);
  delay(150);
  tone(9,880,300);
  delay(300);
  tone(9,784,210); // 5? ????
  delay(210);
  tone(9,1318,210);
  delay(210);
  tone(9,1568,150);
  delay(150);
  tone(9,1750,300);
  delay(300);
  tone(9,1396,150);
  delay(150);
  tone(9,1568,150);
  delay(300);
  tone(9,1318,300);
  delay(300);
  tone(9,1046,150);
  delay(150);
  tone(9,1174,150);
  delay(150);
  tone(9,987,450);
  delay(600);
  tone(9,1568,150); // 6?? ????? ????
  delay(150);
  tone(9,1480,150);
  delay(150);
  tone(9,1396,150);
  delay(150);
  tone(9,1244,300);
  delay(300);
  tone(9,1318,150);
  delay(300);
  tone(9,830,150);
  delay(150);
  tone(9,880,150);
  delay(150);
  tone(9,1046,150);
  delay(300);
  tone(9,880,150);
  delay(150);
  tone(9,1046,150);
  delay(150);
  tone(9,1174,150);
  delay(150);
  delay(300); // 7??
  tone(9,1568,150);
  delay(150);
  tone(9,1480,150);
  delay(150);
  tone(9,1396,150);
  delay(150);
  tone(9,1244,300);
  delay(300);
  tone(9,1318,150);
  delay(300);
  tone(9,2093,300);
  delay(300);
  tone(9,2093,150);
  delay(150);
  tone(9,2093,600);
  delay(600);
  tone(9,1568,150); // 6?? ????? ???? ??????
  delay(150);
  tone(9,1480,150);
  delay(150);
  tone(9,1396,150);
  delay(150);
  tone(9,1244,300);
  delay(300);
  tone(9,1318,150);
  delay(300);
  tone(9,830,150);
  delay(150);
  tone(9,880,150);
  delay(150);
  tone(9,1046,150);
  delay(300);
  tone(9,880,150);
  delay(150);
  tone(9,1046,150);
  delay(150);
  tone(9,1174,150);
  delay(450);
  tone(9,1244,300);
  delay(450);
  tone(9,1174,450);
  delay(450);
  tone(9,1046,600);
  delay(1200 );
  tone(9,1568,150); // 6?? ????? ????
  delay(150);
  tone(9,1480,150);
  delay(150);
  tone(9,1396,150);
  delay(150);
  tone(9,1244,300);
  delay(300);
  tone(9,1318,150);
  delay(300);
  tone(9,830,150);
  delay(150);
  tone(9,880,150);
  delay(150);
  tone(9,1046,150);
  delay(300);
  tone(9,880,150);
  delay(150);
  tone(9,1046,150);
  delay(150);
  tone(9,1174,150);
  delay(150);
  delay(300); // 7??
  tone(9,1568,150);
  delay(150);
  tone(9,1480,150);
  delay(150);
  tone(9,1396,150);
  delay(150);
  tone(9,1244,300);
  delay(300);
  tone(9,1318,150);
  delay(300);
  tone(9,2093,300);
  delay(300);
  tone(9,2093,150);
  delay(150);
  tone(9,2093,600);
  delay(600);
  tone(9,1568,150); // 6?? ????? ???? ??????
  delay(150);
  tone(9,1480,150);
  delay(150);
  tone(9,1396,150);
  delay(150);
  tone(9,1244,300);
  delay(300);
  tone(9,1318,150);
  delay(300);
  tone(9,830,150);
  delay(150);
  tone(9,880,150);
  delay(150);
  tone(9,1046,150);
  delay(300);
  tone(9,880,150);
  delay(150);
  tone(9,1046,150);
  delay(150);
  tone(9,1174,150);
  delay(450);
  tone(9,1244,300);
  delay(450);
  tone(9,1174,450);
  delay(450);
  tone(9,1046,600);
  delay(1200);
  tone(9,1046,150); // 8?? ????
  delay(150);
  tone(9,1046,300);
  delay(300);
  tone(9,1046,150);
  delay(300);
  tone(9,1046,150);
  delay(150);
  tone(9,1174,300);
  delay(300);
  tone(9,1318,150);
  delay(150);
  tone(9,1046,300);
  delay(300);
  tone(9,880,150);
  delay(150);
  tone(9,784,600);
  delay(600);
  tone(9,1046,150);
  delay(150);
  tone(9,1046,300);
  delay(300);
  tone(9,1046,150);
  delay(300);
  tone(9,1046,150);
  delay(150);
  tone(9,1174,300);
  delay(300);
  tone(9,1318,150);
  delay(150);
  delay(1200);
  tone(9,1046,150); // 8?? ????
  delay(150);
  tone(9,1046,300);
  delay(300);
  tone(9,1046,150);
  delay(300);
  tone(9,1046,150);
  delay(150);
  tone(9,1174,300);
  delay(300);
  tone(9,1318,150);
  delay(150);
  tone(9,1046,300);
  delay(300);
  tone(9,880,150);
  delay(150);
  tone(9,784,600);
  delay(600);
  tone(9,1046,150);
  delay(150);
  tone(9,1046,300);
  delay(300);
  tone(9,1046,150);
  delay(300);
  tone(9,784,150);
  delay(150);
  tone(9,1174,300);
  delay(300);
  tone(9,1046,2400);
  delay(2400);
  delay(1200);
} 


void starwars()
{
tone(5, 392, 350);
delay(350);
tone(5, 392, 350);
delay(350);
tone(5, 392, 350);
delay(350);
tone(5, 311, 250);
delay(250);
tone(5, 466, 100);
delay(100);
tone(5, 392, 350);
delay(350);
tone(5, 311, 250);
delay(250);
tone(5, 466, 100);
delay(100);
tone(5, 392, 700);
delay(700);

tone(5, 587, 350);
delay(350);
tone(5, 587, 350);
delay(350);
tone(5, 587, 350);
delay(350);
tone(5, 622, 250);
delay(250);
tone(5, 466, 100);
delay(100);
tone(5, 369, 350);
delay(350);
tone(5, 311, 250);
delay(250);
tone(5, 466, 100);
delay(100);
tone(5, 392, 700);
delay(700);

tone(5, 784, 350);
delay(350);
tone(5, 392, 250);
delay(250);
tone(5, 392, 100);
delay(100);
tone(5, 784, 350);
delay(350);
tone(5, 739, 250);
delay(250);
tone(5, 698, 100);
delay(100);
tone(5, 659, 100);
delay(100);
tone(5, 622, 100);
delay(100);
tone(5, 659, 450);
delay(450);

tone(5, 415, 150);
delay(150);
tone(5, 554, 350);
delay(350);
tone(5, 523, 250);
delay(250);
tone(5, 493, 100);
delay(100);
tone(5, 466, 100);
delay(100);
tone(5, 440, 100);
delay(100);
tone(5, 466, 450);
delay(450);

tone(5, 311, 150);
delay(150);
tone(5, 369, 350);
delay(350);
tone(5, 311, 250);
delay(250);
tone(5, 466, 100);
delay(100);
tone(5, 392, 750);
delay(750);
delay(5000);

}  
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */
  

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */
  /*
  SysTick->LOAD = 90;
  
  while(1);
  */
  /* USER CODE END 2 */
 
 

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */
    //mario();
    starwars();
    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage 
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);
  /** Initializes the CPU, AHB and APB busses clocks 
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = 16;
  RCC_OscInitStruct.PLL.PLLN = 360;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV4;
  RCC_OscInitStruct.PLL.PLLQ = 4;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB busses clocks 
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
  HAL_RCC_MCOConfig(RCC_MCO1, RCC_MCO1SOURCE_PLLCLK, RCC_MCODIV_1);
  HAL_RCC_MCOConfig(RCC_MCO2, RCC_MCO2SOURCE_PLLCLK, RCC_MCODIV_1);
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin : PC9 */
  GPIO_InitStruct.Pin = GPIO_PIN_9;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF0_MCO;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pin : PA8 */
  GPIO_InitStruct.Pin = GPIO_PIN_8;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF0_MCO;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */

  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{ 
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
