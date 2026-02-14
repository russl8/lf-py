#include "include/api/schedule.h"
#include <string.h>
#include "low_level_platform/api/low_level_platform.h"
#include "include/Helloworld/Helloworld.h"
#include "_helloworld_main.h"
#include "include/api/reaction_macros.h"
void _helloworld_mainreaction_function_0(void* instance_args){
    _helloworld_main_main_self_t* self = (_helloworld_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    
    LF_PRINT_DEBUG("Calling reaction function _helloworld_main.reaction_function_0");
    PyObject *arglist = Py_BuildValue("()");
    PyObject *rValue = PyObject_CallObject(
        self->_lf_py_reaction_function_0, 
        arglist
    );
    Py_DECREF(arglist);
    if (rValue == NULL) {
        lf_print_error("FATAL: Calling reaction _helloworld_main.reaction_function_0 failed.");
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
_helloworld_main_main_self_t* new__helloworld_main() {
    _helloworld_main_main_self_t* self = (_helloworld_main_main_self_t*)lf_new_reactor(sizeof(_helloworld_main_main_self_t));
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _helloworld_mainreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last_tag = NEVER_TAG;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    return self;
}
