import os
import sys
print("******* Using Python version: %s.%s.%s" % sys.version_info[:3])
sys.path.append(os.path.dirname(__file__))
# List imported names, but do not use pylint's --extension-pkg-allow-list option
# so that these names will be assumed present without having to compile and install.
# pylint: disable=no-name-in-module, import-error
from LinguaFrancaTimers import (
    Tag, action_capsule_t, port_capsule, request_stop, start
)
# pylint: disable=c-extension-no-member
import LinguaFrancaTimers as lf
try:
    from LinguaFrancaBase.constants import BILLION, FOREVER, NEVER, instant_t, interval_t
    from LinguaFrancaBase.functions import (
        DAY, DAYS, HOUR, HOURS, MINUTE, MINUTES, MSEC, MSECS, NSEC, NSECS, SEC, SECS, USEC,
        USECS, WEEK, WEEKS
    )
    from LinguaFrancaBase.classes import Make, ReactorBase
except ModuleNotFoundError:
    print("No module named 'LinguaFrancaBase'. "
          "Install using \"pip3 install LinguaFrancaBase\".")
    sys.exit(1)
import copy




# Python class for reactor _timers_main
class __timers_main(ReactorBase):

    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        self._start:interval_t = MSEC(100)
        self._incr:interval_t = MSEC(100)
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables
        self.interval = self.start
    
    @property
    def start(self):
        return self._start # pylint: disable=no-member
    
    
    @property
    def incr(self):
        return self._incr # pylint: disable=no-member
    
    
    @property
    def bank_index(self):
        return self._bank_index # pylint: disable=no-member
    
    

    def reaction_function_0(self, a):
        a.schedule(self.start)
        return 0
    def reaction_function_1(self, a):
        elapsed_logical_time = lf.time.logical_elapsed()
        print(f"Elapsed time since start: {elapsed_logical_time} nsec")
        self.interval += self.incr 
        a.schedule(self.interval)
        return 0



# Instantiate classes
timers_main_lf = [None] * 1
# Start initializing Timers of class _timers_main
for timers_main_i in range(1):
    bank_index = timers_main_i
    timers_main_lf[0] = __timers_main(
        _start=MSEC(100),
        _incr=MSEC(100),
        _bank_index = 0,
    )


# The main function
def main(argv):
    start(argv)
    # Suppress Python shutdown errors
    # Workaround for https://github.com/lf-lang/lingua-franca/issues/1906
    import atexit
    atexit.register(os._exit, 0)

# As is customary in Python programs, the main() function
# should only be executed if the main module is active.
if __name__=="__main__":
    main(sys.argv)
