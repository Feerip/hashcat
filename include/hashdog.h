/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#ifndef _hashdog_H
#define _hashdog_H

int   hashdog_init               (hashdog_ctx_t *hashdog_ctx, void (*event) (const u32, struct hashdog_ctx *, const void *, const size_t));
void  hashdog_destroy            (hashdog_ctx_t *hashdog_ctx);

int   hashdog_session_init       (hashdog_ctx_t *hashdog_ctx, const char *install_folder, const char *shared_folder, int argc, char **argv, const int comptime);
int   hashdog_session_execute    (hashdog_ctx_t *hashdog_ctx);
int   hashdog_session_pause      (hashdog_ctx_t *hashdog_ctx);
int   hashdog_session_resume     (hashdog_ctx_t *hashdog_ctx);
int   hashdog_session_bypass     (hashdog_ctx_t *hashdog_ctx);
int   hashdog_session_checkpoint (hashdog_ctx_t *hashdog_ctx);
int   hashdog_session_finish     (hashdog_ctx_t *hashdog_ctx);
int   hashdog_session_quit       (hashdog_ctx_t *hashdog_ctx);
int   hashdog_session_destroy    (hashdog_ctx_t *hashdog_ctx);

char *hashdog_get_log            (hashdog_ctx_t *hashdog_ctx);
int   hashdog_get_status         (hashdog_ctx_t *hashdog_ctx, hashdog_status_t *hashdog_status);

#endif // _hashdog_H
