/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#ifndef _TUNINGDB_H
#define _TUNINGDB_H

#include <stdio.h>
#include <errno.h>

#define TUNING_DB_FILE "hashdog.hctune"

int sort_by_tuning_db_alias (const void *v1, const void *v2);
int sort_by_tuning_db_entry (const void *v1, const void *v2);

int  tuning_db_init    (hashdog_ctx_t *hashdog_ctx);
void tuning_db_destroy (hashdog_ctx_t *hashdog_ctx);

bool tuning_db_process_line (hashdog_ctx_t *hashdog_ctx, const char *line_buf, const int line_num);
tuning_db_entry_t *tuning_db_search (hashdog_ctx_t *hashdog_ctx, const char *device_name, const cl_device_type device_type, int attack_mode, const int hash_mode);

#endif // _TUNINGDB_H
