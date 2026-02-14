#ifndef _HELLOWORLD_MAIN_H
#define _HELLOWORLD_MAIN_H
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
typedef struct {
    struct self_base_t base;
    char *_lf_name;
    PyObject* _lf_py_reaction_function_0;
#line 20 "/Users/russl8/github/lf-py/intro/src-gen/Helloworld/_helloworld_main.h"
#line 21 "/Users/russl8/github/lf-py/intro/src-gen/Helloworld/_helloworld_main.h"
    reaction_t _lf__reaction_0;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
} _helloworld_main_main_self_t;
_helloworld_main_main_self_t* new__helloworld_main();
#endif // _HELLOWORLD_MAIN_H
