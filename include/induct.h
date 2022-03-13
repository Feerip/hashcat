/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#ifndef _INDUCT_H
#define _INDUCT_H

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

static const char INDUCT_DIR[] = "induct";

int  induct_ctx_init    (hashdog_ctx_t *hashdog_ctx);
void induct_ctx_scan    (hashdog_ctx_t *hashdog_ctx);
void induct_ctx_destroy (hashdog_ctx_t *hashdog_ctx);

#endif // _INDUCT_H
