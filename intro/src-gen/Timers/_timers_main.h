#ifndef _TIMERS_MAIN_H
#define _TIMERS_MAIN_H
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
typedef generic_action_instance_struct _timers_main_a_t;
typedef struct {
    struct self_base_t base;
    char *_lf_name;
    PyObject* _lf_py_reaction_function_0;
    PyObject* _lf_py_reaction_function_1;
    #line 16 "/Users/russl8/github/lf-py/intro/src/./Timers.lf"
    interval_t start;
    #line 16 "/Users/russl8/github/lf-py/intro/src/./Timers.lf"
    interval_t incr;
#line 26 "/Users/russl8/github/lf-py/intro/src-gen/Timers/_timers_main.h"
    #line 17 "/Users/russl8/github/lf-py/intro/src/./Timers.lf"
    interval_t interval;
#line 29 "/Users/russl8/github/lf-py/intro/src-gen/Timers/_timers_main.h"
    _timers_main_a_t _lf_a;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    trigger_t _lf__a;
    reaction_t* _lf__a_reactions[1];
} _timers_main_main_self_t;
_timers_main_main_self_t* new__timers_main();
#endif // _TIMERS_MAIN_H
