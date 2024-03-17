/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

#pragma once

template <typename T> Rank percolateUp( T* A, Rank i ) { //�Դ���A[i]�����ˣ�0 <= i < _size
   while ( 0 < i ) { //�ڵִ�Ѷ�֮ǰ��������
      Rank j = Parent( i ); //����[i]֮����[j]
      if ( lt( A[i], A[j] ) ) break; //һ������˳������������ɣ�����
      swap( A[i], A[j] ); i = j; //���ӻ�λ��������������һ��
   } //while
   return i; //�����������յִ��λ��
}