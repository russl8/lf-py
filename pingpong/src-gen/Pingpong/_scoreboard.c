#include "include/api/schedule.h"
#include <string.h>
#include "low_level_platform/api/low_level_platform.h"
#include "include/Pingpong/Scoreboard.h"
#include "_scoreboard.h"
_scoreboard_self_t* new__scoreboard() {
    _scoreboard_self_t* self = (_scoreboard_self_t*)lf_new_reactor(sizeof(_scoreboard_self_t));
    // Set input by default to an always absent default input.
    self->_lf_h1 = &self->_lf_default__h1;
    // Set the default source reactor pointer
    self->_lf_default__h1._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_h2 = &self->_lf_default__h2;
    // Set the default source reactor pointer
    self->_lf_default__h2._base.source_reactor = (self_base_t*)self;
    self->_lf__h1.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__h1.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__h1.tmplt.type.element_size = sizeof(PyObject);
    self->_lf__h2.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__h2.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__h2.tmplt.type.element_size = sizeof(PyObject);
    return self;
}
