/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#ifndef _STRAIGHT_H
#define _STRAIGHT_H

#include <string.h>

#define INCR_DICTS 1000

int  straight_ctx_update_loop (hashdog_ctx_t *hashdog_ctx);
int  straight_ctx_init        (hashdog_ctx_t *hashdog_ctx);
void straight_ctx_destroy     (hashdog_ctx_t *hashdog_ctx);

#endif // _STRAIGHT_H
