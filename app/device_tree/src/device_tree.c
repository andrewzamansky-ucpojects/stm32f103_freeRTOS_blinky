#include "_project.h"

#include "dev_management_api.h"
#include "dt_clocks_stm32f10x.c"


/***********************************/
/********** soc_clock_control_dev ********/
#define DT_DEV_NAME                        soc_clock_control_dev
#define DT_DEV_MODULE                      clock_control_stm32f10x

#define CLOCK_CONTROL_STM32f10X_HIRC_RATE           8000000
//#define CLOCK_CONTROL_STM32f10X_XTAL_RATE           8000000
#define CLOCK_CONTROL_STM32f10X_DT_SYSCLK_SRC_CLK_DEV    stm32f10x_hsirc_clk_dev//stm32f10x_xtal_clk_dev
//#define CLOCK_CONTROL_STM32f10X_DT_PLL_SRC_CLK_DEV     stm32f10x_hsirc_clk_dev//stm32f10x_xtal_clk_dev
//#define CLOCK_CONTROL_STM32f10X_DT_PLL_RATE        72000000
#define CLOCK_CONTROL_STM32f10X_DT_HCLK_RATE       8000000//72000000
#define CLOCK_CONTROL_STM32f10X_APB2_RATE          8000000

#include ADD_CURRENT_DEV




/***********************************/
/********** systick_dev ********/
#define DT_DEV_NAME                        systick_dev
#define DT_DEV_MODULE                      cortexM_systick

#define CORTEXM_SYSTICK_DT_CLOCK_PDEV      stm32f10x_systick_clk_dev
#define CORTEXM_SYSTICK_DT_INITIAL_RATE    OS_TICK_IN_MICRO_SEC
#define CORTEXM_SYSTICK_DT_MODE            TIMER_API_PERIODIC_MODE

#include ADD_CURRENT_DEV




/***********************************/
/********** semihosting_dev ********/
#define DT_DEV_NAME                      semihosting_dev
#define DT_DEV_MODULE                    semihosting

#include ADD_CURRENT_DEV



/***********************************/
/********** heartbeat_gpio_dev ********/
#define DT_DEV_NAME                      heartbeat_gpio_dev
#define DT_DEV_MODULE                    gpio_stm32f10x

#define GPIO_STM32F10X_DT_PORT         GPIO_STM32F10X_API_PORT_B
#define GPIO_STM32F10X_DT_PINS              {10}
#define GPIO_STM32F10X_DT_PINS_IDLE_STATE   {0}
#define GPIO_STM32F10X_DT_MODE         GPIO_STM32F10X_API_MODE_OUT_PP

#include ADD_CURRENT_DEV
