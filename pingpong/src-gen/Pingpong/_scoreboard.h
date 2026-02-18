#ifndef _SCOREBOARD_H
#define _SCOREBOARD_H
#include "include/core/reactor.h"
#include "pythontarget.h"
#include <limits.h>
#include "low_level_platform/api/low_level_platform.h"
#include "include/api/schedule.h"
#include "include/core/reactor.h"
#include "include/core/reactor_common.h"
#include "include/core/threaded/scheduler.h"
#include "include/core/mixed_radix.h"
#include "include/core/port.h"
#include "include/core/environment.h"
int lf_reactor_c_main(int argc, const char* argv[]);
typedef generic_port_instance_struct _scoreboard_h1_t;
typedef generic_port_instance_struct _scoreboard_h2_t;
typedef struct {
    struct self_base_t base;
    char *_lf_name;
#line 21 "/Users/russl8/github/lf-py/pingpong/src-gen/Pingpong/_scoreboard.h"
#line 22 "/Users/russl8/github/lf-py/pingpong/src-gen/Pingpong/_scoreboard.h"
    _scoreboard_h1_t* _lf_h1;
    // width of -2 indicates that it is not a multiport.
    int _lf_h1_width;
    // Default input (in case it does not get connected)
    _scoreboard_h1_t _lf_default__h1;
    _scoreboard_h2_t* _lf_h2;
    // width of -2 indicates that it is not a multiport.
    int _lf_h2_width;
    // Default input (in case it does not get connected)
    _scoreboard_h2_t _lf_default__h2;
    trigger_t _lf__h1;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__h2;
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _scoreboard_self_t;
_scoreboard_self_t* new__scoreboard();
#endif // _SCOREBOARD_H
