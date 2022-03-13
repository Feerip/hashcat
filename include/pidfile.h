/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#ifndef _PIDFILE_H
#define _PIDFILE_H

#include <stdio.h>
#include <unistd.h>
#include <errno.h>

#if defined (_WIN)
#include <windows.h>
#include <psapi.h>
#endif // _WIN

int pidfile_ctx_init (hashdog_ctx_t *hashdog_ctx);

void pidfile_ctx_destroy (hashdog_ctx_t *hashdog_ctx);

#endif // _PIDFILE_H
