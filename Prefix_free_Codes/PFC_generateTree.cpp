/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

/*DSA*/#include "PFC.h"

PFCTree* generateTree ( PFCForest* forest ) { //构造PFC树
   srand ( ( unsigned int ) time ( NULL ) ); //这里将随机取树合并，故先设置随机种子
   while ( 1 < forest->size() ) { //共做|forest|-1次合并
      PFCTree* s = new PFCTree; s->insert ( '^' ); //创建新树（根标记为"^"）
      Rank r1 = rand() % forest->size(); //随机选取r1，且
      s->attach ( ( *forest ) [r1], s->root() ); //作为左子树接入后
      forest->remove ( r1 ); //随即剔除
      Rank r2 = rand() % forest->size(); //随机选取r2，且
      s->attach ( s->root(), ( *forest ) [r2] ); //作为右子树接入后
      forest->remove ( r2 ); //随即剔除
      forest->insert ( forest->size(), s ); //合并后的PFC树重新植入PFC森林
      /*DSA*/printf ( "%c and %c merged\n", s->root()->lc->data, s->root()->rc->data );
   }
   return ( *forest ) [0]; //至此，森林中尚存的最后一棵树，即全局PFC编码树
}