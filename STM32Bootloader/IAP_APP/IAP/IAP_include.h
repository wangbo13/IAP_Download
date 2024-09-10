#ifndef __IAP_INCLUDE_H__
#define __IAP_INCLUDE_H__
#include "stdio.h"
#include "stdarg.h"
#include "usart.h"
/*
* @author  CSK
* @qq      2930480089
* @device：STM32F4xx
* @version V1.2
* @date    2024.8.5
* @note    IAP,Bootloader程序升级引导
******************************************************************************
* 本程序只供学习使用，未经作者许可，不得用于其它任何用途，所有代码仅做参考，禁止商用！禁止商用！禁止商用！禁止二次售卖，如需引用须注明出处，版权所有，商用盗版必究！
* 修改日期:2024/8/13
* 版本：V1.5
* 版权所有，盗版必究。

* 您在使用或者打开以上文件即代表您认同以上条款，如果您不知道您在干什么请关闭此项目所有文件并删除
*/


#define FLASH_APP1_ADDR							0x8030000  													//第一个应用程序起始地址(存放在FLASH)

#define FLASH_BOOTDownload_ADDR			0x8010000

int  STMFLASH_Erase(uint32_t WriteAddr,uint32_t NumToWrite);
void STMFLASH_Write(uint32_t WriteAddr,uint32_t *pBuffer,uint32_t NumToWrite);		//从指定地址开始写入指定长度的数据
void STMFLASH_Read(uint32_t ReadAddr,uint32_t *pBuffer,uint32_t NumToRead);   		//从指定地址开始读出指定长度的数据
void STMFLASH_Copy(uint32_t ReadAddr,uint32_t WriteAddr,uint32_t size);
void IAP_APP_Init(UART_HandleTypeDef *huart);
void IAP_APP_USART_RXBUF(UART_HandleTypeDef *huart);



#endif



