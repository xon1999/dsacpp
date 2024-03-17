/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

#include "simu.h"

int delay;

/******************************************************************************************
 * 输出顾客c的状态
 ******************************************************************************************/
void printCustomer ( Customer c )
{ printf ( "%4d", c.time ); }

/******************************************************************************************
 * 事件模拟
 ******************************************************************************************/
int main ( int argc, char* argv[] ) {
   if ( argc < 4 ) {  printf ( "Usage: %s <nWin> <servTime> <delay(ms)>\n", argv[0] ); return -1;  }
   srand ( ( unsigned int ) time ( NULL ) ); //设置随机种子
   delay = atoi ( argv[3] );
   simulate ( atoi ( argv[1] ), atoi ( argv[2] ) ); //启动模拟
   return 0;
}