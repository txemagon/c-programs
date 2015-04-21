#ifndef __DISPLAY_H__
#define __DISPLAY_H__

typedef enum { send=1, get, peep, done } Option;

#ifdef __cplusplus
extern "C" {
#endif
Option menu(void);
#ifdef __cplusplus
}
#endif

#endif
