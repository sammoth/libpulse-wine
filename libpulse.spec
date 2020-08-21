# Generated from pulse/libpulse.dll by winedump

1 cdecl foo_out_pulse_winelib_dll()

5 cdecl pa_bytes_to_usec( long ptr ) LIBPULSE_pa_bytes_to_usec
12 cdecl pa_channel_map_init_auto( ptr long long ) LIBPULSE_pa_channel_map_init_auto

27 cdecl pa_context_connect( ptr str long ptr ) LIBPULSE_pa_context_connect
28 cdecl pa_context_disconnect( ptr ) LIBPULSE_pa_context_disconnect
29 cdecl pa_context_drain( ptr long ptr ) LIBPULSE_pa_context_drain
30 cdecl pa_context_errno( ptr ) LIBPULSE_pa_context_errno


47 cdecl pa_context_get_server( ptr ) LIBPULSE_pa_context_get_server
48 cdecl pa_context_get_server_info( ptr long ptr ) LIBPULSE_pa_context_get_server_info
49 cdecl pa_context_get_server_protocol_version( ptr ) LIBPULSE_pa_context_get_server_protocol_version

60 cdecl pa_context_get_state( ptr ) LIBPULSE_pa_context_get_state

62 cdecl pa_context_is_local( ptr ) LIBPULSE_pa_context_is_local
63 cdecl pa_context_is_pending( ptr ) LIBPULSE_pa_context_is_pending

72 cdecl pa_context_new( ptr str ) LIBPULSE_pa_context_new
73 cdecl pa_context_new_with_proplist( ptr str ptr ) LIBPULSE_pa_context_new_with_proplist

76 cdecl pa_context_proplist_remove( ptr str long ptr ) LIBPULSE_pa_context_proplist_remove
77 cdecl pa_context_proplist_update( ptr long ptr long ptr ) LIBPULSE_pa_context_proplist_update
78 cdecl pa_context_ref( ptr ) LIBPULSE_pa_context_ref

88 cdecl pa_context_set_event_callback( ptr long ptr ) LIBPULSE_pa_context_set_event_callback
89 cdecl pa_context_set_name( ptr str long ptr ) LIBPULSE_pa_context_set_name

106 cdecl pa_context_set_state_callback( ptr long ptr ) LIBPULSE_pa_context_set_state_callback
107 cdecl pa_context_set_subscribe_callback( ptr long ptr ) LIBPULSE_pa_context_set_subscribe_callback
108 cdecl pa_context_stat( ptr long ptr ) LIBPULSE_pa_context_stat
109 cdecl pa_context_subscribe( ptr long long ptr ) LIBPULSE_pa_context_subscribe

115 cdecl pa_context_unref( ptr ) LIBPULSE_pa_context_unref




208 cdecl pa_operation_cancel( ptr ) LIBPULSE_pa_operation_cancel
209 cdecl pa_operation_get_state( ptr ) LIBPULSE_pa_operation_get_state
210 cdecl pa_operation_ref( ptr ) LIBPULSE_pa_operation_ref
211 cdecl pa_operation_unref( ptr ) LIBPULSE_pa_operation_unref

214 cdecl pa_proplist_clear( ptr ) LIBPULSE_pa_proplist_clear
215 cdecl pa_proplist_contains( ptr str ) LIBPULSE_pa_proplist_contains
216 cdecl pa_proplist_copy( ptr ) LIBPULSE_pa_proplist_copy
217 cdecl pa_proplist_equal( ptr ptr ) LIBPULSE_pa_proplist_equal
218 cdecl pa_proplist_free( ptr ) LIBPULSE_pa_proplist_free
219 cdecl pa_proplist_from_string( str ) LIBPULSE_pa_proplist_from_string
220 cdecl pa_proplist_get( ptr str ptr ptr ) LIBPULSE_pa_proplist_get
221 cdecl pa_proplist_gets( ptr str ) LIBPULSE_pa_proplist_gets
222 cdecl pa_proplist_isempty( ptr ) LIBPULSE_pa_proplist_isempty
223 cdecl pa_proplist_iterate( ptr ptr ) LIBPULSE_pa_proplist_iterate
224 cdecl pa_proplist_new() LIBPULSE_pa_proplist_new
225 cdecl pa_proplist_set( ptr str ptr long ) LIBPULSE_pa_proplist_set
227 cdecl pa_proplist_setp( ptr str ) LIBPULSE_pa_proplist_setp
228 cdecl pa_proplist_sets( ptr str str ) LIBPULSE_pa_proplist_sets
229 cdecl pa_proplist_size( ptr ) LIBPULSE_pa_proplist_size
230 cdecl pa_proplist_to_string( ptr ) LIBPULSE_pa_proplist_to_string
231 cdecl pa_proplist_to_string_sep( ptr str ) LIBPULSE_pa_proplist_to_string_sep
232 cdecl pa_proplist_unset( ptr str ) LIBPULSE_pa_proplist_unset
233 cdecl pa_proplist_unset_many( ptr str ) LIBPULSE_pa_proplist_unset_many
234 cdecl pa_proplist_update( ptr long ptr ) LIBPULSE_pa_proplist_update

250 cdecl pa_stream_begin_write( ptr ptr ptr ) LIBPULSE_pa_stream_begin_write
251 cdecl pa_stream_cancel_write( ptr ) LIBPULSE_pa_stream_cancel_write
252 cdecl pa_stream_connect_playback( ptr str ptr long ptr ptr ) LIBPULSE_pa_stream_connect_playback
255 cdecl pa_stream_cork( ptr long long ptr ) LIBPULSE_pa_stream_cork
256 cdecl pa_stream_disconnect( ptr ) LIBPULSE_pa_stream_disconnect
257 cdecl pa_stream_drain( ptr long ptr ) LIBPULSE_pa_stream_drain
258 cdecl pa_stream_drop( ptr ) LIBPULSE_pa_stream_drop
260 cdecl pa_stream_flush( ptr long ptr ) LIBPULSE_pa_stream_flush
261 cdecl pa_stream_get_buffer_attr( ptr ) LIBPULSE_pa_stream_get_buffer_attr
262 cdecl pa_stream_get_channel_map( ptr ) LIBPULSE_pa_stream_get_channel_map
263 cdecl pa_stream_get_context( ptr ) LIBPULSE_pa_stream_get_context
264 cdecl pa_stream_get_device_index( ptr ) LIBPULSE_pa_stream_get_device_index
265 cdecl pa_stream_get_device_name( ptr ) LIBPULSE_pa_stream_get_device_name
267 cdecl pa_stream_get_index( ptr ) LIBPULSE_pa_stream_get_index
268 cdecl pa_stream_get_latency( ptr ptr ptr ) LIBPULSE_pa_stream_get_latency
269 cdecl pa_stream_get_monitor_stream( ptr ) LIBPULSE_pa_stream_get_monitor_stream
270 cdecl pa_stream_get_sample_spec( ptr ) LIBPULSE_pa_stream_get_sample_spec
271 cdecl pa_stream_get_state( ptr ) LIBPULSE_pa_stream_get_state
272 cdecl pa_stream_get_time( ptr ptr ) LIBPULSE_pa_stream_get_time
273 cdecl pa_stream_get_timing_info( ptr ) LIBPULSE_pa_stream_get_timing_info
274 cdecl pa_stream_get_underflow_index( ptr ) LIBPULSE_pa_stream_get_underflow_index
275 cdecl pa_stream_is_corked( ptr ) LIBPULSE_pa_stream_is_corked
276 cdecl pa_stream_is_suspended( ptr ) LIBPULSE_pa_stream_is_suspended
277 cdecl pa_stream_new( ptr str ptr ptr ) LIBPULSE_pa_stream_new
278 cdecl pa_stream_new_extended( ptr str ptr long ptr ) LIBPULSE_pa_stream_new_extended
279 cdecl pa_stream_new_with_proplist( ptr str ptr ptr ptr ) LIBPULSE_pa_stream_new_with_proplist
280 cdecl pa_stream_peek( ptr ptr ptr ) LIBPULSE_pa_stream_peek
281 cdecl pa_stream_prebuf( ptr long ptr ) LIBPULSE_pa_stream_prebuf
282 cdecl pa_stream_proplist_remove( ptr str long ptr ) LIBPULSE_pa_stream_proplist_remove
283 cdecl pa_stream_proplist_update( ptr long ptr long ptr ) LIBPULSE_pa_stream_proplist_update
284 cdecl pa_stream_readable_size( ptr ) LIBPULSE_pa_stream_readable_size
285 cdecl pa_stream_ref( ptr ) LIBPULSE_pa_stream_ref
286 cdecl pa_stream_set_buffer_attr( ptr ptr long ptr ) LIBPULSE_pa_stream_set_buffer_attr
287 cdecl pa_stream_set_buffer_attr_callback( ptr long ptr ) LIBPULSE_pa_stream_set_buffer_attr_callback
288 cdecl pa_stream_set_event_callback( ptr long ptr ) LIBPULSE_pa_stream_set_event_callback
289 cdecl pa_stream_set_latency_update_callback( ptr long ptr ) LIBPULSE_pa_stream_set_latency_update_callback
290 cdecl pa_stream_set_monitor_stream( ptr long ) LIBPULSE_pa_stream_set_monitor_stream
291 cdecl pa_stream_set_moved_callback( ptr long ptr ) LIBPULSE_pa_stream_set_moved_callback
292 cdecl pa_stream_set_name( ptr str long ptr ) LIBPULSE_pa_stream_set_name
293 cdecl pa_stream_set_overflow_callback( ptr long ptr ) LIBPULSE_pa_stream_set_overflow_callback
294 cdecl pa_stream_set_read_callback( ptr long ptr ) LIBPULSE_pa_stream_set_read_callback
295 cdecl pa_stream_set_started_callback( ptr long ptr ) LIBPULSE_pa_stream_set_started_callback
296 cdecl pa_stream_set_state_callback( ptr long ptr ) LIBPULSE_pa_stream_set_state_callback
297 cdecl pa_stream_set_suspended_callback( ptr long ptr ) LIBPULSE_pa_stream_set_suspended_callback
298 cdecl pa_stream_set_underflow_callback( ptr long ptr ) LIBPULSE_pa_stream_set_underflow_callback
299 cdecl pa_stream_set_write_callback( ptr long ptr ) LIBPULSE_pa_stream_set_write_callback
300 cdecl pa_stream_trigger( ptr long ptr ) LIBPULSE_pa_stream_trigger
301 cdecl pa_stream_unref( ptr ) LIBPULSE_pa_stream_unref
302 cdecl pa_stream_update_sample_rate( ptr long long ptr ) LIBPULSE_pa_stream_update_sample_rate
303 cdecl pa_stream_update_timing_info( ptr long ptr ) LIBPULSE_pa_stream_update_timing_info
304 cdecl pa_stream_writable_size( ptr ) LIBPULSE_pa_stream_writable_size
305 cdecl pa_stream_write( ptr ptr long long long long ) LIBPULSE_pa_stream_write
306 cdecl pa_strerror( long ) LIBPULSE_pa_strerror

319 cdecl pa_threaded_mainloop_accept( ptr ) LIBPULSE_pa_threaded_mainloop_accept
320 cdecl pa_threaded_mainloop_free( ptr ) LIBPULSE_pa_threaded_mainloop_free
321 cdecl pa_threaded_mainloop_get_api( ptr ) LIBPULSE_pa_threaded_mainloop_get_api
322 cdecl pa_threaded_mainloop_get_retval( ptr ) LIBPULSE_pa_threaded_mainloop_get_retval
323 cdecl pa_threaded_mainloop_in_thread( ptr ) LIBPULSE_pa_threaded_mainloop_in_thread
324 cdecl pa_threaded_mainloop_lock( ptr ) LIBPULSE_pa_threaded_mainloop_lock
325 cdecl pa_threaded_mainloop_new() LIBPULSE_pa_threaded_mainloop_new
326 cdecl pa_threaded_mainloop_signal( ptr long ) LIBPULSE_pa_threaded_mainloop_signal
327 cdecl pa_threaded_mainloop_start( ptr ) LIBPULSE_pa_threaded_mainloop_start
328 cdecl pa_threaded_mainloop_stop( ptr ) LIBPULSE_pa_threaded_mainloop_stop
329 cdecl pa_threaded_mainloop_unlock( ptr ) LIBPULSE_pa_threaded_mainloop_unlock
330 cdecl pa_threaded_mainloop_wait( ptr ) LIBPULSE_pa_threaded_mainloop_wait

338 cdecl pa_usec_to_bytes( long ptr ) LIBPULSE_pa_usec_to_bytes
