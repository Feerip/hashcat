/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#ifndef _USER_OPTIONS_H
#define _USER_OPTIONS_H

#include <getopt.h>

int user_options_init (hashdog_ctx_t *hashdog_ctx);

void user_options_destroy (hashdog_ctx_t *hashdog_ctx);

int user_options_getopt (hashdog_ctx_t *hashdog_ctx, int argc, char **argv);

int user_options_sanity (hashdog_ctx_t *hashdog_ctx);

void user_options_session_auto (hashdog_ctx_t *hashdog_ctx);

void user_options_preprocess (hashdog_ctx_t *hashdog_ctx);

void user_options_postprocess (hashdog_ctx_t *hashdog_ctx);

void user_options_extra_init (hashdog_ctx_t *hashdog_ctx);

void user_options_extra_destroy (hashdog_ctx_t *hashdog_ctx);

u64 user_options_extra_amplifier (hashdog_ctx_t *hashdog_ctx);

void user_options_logger (hashdog_ctx_t *hashdog_ctx);

int user_options_check_files (hashdog_ctx_t *hashdog_ctx);

void user_options_info (hashdog_ctx_t *hashdog_ctx);

#endif // _USER_OPTIONS_H
