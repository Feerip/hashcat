/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#ifndef _EVENT_H
#define _EVENT_H

#include <stdio.h>
#include <stdarg.h>

void event_call (const u32 id, hashdog_ctx_t *hashdog_ctx, const void *buf, const size_t len);

#define EVENT(id)              event_call ((id), hashdog_ctx, NULL,  0)
#define EVENT_DATA(id,buf,len) event_call ((id), hashdog_ctx, (buf), (len))

__attribute__ ((format (printf, 2, 3))) size_t event_log_advice_nn  (hashdog_ctx_t *hashdog_ctx, const char *fmt, ...);
__attribute__ ((format (printf, 2, 3))) size_t event_log_info_nn    (hashdog_ctx_t *hashdog_ctx, const char *fmt, ...);
__attribute__ ((format (printf, 2, 3))) size_t event_log_warning_nn (hashdog_ctx_t *hashdog_ctx, const char *fmt, ...);
__attribute__ ((format (printf, 2, 3))) size_t event_log_error_nn   (hashdog_ctx_t *hashdog_ctx, const char *fmt, ...);

__attribute__ ((format (printf, 2, 3))) size_t event_log_advice     (hashdog_ctx_t *hashdog_ctx, const char *fmt, ...);
__attribute__ ((format (printf, 2, 3))) size_t event_log_info       (hashdog_ctx_t *hashdog_ctx, const char *fmt, ...);
__attribute__ ((format (printf, 2, 3))) size_t event_log_warning    (hashdog_ctx_t *hashdog_ctx, const char *fmt, ...);
__attribute__ ((format (printf, 2, 3))) size_t event_log_error      (hashdog_ctx_t *hashdog_ctx, const char *fmt, ...);

int  event_ctx_init         (hashdog_ctx_t *hashdog_ctx);
void event_ctx_destroy      (hashdog_ctx_t *hashdog_ctx);

#endif // _EVENT_H
