/*
 * libpulse.dll
 *
 * Generated from libpulse.dll by winedump.
 *
 * DO NOT SEND GENERATED DLLS FOR INCLUSION INTO WINE !
 *
 */
#ifndef __WINE_LIBPULSE_DLL_H
#define __WINE_LIBPULSE_DLL_H

#include "windef.h"
#include "wine/debug.h"
#include "winbase.h"
#include "winnt.h"
#include "pulseaudio.h"

void foo_out_pulse_winelib_dll();

pa_usec_t __cdecl LIBPULSE_pa_bytes_to_usec(uint64_t length, pa_sample_spec * spec);

pa_channel_map * __cdecl LIBPULSE_pa_channel_map_init_auto(pa_channel_map * m, unsigned channels, pa_channel_map_def_t def);

int __cdecl LIBPULSE_pa_context_connect(pa_context * c, char * server, pa_context_flags_t flags, pa_spawn_api * api);
void __cdecl LIBPULSE_pa_context_disconnect(pa_context * c);
pa_operation * __cdecl LIBPULSE_pa_context_drain(pa_context * c, pa_context_notify_cb_t cb, void * userdata);
int __cdecl LIBPULSE_pa_context_errno(pa_context * c);

char * __cdecl LIBPULSE_pa_context_get_server(pa_context * c);
pa_operation * __cdecl LIBPULSE_pa_context_get_server_info(pa_context * c, pa_server_info_cb_t cb, void * userdata);
uint32_t __cdecl LIBPULSE_pa_context_get_server_protocol_version(pa_context * c);
pa_context_state_t __cdecl LIBPULSE_pa_context_get_state(pa_context * c);
int __cdecl LIBPULSE_pa_context_is_local(pa_context * c);
int __cdecl LIBPULSE_pa_context_is_pending(pa_context * c);
pa_context * __cdecl LIBPULSE_pa_context_new(pa_mainloop_api * mainloop, char * name);
pa_context * __cdecl LIBPULSE_pa_context_new_with_proplist(pa_mainloop_api * mainloop, char * name, pa_proplist * p);
pa_operation * __cdecl LIBPULSE_pa_context_proplist_remove(pa_context * c, char * keys, pa_context_success_cb_t cb, void * userdata);
pa_operation * __cdecl LIBPULSE_pa_context_proplist_update(pa_context * c, pa_update_mode_t mode, pa_proplist * p, pa_context_success_cb_t cb, void * userdata);
pa_context * __cdecl LIBPULSE_pa_context_ref(pa_context * c);

void __cdecl LIBPULSE_pa_context_set_event_callback(pa_context * p, pa_context_event_cb_t cb, void * userdata);
pa_operation * __cdecl LIBPULSE_pa_context_set_name(pa_context * c, char * name, pa_context_success_cb_t cb, void * userdata);
void __cdecl LIBPULSE_pa_context_set_state_callback(pa_context * c, pa_context_notify_cb_t cb, void * userdata);
void __cdecl LIBPULSE_pa_context_set_subscribe_callback(pa_context * c, pa_context_subscribe_cb_t cb, void * userdata);
pa_operation * __cdecl LIBPULSE_pa_context_stat(pa_context * c, pa_stat_info_cb_t cb, void * userdata);
pa_operation * __cdecl LIBPULSE_pa_context_subscribe(pa_context * c, pa_subscription_mask_t m, pa_context_success_cb_t cb, void * userdata);
void __cdecl LIBPULSE_pa_context_unref(pa_context * c);


void __cdecl LIBPULSE_pa_operation_cancel(pa_operation * o);
pa_operation_state_t __cdecl LIBPULSE_pa_operation_get_state(pa_operation * o);
pa_operation * __cdecl LIBPULSE_pa_operation_ref(pa_operation * o);
void __cdecl LIBPULSE_pa_operation_unref(pa_operation * o);

void __cdecl LIBPULSE_pa_proplist_clear(pa_proplist * p);
int __cdecl LIBPULSE_pa_proplist_contains(pa_proplist * p, char * key);
pa_proplist * __cdecl LIBPULSE_pa_proplist_copy(pa_proplist * p);
int __cdecl LIBPULSE_pa_proplist_equal(pa_proplist * a, pa_proplist * b);
void __cdecl LIBPULSE_pa_proplist_free(pa_proplist * p);
pa_proplist * __cdecl LIBPULSE_pa_proplist_from_string(char * s);
int __cdecl LIBPULSE_pa_proplist_get(pa_proplist * p, char * key, void ** data, size_t * nbytes);
char * __cdecl LIBPULSE_pa_proplist_gets(pa_proplist * p, char * key);
int __cdecl LIBPULSE_pa_proplist_isempty(pa_proplist * p);
char * __cdecl LIBPULSE_pa_proplist_iterate(pa_proplist * p, void ** state);
pa_proplist * __cdecl LIBPULSE_pa_proplist_new(void);
int __cdecl LIBPULSE_pa_proplist_set(pa_proplist * p, char * key, void * data, size_t nbytes);
int __cdecl LIBPULSE_pa_proplist_setp(pa_proplist * p, char * pair);
int __cdecl LIBPULSE_pa_proplist_sets(pa_proplist * p, char * key, char * value);
unsigned int __cdecl LIBPULSE_pa_proplist_size(pa_proplist * p);
char * __cdecl LIBPULSE_pa_proplist_to_string(pa_proplist * p);
char * __cdecl LIBPULSE_pa_proplist_to_string_sep(pa_proplist * p, char * sep);
int __cdecl LIBPULSE_pa_proplist_unset(pa_proplist * p, char * key);
int __cdecl LIBPULSE_pa_proplist_unset_many(pa_proplist * p, char * keys);
void __cdecl LIBPULSE_pa_proplist_update(pa_proplist * p, pa_update_mode_t mode, pa_proplist * other);


int __cdecl LIBPULSE_pa_stream_begin_write(pa_stream * s, void ** data, size_t * nbytes);
int __cdecl LIBPULSE_pa_stream_cancel_write(pa_stream * s);
int __cdecl LIBPULSE_pa_stream_connect_playback(pa_stream * s, char * dev, pa_buffer_attr * attr, pa_stream_flags_t flags, pa_cvolume * volume, pa_stream * sync_stream);
pa_operation * __cdecl LIBPULSE_pa_stream_cork(pa_stream * s, int b, pa_stream_success_cb_t cb, void * userdata);
int __cdecl LIBPULSE_pa_stream_disconnect(pa_stream * s);
pa_operation * __cdecl LIBPULSE_pa_stream_drain(pa_stream * s, pa_stream_success_cb_t cb, void * userdata);
int __cdecl LIBPULSE_pa_stream_drop(pa_stream * s);
pa_operation * __cdecl LIBPULSE_pa_stream_flush(pa_stream * s, pa_stream_success_cb_t cb, void * userdata);
pa_buffer_attr * __cdecl LIBPULSE_pa_stream_get_buffer_attr(pa_stream * s);
pa_channel_map * __cdecl LIBPULSE_pa_stream_get_channel_map(pa_stream * s);
pa_context * __cdecl LIBPULSE_pa_stream_get_context(pa_stream * s);
uint32_t __cdecl LIBPULSE_pa_stream_get_index(pa_stream * s);
int __cdecl LIBPULSE_pa_stream_get_latency(pa_stream * s, pa_usec_t * r_usec, int * negative);
uint32_t __cdecl LIBPULSE_pa_stream_get_monitor_stream(pa_stream * s);
pa_sample_spec * __cdecl LIBPULSE_pa_stream_get_sample_spec(pa_stream * s);
pa_stream_state_t __cdecl LIBPULSE_pa_stream_get_state(pa_stream * s);
int __cdecl LIBPULSE_pa_stream_get_time(pa_stream * s, pa_usec_t * r_usec);
pa_timing_info * __cdecl LIBPULSE_pa_stream_get_timing_info(pa_stream * s);
int64_t __cdecl LIBPULSE_pa_stream_get_underflow_index(pa_stream * p);
int __cdecl LIBPULSE_pa_stream_is_corked(pa_stream * s);
int __cdecl LIBPULSE_pa_stream_is_suspended(pa_stream * s);
pa_stream * __cdecl LIBPULSE_pa_stream_new(pa_context * c, char * name, pa_sample_spec * ss, pa_channel_map * map);
pa_stream * __cdecl LIBPULSE_pa_stream_new_extended(pa_context * c, char * name, pa_format_info * arg2, unsigned int n_formats, pa_proplist * p);
pa_stream * __cdecl LIBPULSE_pa_stream_new_with_proplist(pa_context * c, char * name, pa_sample_spec * ss, pa_channel_map * map, pa_proplist * p);
int __cdecl LIBPULSE_pa_stream_peek(pa_stream * s, void ** data, size_t * length);
pa_operation * __cdecl LIBPULSE_pa_stream_prebuf(pa_stream * s, pa_stream_success_cb_t cb, void * userdata);
pa_operation * __cdecl LIBPULSE_pa_stream_proplist_remove(pa_stream * s, char * keys, pa_stream_success_cb_t cb, void * userdata);
pa_operation * __cdecl LIBPULSE_pa_stream_proplist_update(pa_stream * s, pa_update_mode_t mode, pa_proplist * p, pa_stream_success_cb_t cb, void * userdata);
size_t __cdecl LIBPULSE_pa_stream_readable_size(pa_stream * s);
pa_stream * __cdecl LIBPULSE_pa_stream_ref(pa_stream * s);
pa_operation * __cdecl LIBPULSE_pa_stream_set_buffer_attr(pa_stream * s, pa_buffer_attr * attr, pa_stream_success_cb_t cb, void * userdata);
void __cdecl LIBPULSE_pa_stream_set_buffer_attr_callback(pa_stream * s, pa_stream_notify_cb_t cb, void * userdata);
void __cdecl LIBPULSE_pa_stream_set_event_callback(pa_stream * s, pa_stream_event_cb_t cb, void * userdata);
void __cdecl LIBPULSE_pa_stream_set_latency_update_callback(pa_stream * s, pa_stream_notify_cb_t cb, void * userdata);

void __cdecl LIBPULSE_pa_stream_set_moved_callback(pa_stream * s, pa_stream_notify_cb_t cb, void * userdata);
pa_operation * __cdecl LIBPULSE_pa_stream_set_name(pa_stream * s, char * name, pa_stream_success_cb_t cb, void * userdata);
void __cdecl LIBPULSE_pa_stream_set_overflow_callback(pa_stream * s, pa_stream_notify_cb_t cb, void * userdata);
void __cdecl LIBPULSE_pa_stream_set_read_callback(pa_stream * s, pa_stream_request_cb_t cb, void * userdata);
void __cdecl LIBPULSE_pa_stream_set_started_callback(pa_stream * s, pa_stream_notify_cb_t cb, void * userdata);
void __cdecl LIBPULSE_pa_stream_set_state_callback(pa_stream * s, pa_stream_notify_cb_t cb, void * userdata);
void __cdecl LIBPULSE_pa_stream_set_suspended_callback(pa_stream * s, pa_stream_notify_cb_t cb, void * userdata);
void __cdecl LIBPULSE_pa_stream_set_underflow_callback(pa_stream * s, pa_stream_notify_cb_t cb, void * userdata);
void __cdecl LIBPULSE_pa_stream_set_write_callback(pa_stream * s, pa_stream_request_cb_t cb, void * userdata);
pa_operation * __cdecl LIBPULSE_pa_stream_trigger(pa_stream * s, pa_stream_success_cb_t cb, void * userdata);
void __cdecl LIBPULSE_pa_stream_unref(pa_stream * s);
pa_operation * __cdecl LIBPULSE_pa_stream_update_sample_rate(pa_stream * s, uint32_t rate, pa_stream_success_cb_t cb, void * userdata);
pa_operation * __cdecl LIBPULSE_pa_stream_update_timing_info(pa_stream * s, pa_stream_success_cb_t cb, void * userdata);
size_t __cdecl LIBPULSE_pa_stream_writable_size(pa_stream * s);
int __cdecl LIBPULSE_pa_stream_write(pa_stream * s, void * data, size_t length, pa_free_cb_t free_cb, int64_t offset, pa_seek_mode_t seek);
char * __cdecl LIBPULSE_pa_strerror(int error);

void __cdecl LIBPULSE_pa_threaded_mainloop_accept(pa_threaded_mainloop * m);
void __cdecl LIBPULSE_pa_threaded_mainloop_free(pa_threaded_mainloop * m);
pa_mainloop_api * __cdecl LIBPULSE_pa_threaded_mainloop_get_api(pa_threaded_mainloop * m);
int __cdecl LIBPULSE_pa_threaded_mainloop_get_retval(pa_threaded_mainloop * m);
int __cdecl LIBPULSE_pa_threaded_mainloop_in_thread(pa_threaded_mainloop * m);
void __cdecl LIBPULSE_pa_threaded_mainloop_lock(pa_threaded_mainloop * m);
pa_threaded_mainloop * __cdecl LIBPULSE_pa_threaded_mainloop_new(void);
void __cdecl LIBPULSE_pa_threaded_mainloop_signal(pa_threaded_mainloop * m, int wait_for_accept);
int __cdecl LIBPULSE_pa_threaded_mainloop_start(pa_threaded_mainloop * m);
void __cdecl LIBPULSE_pa_threaded_mainloop_stop(pa_threaded_mainloop * m);
void __cdecl LIBPULSE_pa_threaded_mainloop_unlock(pa_threaded_mainloop * m);
void __cdecl LIBPULSE_pa_threaded_mainloop_wait(pa_threaded_mainloop * m);

size_t __cdecl LIBPULSE_pa_usec_to_bytes(pa_usec_t t, pa_sample_spec * spec);


#endif	/* __WINE_LIBPULSE_DLL_H */
