#ifndef _gc_ctrl_
#define _gc_ctrl_

#include "misc.h"

extern unsigned long long
     stat_minor_words,
     stat_promoted_words,
     stat_major_words,
     stat_minor_collections,
     stat_major_collections,
     stat_heap_size;

void init_gc (unsigned long long, unsigned long long, int, int);


#endif /* _gc_ctrl_ */
