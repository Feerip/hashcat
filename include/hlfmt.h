/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#ifndef _HLFMT_H
#define _HLFMT_H

#include <stdio.h>

#define HLFMTS_CNT 11

const char *strhlfmt (const u32 hashfile_format);

void hlfmt_hash (hashdog_ctx_t *hashdog_ctx, u32 hashfile_format, char *line_buf, const int line_len, char **hashbuf_pos, int *hashbuf_len);
void hlfmt_user (hashdog_ctx_t *hashdog_ctx, u32 hashfile_format, char *line_buf, const int line_len, char **userbuf_pos, int *userbuf_len);

u32 hlfmt_detect (hashdog_ctx_t *hashdog_ctx, HCFILE *fp, u32 max_check);

#endif // _HLFMT_H
