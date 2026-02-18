#include "include/api/schedule.h"
#include <string.h>
#include "low_level_platform/api/low_level_platform.h"
#include "include/Pingpong/Pingpong.h"
#include "_pingpong_main.h"
_pingpong_main_main_self_t* new__pingpong_main() {
    _pingpong_main_main_self_t* self = (_pingpong_main_main_self_t*)lf_new_reactor(sizeof(_pingpong_main_main_self_t));

    return self;
}
