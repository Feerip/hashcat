/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#ifndef _COMBINATOR_H
#define _COMBINATOR_H

#include <stdio.h>
#include <errno.h>

int  combinator_ctx_init    (hashdog_ctx_t *hashdog_ctx);
void combinator_ctx_destroy (hashdog_ctx_t *hashdog_ctx);

#endif // _COMBINATOR_H
