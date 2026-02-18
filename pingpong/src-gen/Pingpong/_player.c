#include "include/api/schedule.h"
#include <string.h>
#include "low_level_platform/api/low_level_platform.h"
#include "include/Pingpong/Player.h"
#include "_player.h"
#include "include/api/reaction_macros.h"
void _playerreaction_function_0(void* instance_args){
    _player_self_t* self = (_player_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _player_a_t* a = &self->_lf_a;
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    
    LF_PRINT_DEBUG("Calling reaction function _player.reaction_function_0");
    PyObject *arglist = Py_BuildValue("(O)", convert_C_action_to_py(a));
    PyObject *rValue = PyObject_CallObject(
        self->_lf_py_reaction_function_0, 
        arglist
    );
    Py_DECREF(arglist);
    if (rValue == NULL) {
        lf_print_error("FATAL: Calling reaction _player.reaction_function_0 failed.");
        if (PyErr_Occurred()) {
            PyErr_PrintEx(0);
            PyErr_Clear(); // this will reset the error indicator so we can run Python code again
        }
        /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
        exit(1);
    }
    
    /* Release the thread. No Python API allowed beyond this point. */
    /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _playerreaction_function_1(void* instance_args){
    _player_self_t* self = (_player_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _player_ballIn_t* ballIn = self->_lf_ballIn;
    int ballIn_width = self->_lf_ballIn_width; SUPPRESS_UNUSED_WARNING(ballIn_width);
    _player_a_t* a = &self->_lf_a;
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    
    LF_PRINT_DEBUG("Calling reaction function _player.reaction_function_1");
    PyObject *arglist = Py_BuildValue("(OO)", convert_C_port_to_py(ballIn, ballIn_width), convert_C_action_to_py(a));
    PyObject *rValue = PyObject_CallObject(
        self->_lf_py_reaction_function_1, 
        arglist
    );
    Py_DECREF(arglist);
    if (rValue == NULL) {
        lf_print_error("FATAL: Calling reaction _player.reaction_function_1 failed.");
        if (PyErr_Occurred()) {
            PyErr_PrintEx(0);
            PyErr_Clear(); // this will reset the error indicator so we can run Python code again
        }
        /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
        exit(1);
    }
    
    /* Release the thread. No Python API allowed beyond this point. */
    /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _playerreaction_function_2(void* instance_args){
    _player_self_t* self = (_player_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    lf_critical_section_enter(self->base.environment);
    // Expose the action struct as a local variable whose name matches the action name.
    _player_a_t* a = &self->_lf_a;
    // Set the fields of the action struct to match the current trigger.
    a->is_present = (bool)self->_lf__a.status;
    a->has_value = ((self->_lf__a.tmplt.token) != NULL && (self->_lf__a.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)a, (self->_lf__a.tmplt.token));
    lf_critical_section_exit(self->base.environment);
    _player_ballOut_t* ballOut = &self->_lf_ballOut;
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    
    LF_PRINT_DEBUG("Calling reaction function _player.reaction_function_2");
    PyObject *arglist = Py_BuildValue("(OO)", convert_C_action_to_py(a), convert_C_port_to_py(ballOut, -2));
    PyObject *rValue = PyObject_CallObject(
        self->_lf_py_reaction_function_2, 
        arglist
    );
    Py_DECREF(arglist);
    if (rValue == NULL) {
        lf_print_error("FATAL: Calling reaction _player.reaction_function_2 failed.");
        if (PyErr_Occurred()) {
            PyErr_PrintEx(0);
            PyErr_Clear(); // this will reset the error indicator so we can run Python code again
        }
        /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
        exit(1);
    }
    
    /* Release the thread. No Python API allowed beyond this point. */
    /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
}
#include "include/api/reaction_macros_undef.h"
_player_self_t* new__player() {
    _player_self_t* self = (_player_self_t*)lf_new_reactor(sizeof(_player_self_t));
    self->_lf_a._base.trigger = &self->_lf__a;
    self->_lf_a.parent = (self_base_t*)self;
    self->_lf_a.source_id = -1;
    // Set input by default to an always absent default input.
    self->_lf_ballIn = &self->_lf_default__ballIn;
    // Set the default source reactor pointer
    self->_lf_default__ballIn._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _playerreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _playerreaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__reaction_2.number = 2;
    self->_lf__reaction_2.function = _playerreaction_function_2;
    self->_lf__reaction_2.self = self;
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    self->_lf__reaction_2.STP_handler = NULL;
    self->_lf__reaction_2.name = "?";
    self->_lf__reaction_2.mode = NULL;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last_tag = NEVER_TAG;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    self->_lf__a.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__a.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__a_reactions[0] = &self->_lf__reaction_2;
    self->_lf__a.reactions = &self->_lf__a_reactions[0];
    self->_lf__a.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__a.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__a.is_physical = false;
    
    self->_lf__a.tmplt.type.element_size = 0;
    self->_lf_a.type.element_size = 0;
    self->_lf__a.tmplt.length = 1;
    self->_lf_a.length = 1;
    self->_lf__ballIn.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__ballIn.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__ballIn_reactions[0] = &self->_lf__reaction_1;
    self->_lf__ballIn.reactions = &self->_lf__ballIn_reactions[0];
    self->_lf__ballIn.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__ballIn.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__ballIn.tmplt.type.element_size = sizeof(PyObject);
    return self;
}
