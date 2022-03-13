/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#ifndef _RESTORE_H
#define _RESTORE_H

#include <stdio.h>
#include <unistd.h>
#include <errno.h>

#if defined (_WIN)
#include <windows.h>
#include <psapi.h>
#endif // _WIN

#define RESTORE_VERSION_MIN 600
#define RESTORE_VERSION_CUR 611

int cycle_restore (hashdog_ctx_t *hashdog_ctx);

void unlink_restore (hashdog_ctx_t *hashdog_ctx);

int restore_ctx_init (hashdog_ctx_t *hashdog_ctx, int argc, char **argv);

void restore_ctx_destroy (hashdog_ctx_t *hashdog_ctx);

#endif // _RESTORE_H
