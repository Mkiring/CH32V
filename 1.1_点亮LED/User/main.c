//1.1��������LED

#include "debug.h"

int main(void) {

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE); //ʹ��GPIOAʱ��

    GPIO_InitTypeDef GPIO_A_LED;                       //����һ��GPIO�ṹ��

    GPIO_A_LED.GPIO_Mode = GPIO_Mode_Out_PP;           //GPIOģʽ
    GPIO_A_LED.GPIO_Pin = GPIO_Pin_0;                  //GPIO����
    GPIO_A_LED.GPIO_Speed = GPIO_Speed_50MHz;          //GPIO�ٶ�

    GPIO_Init(GPIOA, &GPIO_A_LED);                     //��ʼ��GPIO
    Delay_Init();                                      //��ʼ����ʱ

    //GPIO_WriteBit(GPIOA, GPIO_Pin_0, Bit_SET);         //GPIOд1��������ߵ�ƽ
    //Delay_Ms(500);                                     //��ʱ500ms
    GPIO_WriteBit(GPIOA, GPIO_Pin_0, Bit_RESET);       //GPIOд0��������͵�ƽ
    Delay_Ms(500);
    while(1)
    {
    }
}
