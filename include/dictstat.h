/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#ifndef _DICTSTAT_H
#define _DICTSTAT_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#include <errno.h>
#include <search.h>

#define MAX_DICTSTAT 100000

#define DICTSTAT_FILENAME "hashdog.dictstat2"
#define DICTSTAT_VERSION  (0x6863646963743200 | 0x02)

int sort_by_dictstat (const void *s1, const void *s2);

int  dictstat_init    (hashdog_ctx_t *hashdog_ctx);
void dictstat_destroy (hashdog_ctx_t *hashdog_ctx);
void dictstat_read    (hashdog_ctx_t *hashdog_ctx);
int  dictstat_write   (hashdog_ctx_t *hashdog_ctx);
u64  dictstat_find    (hashdog_ctx_t *hashdog_ctx, dictstat_t *d);
void dictstat_append  (hashdog_ctx_t *hashdog_ctx, dictstat_t *d);

#endif // _DICTSTAT_H
