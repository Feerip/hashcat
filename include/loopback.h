/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#ifndef _LOOPBACK_H
#define _LOOPBACK_H

#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <time.h>

static const char LOOPBACK_FILE[] = "hashdog.loopback";

int  loopback_init          (hashdog_ctx_t *hashdog_ctx);
void loopback_destroy       (hashdog_ctx_t *hashdog_ctx);
int  loopback_write_open    (hashdog_ctx_t *hashdog_ctx);
void loopback_write_close   (hashdog_ctx_t *hashdog_ctx);
void loopback_write_append  (hashdog_ctx_t *hashdog_ctx, const u8 *plain_ptr, const unsigned int plain_len);
void loopback_write_unlink  (hashdog_ctx_t *hashdog_ctx);

#endif // _LOOPBACK_H
