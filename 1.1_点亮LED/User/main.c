//1.1——点亮LED

#include "debug.h"

int main(void) {

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE); //使能GPIOA时钟

    GPIO_InitTypeDef GPIO_A_LED;                       //定义一个GPIO结构体

    GPIO_A_LED.GPIO_Mode = GPIO_Mode_Out_PP;           //GPIO模式
    GPIO_A_LED.GPIO_Pin = GPIO_Pin_0;                  //GPIO引脚
    GPIO_A_LED.GPIO_Speed = GPIO_Speed_50MHz;          //GPIO速度

    GPIO_Init(GPIOA, &GPIO_A_LED);                     //初始化GPIO
    Delay_Init();                                      //初始化延时

    //GPIO_WriteBit(GPIOA, GPIO_Pin_0, Bit_SET);         //GPIO写1，即输出高电平
    //Delay_Ms(500);                                     //延时500ms
    GPIO_WriteBit(GPIOA, GPIO_Pin_0, Bit_RESET);       //GPIO写0，即输出低电平
    Delay_Ms(500);
    while(1)
    {
    }
}
