/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#ifndef _TERMINAL_H
#define _TERMINAL_H

#include <stdio.h>
#include <string.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>

#if defined (_WIN)
#include <windows.h>
#else
#include <termios.h>
#if defined (__APPLE__)
#include <sys/ioctl.h>
#endif // __APPLE__
#endif // _WIN

#if !defined (_WIN) && !defined (__CYGWIN__) && !defined (__MSYS__)
#include <sys/utsname.h>
#if !defined (__linux__)
#include <sys/sysctl.h>
#endif // ! __linux__
#endif // ! _WIN && | __CYGWIN__ && ! __MSYS__

void welcome_screen (hashdog_ctx_t *hashdog_ctx, const char *version_tag);
void goodbye_screen (hashdog_ctx_t *hashdog_ctx, const time_t proc_start, const time_t proc_stop);

int setup_console (void);

void send_prompt  (hashdog_ctx_t *hashdog_ctx);
void clear_prompt (hashdog_ctx_t *hashdog_ctx);

HC_API_CALL void *thread_keypress (void *p);

#if defined (_WIN)
void SetConsoleWindowSize (const int x);
#endif

int tty_break(void);
int tty_getchar(void);
int tty_fix(void);

void compress_terminal_line_length (char *out_buf, const size_t keep_from_beginning, const size_t keep_from_end);

void hash_info                          (hashdog_ctx_t *hashdog_ctx);

void backend_info                       (hashdog_ctx_t *hashdog_ctx);
void backend_info_compact               (hashdog_ctx_t *hashdog_ctx);

void status_progress_machine_readable   (hashdog_ctx_t *hashdog_ctx);
void status_progress                    (hashdog_ctx_t *hashdog_ctx);
void status_speed_machine_readable      (hashdog_ctx_t *hashdog_ctx);
void status_speed                       (hashdog_ctx_t *hashdog_ctx);
void status_display_machine_readable    (hashdog_ctx_t *hashdog_ctx);
void status_display                     (hashdog_ctx_t *hashdog_ctx);
void status_benchmark_machine_readable  (hashdog_ctx_t *hashdog_ctx);
void status_benchmark                   (hashdog_ctx_t *hashdog_ctx);

#endif // _TERMINAL_H
