/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#ifndef _OUTFILE_CHECK_H
#define _OUTFILE_CHECK_H

#include <unistd.h>
#include <errno.h>

#define OUTFILES_DIR "outfiles"

HC_API_CALL void *thread_outfile_remove (void *p);

int  outcheck_ctx_init    (hashdog_ctx_t *hashdog_ctx);
void outcheck_ctx_destroy (hashdog_ctx_t *hashdog_ctx);

#endif // _OUTFILE_CHECK_H
