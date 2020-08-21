/*
 * libpulse.dll
 *
 * Generated from pulse/libpulse.dll by winedump.
 *
 * DO NOT SUBMIT GENERATED DLLS FOR INCLUSION INTO WINE!
 *
 */

#include "config.h"

#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "libpulse_dll.h"
#include "wine/debug.h"

WINE_DEFAULT_DEBUG_CHANNEL(libpulse);

BOOL WINAPI DllMain(HINSTANCE instance, DWORD reason, void *reserved)
{
    TRACE("(%p, %u, %p)\n", instance, reason, reserved);

    switch (reason)
    {
        case DLL_WINE_PREATTACH:
            return FALSE;    /* prefer native version */
        case DLL_PROCESS_ATTACH:
            DisableThreadLibraryCalls(instance);
            break;
    }

    return TRUE;
}




/******************************************************************
 *		pa_bytes_to_usec (LIBPULSE.5)
 *
 *
 */
pa_usec_t __cdecl LIBPULSE_pa_bytes_to_usec(uint64_t length, pa_sample_spec * spec)
{
	TRACE("((uint64_t)%ld,(pa_sample_spec *)%p): stub\n",(LONG)length,spec);
	return (pa_usec_t) 0;
}




/******************************************************************
 *		pa_context_connect (LIBPULSE.27)
 *
 *
 */
int __cdecl LIBPULSE_pa_context_connect(pa_context * c, char * server, pa_context_flags_t flags, pa_spawn_api * api)
{
	TRACE("((pa_context *)%p,(char *)%s,(pa_context_flags_t)%ld,(pa_spawn_api *)%p): stub\n",c,server,(LONG)flags,api);
	return (int) 0;
}
/******************************************************************
 *		pa_context_disconnect (LIBPULSE.28)
 *
 *
 */
void __cdecl LIBPULSE_pa_context_disconnect(pa_context * c)
{
	TRACE("((pa_context *)%p): stub\n",c);
}
/******************************************************************
 *		pa_context_drain (LIBPULSE.29)
 *
 *
 */
pa_operation * __cdecl LIBPULSE_pa_context_drain(pa_context * c, pa_context_notify_cb_t cb, void * userdata)
{
	TRACE("((pa_context *)%p,(pa_context_notify_cb_t)%ld,(void *)%p): stub\n",c,(LONG)cb,userdata);
	return (pa_operation *) 0;
}
/******************************************************************
 *		pa_context_errno (LIBPULSE.30)
 *
 *
 */
int __cdecl LIBPULSE_pa_context_errno(pa_context * c)
{
	TRACE("((pa_context *)%p): stub\n",c);
	return (int) 0;
}


/******************************************************************
 *		pa_context_get_server (LIBPULSE.47)
 *
 *
 */
char * __cdecl LIBPULSE_pa_context_get_server(pa_context * c)
{
	TRACE("((pa_context *)%p): stub\n",c);
	return (char *) 0;
}
/******************************************************************
 *		pa_context_get_server_info (LIBPULSE.48)
 *
 *
 */
pa_operation * __cdecl LIBPULSE_pa_context_get_server_info(pa_context * c, pa_server_info_cb_t cb, void * userdata)
{
	TRACE("((pa_context *)%p,(pa_server_info_cb_t)%ld,(void *)%p): stub\n",c,(LONG)cb,userdata);
	return (pa_operation *) 0;
}
/******************************************************************
 *		pa_context_get_server_protocol_version (LIBPULSE.49)
 *
 *
 */
uint32_t __cdecl LIBPULSE_pa_context_get_server_protocol_version(pa_context * c)
{
	TRACE("((pa_context *)%p): stub\n",c);
	return (uint32_t) 0;
}


/******************************************************************
 *		pa_context_get_state (LIBPULSE.60)
 *
 *
 */
pa_context_state_t __cdecl LIBPULSE_pa_context_get_state(pa_context * c)
{
	TRACE("((pa_context *)%p): stub\n",c);
	return (pa_context_state_t) 0;
}


/******************************************************************
 *		pa_context_is_local (LIBPULSE.62)
 *
 *
 */
int __cdecl LIBPULSE_pa_context_is_local(pa_context * c)
{
	TRACE("((pa_context *)%p): stub\n",c);
	return (int) 0;
}
/******************************************************************
 *		pa_context_is_pending (LIBPULSE.63)
 *
 *
 */
int __cdecl LIBPULSE_pa_context_is_pending(pa_context * c)
{
	TRACE("((pa_context *)%p): stub\n",c);
	return (int) 0;
}


/******************************************************************
 *		pa_context_new (LIBPULSE.72)
 *
 *
 */
pa_context * __cdecl LIBPULSE_pa_context_new(pa_mainloop_api * mainloop, char * name)
{
	TRACE("((pa_mainloop_api *)%p,(char *)%s): stub\n",mainloop,name);
	return (pa_context *) 0;
}
/******************************************************************
 *		pa_context_new_with_proplist (LIBPULSE.73)
 *
 *
 */
pa_context * __cdecl LIBPULSE_pa_context_new_with_proplist(pa_mainloop_api * mainloop, char * name, pa_proplist * p)
{
	TRACE("((pa_mainloop_api *)%p,(char *)%s,(pa_proplist *)%p): stub\n",mainloop,name,p);
	return (pa_context *) 0;
}

/******************************************************************
 *		pa_context_proplist_remove (LIBPULSE.76)
 *
 *
 */
pa_operation * __cdecl LIBPULSE_pa_context_proplist_remove(pa_context * c, char * keys, pa_context_success_cb_t cb, void * userdata)
{
	TRACE("((pa_context *)%p,(char *)%s,(pa_context_success_cb_t)%ld,(void *)%p): stub\n",c,keys,(LONG)cb,userdata);
	return (pa_operation *) 0;
}
/******************************************************************
 *		pa_context_proplist_update (LIBPULSE.77)
 *
 *
 */
pa_operation * __cdecl LIBPULSE_pa_context_proplist_update(pa_context * c, pa_update_mode_t mode, pa_proplist * p, pa_context_success_cb_t cb, void * userdata)
{
	TRACE("((pa_context *)%p,(pa_update_mode_t)%ld,(pa_proplist *)%p,(pa_context_success_cb_t)%ld,(void *)%p): stub\n",c,(LONG)mode,p,(LONG)cb,userdata);
	return (pa_operation *) 0;
}
/******************************************************************
 *		pa_context_ref (LIBPULSE.78)
 *
 *
 */
pa_context * __cdecl LIBPULSE_pa_context_ref(pa_context * c)
{
	TRACE("((pa_context *)%p): stub\n",c);
	return (pa_context *) 0;
}



/******************************************************************
 *		pa_context_set_event_callback (LIBPULSE.88)
 *
 *
 */
void __cdecl LIBPULSE_pa_context_set_event_callback(pa_context * p, pa_context_event_cb_t cb, void * userdata)
{
	TRACE("((pa_context *)%p,(pa_context_event_cb_t)%ld,(void *)%p): stub\n",p,(LONG)cb,userdata);
}
/******************************************************************
 *		pa_context_set_name (LIBPULSE.89)
 *
 *
 */
pa_operation * __cdecl LIBPULSE_pa_context_set_name(pa_context * c, char * name, pa_context_success_cb_t cb, void * userdata)
{
	TRACE("((pa_context *)%p,(char *)%s,(pa_context_success_cb_t)%ld,(void *)%p): stub\n",c,name,(LONG)cb,userdata);
	return (pa_operation *) 0;
}
/******************************************************************
 *		pa_context_set_state_callback (LIBPULSE.106)
 *
 *
 */
void __cdecl LIBPULSE_pa_context_set_state_callback(pa_context * c, pa_context_notify_cb_t cb, void * userdata)
{
	TRACE("((pa_context *)%p,(pa_context_notify_cb_t)%ld,(void *)%p): stub\n",c,(LONG)cb,userdata);
}
/******************************************************************
 *		pa_context_set_subscribe_callback (LIBPULSE.107)
 *
 *
 */
void __cdecl LIBPULSE_pa_context_set_subscribe_callback(pa_context * c, pa_context_subscribe_cb_t cb, void * userdata)
{
	TRACE("((pa_context *)%p,(pa_context_subscribe_cb_t)%ld,(void *)%p): stub\n",c,(LONG)cb,userdata);
}
/******************************************************************
 *		pa_context_stat (LIBPULSE.108)
 *
 *
 */
pa_operation * __cdecl LIBPULSE_pa_context_stat(pa_context * c, pa_stat_info_cb_t cb, void * userdata)
{
	TRACE("((pa_context *)%p,(pa_stat_info_cb_t)%ld,(void *)%p): stub\n",c,(LONG)cb,userdata);
	return (pa_operation *) 0;
}
/******************************************************************
 *		pa_context_subscribe (LIBPULSE.109)
 *
 *
 */
pa_operation * __cdecl LIBPULSE_pa_context_subscribe(pa_context * c, pa_subscription_mask_t m, pa_context_success_cb_t cb, void * userdata)
{
	TRACE("((pa_context *)%p,(pa_subscription_mask_t)%ld,(pa_context_success_cb_t)%ld,(void *)%p): stub\n",c,(LONG)m,(LONG)cb,userdata);
	return (pa_operation *) 0;
}
/******************************************************************
 *		pa_context_unref (LIBPULSE.115)
 *
 *
 */
void __cdecl LIBPULSE_pa_context_unref(pa_context * c)
{
	TRACE("((pa_context *)%p): stub\n",c);
}



/******************************************************************
 *		pa_mainloop_api_once (LIBPULSE.194)
 *
 *
 */
#if 0
__cdecl LIBPULSE_pa_mainloop_api_once()
{
	/* @stub in .spec */
}
#endif
/******************************************************************
 *		pa_mainloop_dispatch (LIBPULSE.195)
 *
 *
 */
int __cdecl LIBPULSE_pa_mainloop_dispatch(pa_mainloop * m)
{
	TRACE("((pa_mainloop *)%p): stub\n",m);
	return (int) 0;
}
/******************************************************************
 *		pa_mainloop_free (LIBPULSE.196)
 *
 *
 */
void __cdecl LIBPULSE_pa_mainloop_free(pa_mainloop * m)
{
	TRACE("((pa_mainloop *)%p): stub\n",m);
}
/******************************************************************
 *		pa_mainloop_get_api (LIBPULSE.197)
 *
 *
 */
pa_mainloop_api * __cdecl LIBPULSE_pa_mainloop_get_api(pa_mainloop * m)
{
	TRACE("((pa_mainloop *)%p): stub\n",m);
	return (pa_mainloop_api *) 0;
}
/******************************************************************
 *		pa_mainloop_get_retval (LIBPULSE.198)
 *
 *
 */
int __cdecl LIBPULSE_pa_mainloop_get_retval(pa_mainloop * m)
{
	TRACE("((pa_mainloop *)%p): stub\n",m);
	return (int) 0;
}
/******************************************************************
 *		pa_mainloop_iterate (LIBPULSE.199)
 *
 *
 */
int __cdecl LIBPULSE_pa_mainloop_iterate(pa_mainloop * m, int block, int * retval)
{
	TRACE("((pa_mainloop *)%p,(int)%ld,(int *)%p): stub\n",m,(LONG)block,retval);
	return (int) 0;
}
/******************************************************************
 *		pa_mainloop_new (LIBPULSE.200)
 *
 *
 */
pa_mainloop * __cdecl LIBPULSE_pa_mainloop_new(void)
{
	TRACE("(void): stub\n");
	return (pa_mainloop *) 0;
}
/******************************************************************
 *		pa_mainloop_poll (LIBPULSE.201)
 *
 *
 */
int __cdecl LIBPULSE_pa_mainloop_poll(pa_mainloop * m)
{
	TRACE("((pa_mainloop *)%p): stub\n",m);
	return (int) 0;
}
/******************************************************************
 *		pa_mainloop_prepare (LIBPULSE.202)
 *
 *
 */
int __cdecl LIBPULSE_pa_mainloop_prepare(pa_mainloop * m, int timeout)
{
	TRACE("((pa_mainloop *)%p,(int)%ld): stub\n",m,(LONG)timeout);
	return (int) 0;
}
/******************************************************************
 *		pa_mainloop_quit (LIBPULSE.203)
 *
 *
 */
void __cdecl LIBPULSE_pa_mainloop_quit(pa_mainloop * m, int retval)
{
	TRACE("((pa_mainloop *)%p,(int)%ld): stub\n",m,(LONG)retval);
}
/******************************************************************
 *		pa_mainloop_run (LIBPULSE.204)
 *
 *
 */
int __cdecl LIBPULSE_pa_mainloop_run(pa_mainloop * m, int * retval)
{
	TRACE("((pa_mainloop *)%p,(int *)%p): stub\n",m,retval);
	return (int) 0;
}
/******************************************************************
 *		pa_mainloop_set_poll_func (LIBPULSE.205)
 *
 *
 */
void __cdecl LIBPULSE_pa_mainloop_set_poll_func(pa_mainloop * m, pa_poll_func poll_func, void * userdata)
{
	TRACE("((pa_mainloop *)%p,(pa_poll_func)%ld,(void *)%p): stub\n",m,(LONG)poll_func,userdata);
}
/******************************************************************
 *		pa_mainloop_wakeup (LIBPULSE.206)
 *
 *
 */
void __cdecl LIBPULSE_pa_mainloop_wakeup(pa_mainloop * m)
{
	TRACE("((pa_mainloop *)%p): stub\n",m);
}
/******************************************************************
 *		pa_msleep (LIBPULSE.207)
 *
 *
 */
int __cdecl LIBPULSE_pa_msleep(unsigned long t)
{
	TRACE("((unsigned long)%ld): stub\n",(LONG)t);
	return (int) 0;
}
/******************************************************************
 *		pa_operation_cancel (LIBPULSE.208)
 *
 *
 */
void __cdecl LIBPULSE_pa_operation_cancel(pa_operation * o)
{
	TRACE("((pa_operation *)%p): stub\n",o);
}
/******************************************************************
 *		pa_operation_get_state (LIBPULSE.209)
 *
 *
 */
pa_operation_state_t __cdecl LIBPULSE_pa_operation_get_state(pa_operation * o)
{
	TRACE("((pa_operation *)%p): stub\n",o);
	return (pa_operation_state_t) 0;
}
/******************************************************************
 *		pa_operation_ref (LIBPULSE.210)
 *
 *
 */
pa_operation * __cdecl LIBPULSE_pa_operation_ref(pa_operation * o)
{
	TRACE("((pa_operation *)%p): stub\n",o);
	return (pa_operation *) 0;
}
/******************************************************************
 *		pa_operation_unref (LIBPULSE.211)
 *
 *
 */
void __cdecl LIBPULSE_pa_operation_unref(pa_operation * o)
{
	TRACE("((pa_operation *)%p): stub\n",o);
}





/******************************************************************
 *		pa_proplist_clear (LIBPULSE.214)
 *
 *
 */
void __cdecl LIBPULSE_pa_proplist_clear(pa_proplist * p)
{
	TRACE("((pa_proplist *)%p): stub\n",p);
}
/******************************************************************
 *		pa_proplist_contains (LIBPULSE.215)
 *
 *
 */
int __cdecl LIBPULSE_pa_proplist_contains(pa_proplist * p, char * key)
{
	TRACE("((pa_proplist *)%p,(char *)%s): stub\n",p,key);
	return (int) 0;
}
/******************************************************************
 *		pa_proplist_copy (LIBPULSE.216)
 *
 *
 */
pa_proplist * __cdecl LIBPULSE_pa_proplist_copy(pa_proplist * p)
{
	TRACE("((pa_proplist *)%p): stub\n",p);
	return (pa_proplist *) 0;
}
/******************************************************************
 *		pa_proplist_equal (LIBPULSE.217)
 *
 *
 */
int __cdecl LIBPULSE_pa_proplist_equal(pa_proplist * a, pa_proplist * b)
{
	TRACE("((pa_proplist *)%p,(pa_proplist *)%p): stub\n",a,b);
	return (int) 0;
}
/******************************************************************
 *		pa_proplist_free (LIBPULSE.218)
 *
 *
 */
void __cdecl LIBPULSE_pa_proplist_free(pa_proplist * p)
{
	TRACE("((pa_proplist *)%p): stub\n",p);
}
/******************************************************************
 *		pa_proplist_from_string (LIBPULSE.219)
 *
 *
 */
pa_proplist * __cdecl LIBPULSE_pa_proplist_from_string(char * s)
{
	TRACE("((char *)%s): stub\n",s);
	return (pa_proplist *) 0;
}
/******************************************************************
 *		pa_proplist_get (LIBPULSE.220)
 *
 *
 */
int __cdecl LIBPULSE_pa_proplist_get(pa_proplist * p, char * key, void ** data, size_t * nbytes)
{
	TRACE("((pa_proplist *)%p,(char *)%s,(void **)%p,(size_t *)%p): stub\n",p,key,data,nbytes);
	return (int) 0;
}
/******************************************************************
 *		pa_proplist_gets (LIBPULSE.221)
 *
 *
 */
char * __cdecl LIBPULSE_pa_proplist_gets(pa_proplist * p, char * key)
{
	TRACE("((pa_proplist *)%p,(char *)%s): stub\n",p,key);
	return (char *) 0;
}
/******************************************************************
 *		pa_proplist_isempty (LIBPULSE.222)
 *
 *
 */
int __cdecl LIBPULSE_pa_proplist_isempty(pa_proplist * p)
{
	TRACE("((pa_proplist *)%p): stub\n",p);
	return (int) 0;
}
/******************************************************************
 *		pa_proplist_iterate (LIBPULSE.223)
 *
 *
 */
char * __cdecl LIBPULSE_pa_proplist_iterate(pa_proplist * p, void ** state)
{
	TRACE("((pa_proplist *)%p,(void **)%p): stub\n",p,state);
	return (char *) 0;
}
/******************************************************************
 *		pa_proplist_new (LIBPULSE.224)
 *
 *
 */
pa_proplist * __cdecl LIBPULSE_pa_proplist_new(void)
{
	TRACE("(void): stub\n");
	return (pa_proplist *) 0;
}
/******************************************************************
 *		pa_proplist_set (LIBPULSE.225)
 *
 *
 */
int __cdecl LIBPULSE_pa_proplist_set(pa_proplist * p, char * key, void * data, size_t nbytes)
{
	TRACE("((pa_proplist *)%p,(char *)%s,(void *)%p,(size_t)%ld): stub\n",p,key,data,(LONG)nbytes);
	return (int) 0;
}


/******************************************************************
 *		pa_proplist_setp (LIBPULSE.227)
 *
 *
 */
int __cdecl LIBPULSE_pa_proplist_setp(pa_proplist * p, char * pair)
{
	TRACE("((pa_proplist *)%p,(char *)%s): stub\n",p,pair);
	return (int) 0;
}
/******************************************************************
 *		pa_proplist_sets (LIBPULSE.228)
 *
 *
 */
int __cdecl LIBPULSE_pa_proplist_sets(pa_proplist * p, char * key, char * value)
{
	TRACE("((pa_proplist *)%p,(char *)%s,(char *)%s): stub\n",p,key,value);
	return (int) 0;
}
/******************************************************************
 *		pa_proplist_size (LIBPULSE.229)
 *
 *
 */
unsigned int __cdecl LIBPULSE_pa_proplist_size(pa_proplist * p)
{
	TRACE("((pa_proplist *)%p): stub\n",p);
	return (unsigned int) 0;
}
/******************************************************************
 *		pa_proplist_to_string (LIBPULSE.230)
 *
 *
 */
char * __cdecl LIBPULSE_pa_proplist_to_string(pa_proplist * p)
{
	TRACE("((pa_proplist *)%p): stub\n",p);
	return (char *) 0;
}
/******************************************************************
 *		pa_proplist_to_string_sep (LIBPULSE.231)
 *
 *
 */
char * __cdecl LIBPULSE_pa_proplist_to_string_sep(pa_proplist * p, char * sep)
{
	TRACE("((pa_proplist *)%p,(char *)%s): stub\n",p,sep);
	return (char *) 0;
}
/******************************************************************
 *		pa_proplist_unset (LIBPULSE.232)
 *
 *
 */
int __cdecl LIBPULSE_pa_proplist_unset(pa_proplist * p, char * key)
{
	TRACE("((pa_proplist *)%p,(char *)%s): stub\n",p,key);
	return (int) 0;
}
/******************************************************************
 *		pa_proplist_unset_many (LIBPULSE.233)
 *
 *
 */
int __cdecl LIBPULSE_pa_proplist_unset_many(pa_proplist * p, char * keys)
{
	TRACE("((pa_proplist *)%p,(char *)%s): stub\n",p,keys);
	return (int) 0;
}
/******************************************************************
 *		pa_proplist_update (LIBPULSE.234)
 *
 *
 */
void __cdecl LIBPULSE_pa_proplist_update(pa_proplist * p, pa_update_mode_t mode, pa_proplist * other)
{
	TRACE("((pa_proplist *)%p,(pa_update_mode_t)%ld,(pa_proplist *)%p): stub\n",p,(LONG)mode,other);
}









/******************************************************************
 *		pa_stream_begin_write (LIBPULSE.250)
 *
 *
 */
int __cdecl LIBPULSE_pa_stream_begin_write(pa_stream * s, void ** data, size_t * nbytes)
{
	TRACE("((pa_stream *)%p,(void **)%p,(size_t *)%p): stub\n",s,data,nbytes);
	return (int) 0;
}
/******************************************************************
 *		pa_stream_cancel_write (LIBPULSE.251)
 *
 *
 */
int __cdecl LIBPULSE_pa_stream_cancel_write(pa_stream * s)
{
	TRACE("((pa_stream *)%p): stub\n",s);
	return (int) 0;
}
/******************************************************************
 *		pa_stream_connect_playback (LIBPULSE.252)
 *
 *
 */
int __cdecl LIBPULSE_pa_stream_connect_playback(pa_stream * s, char * dev, pa_buffer_attr * attr, pa_stream_flags_t flags, pa_cvolume * volume, pa_stream * sync_stream)
{
	TRACE("((pa_stream *)%p,(char *)%s,(pa_buffer_attr *)%p,(pa_stream_flags_t)%ld,(pa_cvolume *)%p,(pa_stream *)%p): stub\n",s,dev,attr,(LONG)flags,volume,sync_stream);
	return (int) 0;
}


/******************************************************************
 *		pa_stream_cork (LIBPULSE.255)
 *
 *
 */
pa_operation * __cdecl LIBPULSE_pa_stream_cork(pa_stream * s, int b, pa_stream_success_cb_t cb, void * userdata)
{
	TRACE("((pa_stream *)%p,(int)%ld,(pa_stream_success_cb_t)%ld,(void *)%p): stub\n",s,(LONG)b,(LONG)cb,userdata);
	return (pa_operation *) 0;
}
/******************************************************************
 *		pa_stream_disconnect (LIBPULSE.256)
 *
 *
 */
int __cdecl LIBPULSE_pa_stream_disconnect(pa_stream * s)
{
	TRACE("((pa_stream *)%p): stub\n",s);
	return (int) 0;
}
/******************************************************************
 *		pa_stream_drain (LIBPULSE.257)
 *
 *
 */
pa_operation * __cdecl LIBPULSE_pa_stream_drain(pa_stream * s, pa_stream_success_cb_t cb, void * userdata)
{
	TRACE("((pa_stream *)%p,(pa_stream_success_cb_t)%ld,(void *)%p): stub\n",s,(LONG)cb,userdata);
	return (pa_operation *) 0;
}
/******************************************************************
 *		pa_stream_drop (LIBPULSE.258)
 *
 *
 */
int __cdecl LIBPULSE_pa_stream_drop(pa_stream * s)
{
	TRACE("((pa_stream *)%p): stub\n",s);
	return (int) 0;
}


/******************************************************************
 *		pa_stream_flush (LIBPULSE.260)
 *
 *
 */
pa_operation * __cdecl LIBPULSE_pa_stream_flush(pa_stream * s, pa_stream_success_cb_t cb, void * userdata)
{
	TRACE("((pa_stream *)%p,(pa_stream_success_cb_t)%ld,(void *)%p): stub\n",s,(LONG)cb,userdata);
	return (pa_operation *) 0;
}
/******************************************************************
 *		pa_stream_get_buffer_attr (LIBPULSE.261)
 *
 *
 */
pa_buffer_attr * __cdecl LIBPULSE_pa_stream_get_buffer_attr(pa_stream * s)
{
	TRACE("((pa_stream *)%p): stub\n",s);
	return (pa_buffer_attr *) 0;
}
/******************************************************************
 *		pa_stream_get_channel_map (LIBPULSE.262)
 *
 *
 */
pa_channel_map * __cdecl LIBPULSE_pa_stream_get_channel_map(pa_stream * s)
{
	TRACE("((pa_stream *)%p): stub\n",s);
	return (pa_channel_map *) 0;
}
/******************************************************************
 *		pa_stream_get_context (LIBPULSE.263)
 *
 *
 */
pa_context * __cdecl LIBPULSE_pa_stream_get_context(pa_stream * s)
{
	TRACE("((pa_stream *)%p): stub\n",s);
	return (pa_context *) 0;
}
/******************************************************************
 *		pa_stream_get_device_index (LIBPULSE.264)
 *
 *
 */
uint32_t __cdecl LIBPULSE_pa_stream_get_device_index(pa_stream * s)
{
	TRACE("((pa_stream *)%p): stub\n",s);
	return (uint32_t) 0;
}
/******************************************************************
 *		pa_stream_get_device_name (LIBPULSE.265)
 *
 *
 */
char * __cdecl LIBPULSE_pa_stream_get_device_name(pa_stream * s)
{
	TRACE("((pa_stream *)%p): stub\n",s);
	return (char *) 0;
}

/******************************************************************
 *		pa_stream_get_index (LIBPULSE.267)
 *
 *
 */
uint32_t __cdecl LIBPULSE_pa_stream_get_index(pa_stream * s)
{
	TRACE("((pa_stream *)%p): stub\n",s);
	return (uint32_t) 0;
}
/******************************************************************
 *		pa_stream_get_latency (LIBPULSE.268)
 *
 *
 */
int __cdecl LIBPULSE_pa_stream_get_latency(pa_stream * s, pa_usec_t * r_usec, int * negative)
{
	TRACE("((pa_stream *)%p,(pa_usec_t *)%p,(int *)%p): stub\n",s,r_usec,negative);
	return (int) 0;
}
/******************************************************************
 *		pa_stream_get_monitor_stream (LIBPULSE.269)
 *
 *
 */
uint32_t __cdecl LIBPULSE_pa_stream_get_monitor_stream(pa_stream * s)
{
	TRACE("((pa_stream *)%p): stub\n",s);
	return (uint32_t) 0;
}
/******************************************************************
 *		pa_stream_get_sample_spec (LIBPULSE.270)
 *
 *
 */
pa_sample_spec * __cdecl LIBPULSE_pa_stream_get_sample_spec(pa_stream * s)
{
	TRACE("((pa_stream *)%p): stub\n",s);
	return (pa_sample_spec *) 0;
}
/******************************************************************
 *		pa_stream_get_state (LIBPULSE.271)
 *
 *
 */
pa_stream_state_t __cdecl LIBPULSE_pa_stream_get_state(pa_stream * s)
{
	TRACE("((pa_stream *)%p): stub\n",s);
	return (pa_stream_state_t) 0;
}
/******************************************************************
 *		pa_stream_get_time (LIBPULSE.272)
 *
 *
 */
int __cdecl LIBPULSE_pa_stream_get_time(pa_stream * s, pa_usec_t * r_usec)
{
	TRACE("((pa_stream *)%p,(pa_usec_t *)%p): stub\n",s,r_usec);
	return (int) 0;
}
/******************************************************************
 *		pa_stream_get_timing_info (LIBPULSE.273)
 *
 *
 */
pa_timing_info * __cdecl LIBPULSE_pa_stream_get_timing_info(pa_stream * s)
{
	TRACE("((pa_stream *)%p): stub\n",s);
	return (pa_timing_info *) 0;
}
/******************************************************************
 *		pa_stream_get_underflow_index (LIBPULSE.274)
 *
 *
 */
int64_t __cdecl LIBPULSE_pa_stream_get_underflow_index(pa_stream * p)
{
	TRACE("((pa_stream *)%p): stub\n",p);
	return (int64_t) 0;
}
/******************************************************************
 *		pa_stream_is_corked (LIBPULSE.275)
 *
 *
 */
int __cdecl LIBPULSE_pa_stream_is_corked(pa_stream * s)
{
	TRACE("((pa_stream *)%p): stub\n",s);
	return (int) 0;
}
/******************************************************************
 *		pa_stream_is_suspended (LIBPULSE.276)
 *
 *
 */
int __cdecl LIBPULSE_pa_stream_is_suspended(pa_stream * s)
{
	TRACE("((pa_stream *)%p): stub\n",s);
	return (int) 0;
}
/******************************************************************
 *		pa_stream_new (LIBPULSE.277)
 *
 *
 */
pa_stream * __cdecl LIBPULSE_pa_stream_new(pa_context * c, char * name, pa_sample_spec * ss, pa_channel_map * map)
{
	TRACE("((pa_context *)%p,(char *)%s,(pa_sample_spec *)%p,(pa_channel_map *)%p): stub\n",c,name,ss,map);
	return (pa_stream *) 0;
}
/******************************************************************
 *		pa_stream_new_extended (LIBPULSE.278)
 *
 *
 */
pa_stream * __cdecl LIBPULSE_pa_stream_new_extended(pa_context * c, char * name, pa_format_info * arg2, unsigned int n_formats, pa_proplist * p)
{
	TRACE("((pa_context *)%p,(char *)%s,(pa_format_info *)%p,(unsigned int)%ld,(pa_proplist *)%p): stub\n",c,name,arg2,(LONG)n_formats,p);
	return (pa_stream *) 0;
}
/******************************************************************
 *		pa_stream_new_with_proplist (LIBPULSE.279)
 *
 *
 */
pa_stream * __cdecl LIBPULSE_pa_stream_new_with_proplist(pa_context * c, char * name, pa_sample_spec * ss, pa_channel_map * map, pa_proplist * p)
{
	TRACE("((pa_context *)%p,(char *)%s,(pa_sample_spec *)%p,(pa_channel_map *)%p,(pa_proplist *)%p): stub\n",c,name,ss,map,p);
	return (pa_stream *) 0;
}
/******************************************************************
 *		pa_stream_peek (LIBPULSE.280)
 *
 *
 */
int __cdecl LIBPULSE_pa_stream_peek(pa_stream * s, void ** data, size_t * length)
{
	TRACE("((pa_stream *)%p,(void **)%p,(size_t *)%p): stub\n",s,data,length);
	return (int) 0;
}
/******************************************************************
 *		pa_stream_prebuf (LIBPULSE.281)
 *
 *
 */
pa_operation * __cdecl LIBPULSE_pa_stream_prebuf(pa_stream * s, pa_stream_success_cb_t cb, void * userdata)
{
	TRACE("((pa_stream *)%p,(pa_stream_success_cb_t)%ld,(void *)%p): stub\n",s,(LONG)cb,userdata);
	return (pa_operation *) 0;
}
/******************************************************************
 *		pa_stream_proplist_remove (LIBPULSE.282)
 *
 *
 */
pa_operation * __cdecl LIBPULSE_pa_stream_proplist_remove(pa_stream * s, char * keys, pa_stream_success_cb_t cb, void * userdata)
{
	TRACE("((pa_stream *)%p,(char *)%s,(pa_stream_success_cb_t)%ld,(void *)%p): stub\n",s,keys,(LONG)cb,userdata);
	return (pa_operation *) 0;
}
/******************************************************************
 *		pa_stream_proplist_update (LIBPULSE.283)
 *
 *
 */
pa_operation * __cdecl LIBPULSE_pa_stream_proplist_update(pa_stream * s, pa_update_mode_t mode, pa_proplist * p, pa_stream_success_cb_t cb, void * userdata)
{
	TRACE("((pa_stream *)%p,(pa_update_mode_t)%ld,(pa_proplist *)%p,(pa_stream_success_cb_t)%ld,(void *)%p): stub\n",s,(LONG)mode,p,(LONG)cb,userdata);
	return (pa_operation *) 0;
}
/******************************************************************
 *		pa_stream_readable_size (LIBPULSE.284)
 *
 *
 */
size_t __cdecl LIBPULSE_pa_stream_readable_size(pa_stream * s)
{
	TRACE("((pa_stream *)%p): stub\n",s);
	return (size_t) 0;
}
/******************************************************************
 *		pa_stream_ref (LIBPULSE.285)
 *
 *
 */
pa_stream * __cdecl LIBPULSE_pa_stream_ref(pa_stream * s)
{
	TRACE("((pa_stream *)%p): stub\n",s);
	return (pa_stream *) 0;
}
/******************************************************************
 *		pa_stream_set_buffer_attr (LIBPULSE.286)
 *
 *
 */
pa_operation * __cdecl LIBPULSE_pa_stream_set_buffer_attr(pa_stream * s, pa_buffer_attr * attr, pa_stream_success_cb_t cb, void * userdata)
{
	TRACE("((pa_stream *)%p,(pa_buffer_attr *)%p,(pa_stream_success_cb_t)%ld,(void *)%p): stub\n",s,attr,(LONG)cb,userdata);
	return (pa_operation *) 0;
}
/******************************************************************
 *		pa_stream_set_buffer_attr_callback (LIBPULSE.287)
 *
 *
 */
void __cdecl LIBPULSE_pa_stream_set_buffer_attr_callback(pa_stream * s, pa_stream_notify_cb_t cb, void * userdata)
{
	TRACE("((pa_stream *)%p,(pa_stream_notify_cb_t)%ld,(void *)%p): stub\n",s,(LONG)cb,userdata);
}
/******************************************************************
 *		pa_stream_set_event_callback (LIBPULSE.288)
 *
 *
 */
void __cdecl LIBPULSE_pa_stream_set_event_callback(pa_stream * s, pa_stream_event_cb_t cb, void * userdata)
{
	TRACE("((pa_stream *)%p,(pa_stream_event_cb_t)%ld,(void *)%p): stub\n",s,(LONG)cb,userdata);
}
/******************************************************************
 *		pa_stream_set_latency_update_callback (LIBPULSE.289)
 *
 *
 */
void __cdecl LIBPULSE_pa_stream_set_latency_update_callback(pa_stream * s, pa_stream_notify_cb_t cb, void * userdata)
{
	TRACE("((pa_stream *)%p,(pa_stream_notify_cb_t)%ld,(void *)%p): stub\n",s,(LONG)cb,userdata);
}
/******************************************************************
 *		pa_stream_set_monitor_stream (LIBPULSE.290)
 *
 *
 */
int __cdecl LIBPULSE_pa_stream_set_monitor_stream(pa_stream * s, uint32_t sink_input_idx)
{
	TRACE("((pa_stream *)%p,(uint32_t)%ld): stub\n",s,(LONG)sink_input_idx);
	return (int) 0;
}
/******************************************************************
 *		pa_stream_set_moved_callback (LIBPULSE.291)
 *
 *
 */
void __cdecl LIBPULSE_pa_stream_set_moved_callback(pa_stream * s, pa_stream_notify_cb_t cb, void * userdata)
{
	TRACE("((pa_stream *)%p,(pa_stream_notify_cb_t)%ld,(void *)%p): stub\n",s,(LONG)cb,userdata);
}
/******************************************************************
 *		pa_stream_set_name (LIBPULSE.292)
 *
 *
 */
pa_operation * __cdecl LIBPULSE_pa_stream_set_name(pa_stream * s, char * name, pa_stream_success_cb_t cb, void * userdata)
{
	TRACE("((pa_stream *)%p,(char *)%s,(pa_stream_success_cb_t)%ld,(void *)%p): stub\n",s,name,(LONG)cb,userdata);
	return (pa_operation *) 0;
}
/******************************************************************
 *		pa_stream_set_overflow_callback (LIBPULSE.293)
 *
 *
 */
void __cdecl LIBPULSE_pa_stream_set_overflow_callback(pa_stream * s, pa_stream_notify_cb_t cb, void * userdata)
{
	TRACE("((pa_stream *)%p,(pa_stream_notify_cb_t)%ld,(void *)%p): stub\n",s,(LONG)cb,userdata);
}
/******************************************************************
 *		pa_stream_set_read_callback (LIBPULSE.294)
 *
 *
 */
void __cdecl LIBPULSE_pa_stream_set_read_callback(pa_stream * s, pa_stream_request_cb_t cb, void * userdata)
{
	TRACE("((pa_stream *)%p,(pa_stream_request_cb_t)%ld,(void *)%p): stub\n",s,(LONG)cb,userdata);
}
/******************************************************************
 *		pa_stream_set_started_callback (LIBPULSE.295)
 *
 *
 */
void __cdecl LIBPULSE_pa_stream_set_started_callback(pa_stream * s, pa_stream_notify_cb_t cb, void * userdata)
{
	TRACE("((pa_stream *)%p,(pa_stream_notify_cb_t)%ld,(void *)%p): stub\n",s,(LONG)cb,userdata);
}
/******************************************************************
 *		pa_stream_set_state_callback (LIBPULSE.296)
 *
 *
 */
void __cdecl LIBPULSE_pa_stream_set_state_callback(pa_stream * s, pa_stream_notify_cb_t cb, void * userdata)
{
	TRACE("((pa_stream *)%p,(pa_stream_notify_cb_t)%ld,(void *)%p): stub\n",s,(LONG)cb,userdata);
}
/******************************************************************
 *		pa_stream_set_suspended_callback (LIBPULSE.297)
 *
 *
 */
void __cdecl LIBPULSE_pa_stream_set_suspended_callback(pa_stream * s, pa_stream_notify_cb_t cb, void * userdata)
{
	TRACE("((pa_stream *)%p,(pa_stream_notify_cb_t)%ld,(void *)%p): stub\n",s,(LONG)cb,userdata);
}
/******************************************************************
 *		pa_stream_set_underflow_callback (LIBPULSE.298)
 *
 *
 */
void __cdecl LIBPULSE_pa_stream_set_underflow_callback(pa_stream * s, pa_stream_notify_cb_t cb, void * userdata)
{
	TRACE("((pa_stream *)%p,(pa_stream_notify_cb_t)%ld,(void *)%p): stub\n",s,(LONG)cb,userdata);
}
/******************************************************************
 *		pa_stream_set_write_callback (LIBPULSE.299)
 *
 *
 */
void __cdecl LIBPULSE_pa_stream_set_write_callback(pa_stream * s, pa_stream_request_cb_t cb, void * userdata)
{
	TRACE("((pa_stream *)%p,(pa_stream_request_cb_t)%ld,(void *)%p): stub\n",s,(LONG)cb,userdata);
}
/******************************************************************
 *		pa_stream_trigger (LIBPULSE.300)
 *
 *
 */
pa_operation * __cdecl LIBPULSE_pa_stream_trigger(pa_stream * s, pa_stream_success_cb_t cb, void * userdata)
{
	TRACE("((pa_stream *)%p,(pa_stream_success_cb_t)%ld,(void *)%p): stub\n",s,(LONG)cb,userdata);
	return (pa_operation *) 0;
}
/******************************************************************
 *		pa_stream_unref (LIBPULSE.301)
 *
 *
 */
void __cdecl LIBPULSE_pa_stream_unref(pa_stream * s)
{
	TRACE("((pa_stream *)%p): stub\n",s);
}
/******************************************************************
 *		pa_stream_update_sample_rate (LIBPULSE.302)
 *
 *
 */
pa_operation * __cdecl LIBPULSE_pa_stream_update_sample_rate(pa_stream * s, uint32_t rate, pa_stream_success_cb_t cb, void * userdata)
{
	TRACE("((pa_stream *)%p,(uint32_t)%ld,(pa_stream_success_cb_t)%ld,(void *)%p): stub\n",s,(LONG)rate,(LONG)cb,userdata);
	return (pa_operation *) 0;
}
/******************************************************************
 *		pa_stream_update_timing_info (LIBPULSE.303)
 *
 *
 */
pa_operation * __cdecl LIBPULSE_pa_stream_update_timing_info(pa_stream * s, pa_stream_success_cb_t cb, void * userdata)
{
	TRACE("((pa_stream *)%p,(pa_stream_success_cb_t)%ld,(void *)%p): stub\n",s,(LONG)cb,userdata);
	return (pa_operation *) 0;
}
/******************************************************************
 *		pa_stream_writable_size (LIBPULSE.304)
 *
 *
 */
size_t __cdecl LIBPULSE_pa_stream_writable_size(pa_stream * s)
{
	TRACE("((pa_stream *)%p): stub\n",s);
	return (size_t) 0;
}
/******************************************************************
 *		pa_stream_write (LIBPULSE.305)
 *
 *
 */
int __cdecl LIBPULSE_pa_stream_write(pa_stream * s, void * data, size_t length, pa_free_cb_t free_cb, int64_t offset, pa_seek_mode_t seek)
{
	TRACE("((pa_stream *)%p,(void *)%p,(size_t)%ld,(pa_free_cb_t)%ld,(int64_t)%ld,(pa_seek_mode_t)%ld): stub\n",s,data,(LONG)length,(LONG)free_cb,(LONG)offset,(LONG)seek);
	return (int) 0;
}
/******************************************************************
 *		pa_strerror (LIBPULSE.306)
 *
 *
 */
char * __cdecl LIBPULSE_pa_strerror(int error)
{
	TRACE("((int)%ld): stub\n",(LONG)error);
	return (char *) 0;
}













/******************************************************************
 *		pa_threaded_mainloop_accept (LIBPULSE.319)
 *
 *
 */
void __cdecl LIBPULSE_pa_threaded_mainloop_accept(pa_threaded_mainloop * m)
{
	TRACE("((pa_threaded_mainloop *)%p): stub\n",m);
}
/******************************************************************
 *		pa_threaded_mainloop_free (LIBPULSE.320)
 *
 *
 */
void __cdecl LIBPULSE_pa_threaded_mainloop_free(pa_threaded_mainloop * m)
{
	TRACE("((pa_threaded_mainloop *)%p): stub\n",m);
}
/******************************************************************
 *		pa_threaded_mainloop_get_api (LIBPULSE.321)
 *
 *
 */
pa_mainloop_api * __cdecl LIBPULSE_pa_threaded_mainloop_get_api(pa_threaded_mainloop * m)
{
	TRACE("((pa_threaded_mainloop *)%p): stub\n",m);
	return (pa_mainloop_api *) 0;
}
/******************************************************************
 *		pa_threaded_mainloop_get_retval (LIBPULSE.322)
 *
 *
 */
int __cdecl LIBPULSE_pa_threaded_mainloop_get_retval(pa_threaded_mainloop * m)
{
	TRACE("((pa_threaded_mainloop *)%p): stub\n",m);
	return (int) 0;
}
/******************************************************************
 *		pa_threaded_mainloop_in_thread (LIBPULSE.323)
 *
 *
 */
int __cdecl LIBPULSE_pa_threaded_mainloop_in_thread(pa_threaded_mainloop * m)
{
	TRACE("((pa_threaded_mainloop *)%p): stub\n",m);
	return (int) 0;
}
/******************************************************************
 *		pa_threaded_mainloop_lock (LIBPULSE.324)
 *
 *
 */
void __cdecl LIBPULSE_pa_threaded_mainloop_lock(pa_threaded_mainloop * m)
{
	TRACE("((pa_threaded_mainloop *)%p): stub\n",m);
}
/******************************************************************
 *		pa_threaded_mainloop_new (LIBPULSE.325)
 *
 *
 */
pa_threaded_mainloop * __cdecl LIBPULSE_pa_threaded_mainloop_new(void)
{
	TRACE("(void): stub\n");
	return (pa_threaded_mainloop *) 0;
}
/******************************************************************
 *		pa_threaded_mainloop_signal (LIBPULSE.326)
 *
 *
 */
void __cdecl LIBPULSE_pa_threaded_mainloop_signal(pa_threaded_mainloop * m, int wait_for_accept)
{
	TRACE("((pa_threaded_mainloop *)%p,(int)%ld): stub\n",m,(LONG)wait_for_accept);
}
/******************************************************************
 *		pa_threaded_mainloop_start (LIBPULSE.327)
 *
 *
 */
int __cdecl LIBPULSE_pa_threaded_mainloop_start(pa_threaded_mainloop * m)
{
	TRACE("((pa_threaded_mainloop *)%p): stub\n",m);
	return (int) 0;
}
/******************************************************************
 *		pa_threaded_mainloop_stop (LIBPULSE.328)
 *
 *
 */
void __cdecl LIBPULSE_pa_threaded_mainloop_stop(pa_threaded_mainloop * m)
{
	TRACE("((pa_threaded_mainloop *)%p): stub\n",m);
}
/******************************************************************
 *		pa_threaded_mainloop_unlock (LIBPULSE.329)
 *
 *
 */
void __cdecl LIBPULSE_pa_threaded_mainloop_unlock(pa_threaded_mainloop * m)
{
	TRACE("((pa_threaded_mainloop *)%p): stub\n",m);
}
/******************************************************************
 *		pa_threaded_mainloop_wait (LIBPULSE.330)
 *
 *
 */
void __cdecl LIBPULSE_pa_threaded_mainloop_wait(pa_threaded_mainloop * m)
{
	TRACE("((pa_threaded_mainloop *)%p): stub\n",m);
}


/******************************************************************
 *		pa_usec_to_bytes (LIBPULSE.338)
 *
 *
 */
size_t __cdecl LIBPULSE_pa_usec_to_bytes(pa_usec_t t, pa_sample_spec * spec)
{
	TRACE("((pa_usec_t)%ld,(pa_sample_spec *)%p): stub\n",(LONG)t,spec);
	return (size_t) 0;
}
