/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#ifndef _POTFILE_H
#define _POTFILE_H

#include <stdio.h>
#include <stddef.h>
#include <errno.h>
#include <search.h>

#define INCR_POT 1000

int  potfile_init             (hashdog_ctx_t *hashdog_ctx);
int  potfile_read_open        (hashdog_ctx_t *hashdog_ctx);
void potfile_read_close       (hashdog_ctx_t *hashdog_ctx);
int  potfile_write_open       (hashdog_ctx_t *hashdog_ctx);
void potfile_write_close      (hashdog_ctx_t *hashdog_ctx);
void potfile_write_append     (hashdog_ctx_t *hashdog_ctx, const char *out_buf, const int out_len, u8 *plain_ptr, unsigned int plain_len);
int  potfile_remove_parse     (hashdog_ctx_t *hashdog_ctx);
void potfile_destroy          (hashdog_ctx_t *hashdog_ctx);
int  potfile_handle_show      (hashdog_ctx_t *hashdog_ctx);
int  potfile_handle_left      (hashdog_ctx_t *hashdog_ctx);

void potfile_update_hash      (hashdog_ctx_t *hashdog_ctx, hash_t *found,  char *line_pw_buf, int line_pw_len);
void potfile_update_hashes    (hashdog_ctx_t *hashdog_ctx, hash_t *hash_buf, char *line_pw_buf, int line_pw_len, pot_tree_entry_t *tree);

void pot_tree_destroy      (pot_tree_entry_t *tree);

int  sort_pot_tree_by_hash (const void *v1, const void *v2);
int  sort_pot_orig_line    (const void *v1, const void *v2);

#endif // _POTFILE_H
