#ifndef _PLAYER_H
#define _PLAYER_H
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
typedef generic_port_instance_struct _player_ballIn_t;
typedef generic_port_instance_struct _player_ballOut_t;
typedef generic_action_instance_struct _player_a_t;
typedef struct {
    struct self_base_t base;
    char *_lf_name;
    PyObject* _lf_py_reaction_function_0;
    PyObject* _lf_py_reaction_function_1;
    PyObject* _lf_py_reaction_function_2;
    #line 3 "/Users/russl8/github/lf-py/pingpong/src-gen/Pingpong/../../src/Pingpong.lf"
    PyObject* name;
    #line 3 "/Users/russl8/github/lf-py/pingpong/src-gen/Pingpong/../../src/Pingpong.lf"
    interval_t delay;
    #line 3 "/Users/russl8/github/lf-py/pingpong/src-gen/Pingpong/../../src/Pingpong.lf"
    PyObject* serve;
#line 31 "/Users/russl8/github/lf-py/pingpong/src-gen/Pingpong/_player.h"
    #line 6 "/Users/russl8/github/lf-py/pingpong/src-gen/Pingpong/../../src/Pingpong.lf"
    PyObject* timesHit;
#line 34 "/Users/russl8/github/lf-py/pingpong/src-gen/Pingpong/_player.h"
    _player_a_t _lf_a;
    _player_ballIn_t* _lf_ballIn;
    // width of -2 indicates that it is not a multiport.
    int _lf_ballIn_width;
    // Default input (in case it does not get connected)
    _player_ballIn_t _lf_default__ballIn;
    _player_ballOut_t _lf_ballOut;
    int _lf_ballOut_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    reaction_t _lf__reaction_2;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    trigger_t _lf__a;
    reaction_t* _lf__a_reactions[1];
    trigger_t _lf__ballIn;
    reaction_t* _lf__ballIn_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _player_self_t;
_player_self_t* new__player();
#endif // _PLAYER_H
