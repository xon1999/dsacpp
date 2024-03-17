/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

/*DSA*/#include <cstdio>
#include <cstring>
/*DSA*/void showProgress ( char*, char*, int, int );

/******************************************************************************************
 * Text     :  0   1   2   .   .   .   i   i+1 .   .   .   i+j .   .   n-1
 *             ------------------------|-------------------|------------
 * Pattern  :                          0   1   .   .   .   j   .   .
 *                                     |-------------------|
 ******************************************************************************************/
int match ( char* P, char* T ) { //串匹配算法（Brute-force-2）
   size_t n = strlen ( T ), i = 0; //文本串长度、与模式串首字符的对齐位置
   size_t m = strlen ( P ), j; //模式串长度、当前接受比对字符的位置
   for ( i = 0; i < n - m + 1; i++ ) { //文本串从第i个字符起，与
      for ( j = 0; j < m; j++ ) //模式串中对应的字符逐个比对
         /*DSA*/{showProgress ( T, P, i, j ); getchar();
         if ( T[i + j] != P[j] ) break; //若失配，模式串整体右移一个字符，再做一轮比对
         /*DSA*/}
      if ( j >= m ) break; //找到匹配子串
   }
   return i; //如何通过返回值，判断匹配结果？
}