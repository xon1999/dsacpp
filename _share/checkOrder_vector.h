/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

#pragma once

#include "vector/vector.h"

template <typename T> void checkOrder ( Vector<T> & V ) { //�ж������Ƿ���������
   int unsorted = 0; //���������
   V.traverse ( CheckOrder<T> ( unsorted, V[0] ) ); //���б���
   if ( 0 < unsorted )
      printf ( "Unsorted with %d adjacent inversion(s)\n", unsorted );
   else
      printf ( "Sorted\n" );
}