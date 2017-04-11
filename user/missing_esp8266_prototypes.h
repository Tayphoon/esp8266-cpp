#ifndef MISSING_ESP8266_PROTOTYPES_H
#define MISSING_ESP8266_PROTOTYPES_H

#ifdef __cplusplus
extern "C" {
#endif // #ifdef __cplusplus

#include "c_types.h"
#include "os_type.h"

void *pvPortMalloc(size_t xWantedSize, char * debugFile, int line);
void ets_timer_arm_new(os_timer_t*, int, int, int);
void ets_timer_setfn(os_timer_t*, os_timer_func_t*, void*);
int os_printf_plus(const char *format, ...)  __attribute__ ((format (printf, 1, 2)));

#ifdef __cplusplus
}
#endif // #ifdef __cplusplus

#endif // #ifndef MISSING_ESP8266_PROTOTYPES_H
