#ifndef __6050_H
#define __6050_H
//Ӳ�����ӣ�sci3 Rx
//Ӳ��ռ�ã�sci3 dma_ch1


#include "sys.h"
#include "sci3_dma.h"
#include "delay.h"


void mpu6050_init(void);
void mpu6050_resetzero(void);				//����ǰֵ����Ϊ�Ƕ����
double mpu6050_get_angle(void);			//�������¿�����㿪ʼ��ʱ��Ϊ�������������� -180`180 deg  
double mpu6050_get_omega(void);    //�������¿���ʱ��Ϊ�������������� -2000��2000 deg/s
void mpu6050_test(void);

#endif


