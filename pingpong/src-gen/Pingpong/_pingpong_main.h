#ifndef _PINGPONG_MAIN_H
#define _PINGPONG_MAIN_H
#include "include/core/reactor.h"
#include "__lf_gendelay_0.h"
#include "_player.h"
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
#line 21 "/Users/russl8/github/lf-py/pingpong/src-gen/Pingpong/_pingpong_main.h"
#line 22 "/Users/russl8/github/lf-py/pingpong/src-gen/Pingpong/_pingpong_main.h"
} _pingpong_main_main_self_t;
_pingpong_main_main_self_t* new__pingpong_main();
#endif // _PINGPONG_MAIN_H
