/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

extern int s_lo, s_hi;

int gs_IC( int A[], int n ) { //递增策略：O(n^2)
   int gs = A[0]; s_lo = n; s_hi = -1;
   for ( int i = 0; i < n; i++ ) { //枚举所有起始于i
      int s = 0;
      for ( int j = i; j < n; j++ ) { //终止于j的区间
         s += A[j]; //递增地得到其总和：O(1)
         if ( gs < s ) { gs = s; s_lo = i; s_hi = j + 1; } //择优、更新
      }
   }
   return gs;
}
