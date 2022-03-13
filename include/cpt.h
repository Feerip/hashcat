/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#ifndef _CPT_H
#define _CPT_H

#include <stdio.h>
#include <errno.h>
#include <time.h>

int  cpt_ctx_init    (hashdog_ctx_t *hashdog_ctx);
void cpt_ctx_destroy (hashdog_ctx_t *hashdog_ctx);
void cpt_ctx_reset   (hashdog_ctx_t *hashdog_ctx);

#endif // _CPT_H
