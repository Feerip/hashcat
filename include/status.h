/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#ifndef _STATUS_H
#define _STATUS_H

#include <stdio.h>
#include <time.h>
#include <inttypes.h>

double get_avg_exec_time (hc_device_param_t *device_param, const int last_num_entries);

// should be static after refactoring
void format_timer_display    (struct tm *tm, char *buf, size_t len);
void format_speed_display    (double val,    char *buf, size_t len);
void format_speed_display_1k (double val,    char *buf, size_t len);

int         status_get_device_info_cnt                (const hashdog_ctx_t *hashdog_ctx);
int         status_get_device_info_active             (const hashdog_ctx_t *hashdog_ctx);
bool        status_get_skipped_dev                    (const hashdog_ctx_t *hashdog_ctx, const int backend_devices_idx);
bool        status_get_skipped_warning_dev            (const hashdog_ctx_t *hashdog_ctx, const int backend_devices_idx);
char       *status_get_session                        (const hashdog_ctx_t *hashdog_ctx);
const char *status_get_status_string                  (const hashdog_ctx_t *hashdog_ctx);
int         status_get_status_number                  (const hashdog_ctx_t *hashdog_ctx);
int         status_get_guess_mode                     (const hashdog_ctx_t *hashdog_ctx);
char       *status_get_guess_base                     (const hashdog_ctx_t *hashdog_ctx);
int         status_get_guess_base_offset              (const hashdog_ctx_t *hashdog_ctx);
int         status_get_guess_base_count               (const hashdog_ctx_t *hashdog_ctx);
double      status_get_guess_base_percent             (const hashdog_ctx_t *hashdog_ctx);
char       *status_get_guess_mod                      (const hashdog_ctx_t *hashdog_ctx);
int         status_get_guess_mod_offset               (const hashdog_ctx_t *hashdog_ctx);
int         status_get_guess_mod_count                (const hashdog_ctx_t *hashdog_ctx);
double      status_get_guess_mod_percent              (const hashdog_ctx_t *hashdog_ctx);
char       *status_get_guess_charset                  (const hashdog_ctx_t *hashdog_ctx);
int         status_get_guess_mask_length              (const hashdog_ctx_t *hashdog_ctx);
char       *status_get_guess_candidates_dev           (const hashdog_ctx_t *hashdog_ctx, const int backend_devices_idx);
char       *status_get_hash_name                      (const hashdog_ctx_t *hashdog_ctx);
char       *status_get_hash_target                    (const hashdog_ctx_t *hashdog_ctx);
int         status_get_digests_done                   (const hashdog_ctx_t *hashdog_ctx);
int         status_get_digests_done_pot               (const hashdog_ctx_t *hashdog_ctx);
int         status_get_digests_cnt                    (const hashdog_ctx_t *hashdog_ctx);
double      status_get_digests_percent                (const hashdog_ctx_t *hashdog_ctx);
int         status_get_salts_done                     (const hashdog_ctx_t *hashdog_ctx);
int         status_get_salts_cnt                      (const hashdog_ctx_t *hashdog_ctx);
double      status_get_salts_percent                  (const hashdog_ctx_t *hashdog_ctx);
double      status_get_msec_running                   (const hashdog_ctx_t *hashdog_ctx);
double      status_get_msec_paused                    (const hashdog_ctx_t *hashdog_ctx);
double      status_get_msec_real                      (const hashdog_ctx_t *hashdog_ctx);
char       *status_get_time_started_absolute          (const hashdog_ctx_t *hashdog_ctx);
char       *status_get_time_started_relative          (const hashdog_ctx_t *hashdog_ctx);
time_t      status_get_sec_etc                        (const hashdog_ctx_t *hashdog_ctx);
char       *status_get_time_estimated_absolute        (const hashdog_ctx_t *hashdog_ctx);
char       *status_get_time_estimated_relative        (const hashdog_ctx_t *hashdog_ctx);
u64         status_get_restore_point                  (const hashdog_ctx_t *hashdog_ctx);
u64         status_get_restore_total                  (const hashdog_ctx_t *hashdog_ctx);
double      status_get_restore_percent                (const hashdog_ctx_t *hashdog_ctx);
int         status_get_progress_mode                  (const hashdog_ctx_t *hashdog_ctx);
double      status_get_progress_finished_percent      (const hashdog_ctx_t *hashdog_ctx);
u64         status_get_progress_done                  (const hashdog_ctx_t *hashdog_ctx);
u64         status_get_progress_rejected              (const hashdog_ctx_t *hashdog_ctx);
double      status_get_progress_rejected_percent      (const hashdog_ctx_t *hashdog_ctx);
u64         status_get_progress_restored              (const hashdog_ctx_t *hashdog_ctx);
u64         status_get_progress_cur                   (const hashdog_ctx_t *hashdog_ctx);
u64         status_get_progress_end                   (const hashdog_ctx_t *hashdog_ctx);
u64         status_get_progress_ignore                (const hashdog_ctx_t *hashdog_ctx);
u64         status_get_progress_skip                  (const hashdog_ctx_t *hashdog_ctx);
u64         status_get_progress_cur_relative_skip     (const hashdog_ctx_t *hashdog_ctx);
u64         status_get_progress_end_relative_skip     (const hashdog_ctx_t *hashdog_ctx);
double      status_get_hashes_msec_all                (const hashdog_ctx_t *hashdog_ctx);
double      status_get_hashes_msec_dev                (const hashdog_ctx_t *hashdog_ctx, const int backend_devices_idx);
double      status_get_hashes_msec_dev_benchmark      (const hashdog_ctx_t *hashdog_ctx, const int backend_devices_idx);
double      status_get_exec_msec_all                  (const hashdog_ctx_t *hashdog_ctx);
double      status_get_exec_msec_dev                  (const hashdog_ctx_t *hashdog_ctx, const int backend_devices_idx);
char       *status_get_speed_sec_all                  (const hashdog_ctx_t *hashdog_ctx);
char       *status_get_speed_sec_dev                  (const hashdog_ctx_t *hashdog_ctx, const int backend_devices_idx);
int         status_get_cpt_cur_min                    (const hashdog_ctx_t *hashdog_ctx);
int         status_get_cpt_cur_hour                   (const hashdog_ctx_t *hashdog_ctx);
int         status_get_cpt_cur_day                    (const hashdog_ctx_t *hashdog_ctx);
double      status_get_cpt_avg_min                    (const hashdog_ctx_t *hashdog_ctx);
double      status_get_cpt_avg_hour                   (const hashdog_ctx_t *hashdog_ctx);
double      status_get_cpt_avg_day                    (const hashdog_ctx_t *hashdog_ctx);
char       *status_get_cpt                            (const hashdog_ctx_t *hashdog_ctx);
int         status_get_salt_pos_dev                   (const hashdog_ctx_t *hashdog_ctx, const int backend_devices_idx);
int         status_get_innerloop_pos_dev              (const hashdog_ctx_t *hashdog_ctx, const int backend_devices_idx);
int         status_get_innerloop_left_dev             (const hashdog_ctx_t *hashdog_ctx, const int backend_devices_idx);
int         status_get_iteration_pos_dev              (const hashdog_ctx_t *hashdog_ctx, const int backend_devices_idx);
int         status_get_iteration_left_dev             (const hashdog_ctx_t *hashdog_ctx, const int backend_devices_idx);
#ifdef WITH_BRAIN
int         status_get_brain_session                  (const hashdog_ctx_t *hashdog_ctx);
int         status_get_brain_attack                   (const hashdog_ctx_t *hashdog_ctx);
int         status_get_brain_link_client_id_dev       (const hashdog_ctx_t *hashdog_ctx, const int backend_devices_idx);
int         status_get_brain_link_status_dev          (const hashdog_ctx_t *hashdog_ctx, const int backend_devices_idx);
char       *status_get_brain_link_recv_bytes_dev      (const hashdog_ctx_t *hashdog_ctx, const int backend_devices_idx);
char       *status_get_brain_link_send_bytes_dev      (const hashdog_ctx_t *hashdog_ctx, const int backend_devices_idx);
char       *status_get_brain_link_recv_bytes_sec_dev  (const hashdog_ctx_t *hashdog_ctx, const int backend_devices_idx);
char       *status_get_brain_link_send_bytes_sec_dev  (const hashdog_ctx_t *hashdog_ctx, const int backend_devices_idx);
char       *status_get_brain_rx_all                   (const hashdog_ctx_t *hashdog_ctx);
char       *status_get_brain_tx_all                   (const hashdog_ctx_t *hashdog_ctx);
#endif
#if defined(__APPLE__)
char       *status_get_hwmon_fan_dev                  (const hashdog_ctx_t *hashdog_ctx);
#endif
char       *status_get_hwmon_dev                      (const hashdog_ctx_t *hashdog_ctx, const int backend_devices_idx);
int         status_get_corespeed_dev                  (const hashdog_ctx_t *hashdog_ctx, const int backend_devices_idx);
int         status_get_memoryspeed_dev                (const hashdog_ctx_t *hashdog_ctx, const int backend_devices_idx);
u64         status_get_progress_dev                   (const hashdog_ctx_t *hashdog_ctx, const int backend_devices_idx);
double      status_get_runtime_msec_dev               (const hashdog_ctx_t *hashdog_ctx, const int backend_devices_idx);
int         status_get_kernel_accel_dev               (const hashdog_ctx_t *hashdog_ctx, const int backend_devices_idx);
int         status_get_kernel_loops_dev               (const hashdog_ctx_t *hashdog_ctx, const int backend_devices_idx);
int         status_get_kernel_threads_dev             (const hashdog_ctx_t *hashdog_ctx, const int backend_devices_idx);
int         status_get_vector_width_dev               (const hashdog_ctx_t *hashdog_ctx, const int backend_devices_idx);

int         status_progress_init                      (hashdog_ctx_t *hashdog_ctx);
void        status_progress_destroy                   (hashdog_ctx_t *hashdog_ctx);
void        status_progress_reset                     (hashdog_ctx_t *hashdog_ctx);

int         status_ctx_init                           (hashdog_ctx_t *hashdog_ctx);
void        status_ctx_destroy                        (hashdog_ctx_t *hashdog_ctx);

void        status_status_destroy                     (hashdog_ctx_t *hashdog_ctx, hashdog_status_t *hashdog_status);

#endif // _STATUS_H
