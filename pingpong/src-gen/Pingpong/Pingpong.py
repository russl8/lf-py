import os
import sys
print("******* Using Python version: %s.%s.%s" % sys.version_info[:3])
sys.path.append(os.path.dirname(__file__))
# List imported names, but do not use pylint's --extension-pkg-allow-list option
# so that these names will be assumed present without having to compile and install.
# pylint: disable=no-name-in-module, import-error
from LinguaFrancaPingpong import (
    Tag, action_capsule_t, port_capsule, request_stop, start
)
# pylint: disable=c-extension-no-member
import LinguaFrancaPingpong as lf
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




# Python class for reactor _pingpong_main
class __pingpong_main(ReactorBase):

    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables
    
    @property
    def bank_index(self):
        return self._bank_index # pylint: disable=no-member
    
    



# Python class for reactor _player
class __player(ReactorBase):

    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        self._name = "NO_NAME"
        self._delay:interval_t = MSEC(0)
        self._serve = 0
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables
        self.timesHit = 0
    
    @property
    def name(self):
        return self._name # pylint: disable=no-member
    
    
    @property
    def delay(self):
        return self._delay # pylint: disable=no-member
    
    
    @property
    def serve(self):
        return self._serve # pylint: disable=no-member
    
    
    @property
    def bank_index(self):
        return self._bank_index # pylint: disable=no-member
    
    

    def reaction_function_0(self, a):
        if self.serve:
            a.schedule(0)
        return 0
    def reaction_function_1(self, ballIn, a):
        elapsed_logical_time = lf.time.logical_elapsed()
        a.schedule(self.delay)
        self.timesHit += 1
        return 0
    def reaction_function_2(self, a, ballOut):
        elapsed_logical_time = lf.time.logical_elapsed()
        print(f"[{elapsed_logical_time}] {self.name} has hit the ball (hit #{self.timesHit})")
        ballOut.set(True)
        return 0


# Python class for reactor __lf_gendelay_0
class ___lf_gendelay_0(ReactorBase):

    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        self._delay:interval_t = 0
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables
    
    @property
    def delay(self):
        return self._delay # pylint: disable=no-member
    
    
    @property
    def bank_index(self):
        return self._bank_index # pylint: disable=no-member
    
    

    
    



# Instantiate classes
pingpong_main_lf = [None] * 1
pingpong_p1_lf = [None] * 1
pingpong_p2_lf = [None] * 1
pingpong_delay_lf = [None] * 1
# Start initializing Pingpong of class _pingpong_main
for pingpong_main_i in range(1):
    bank_index = pingpong_main_i
    pingpong_main_lf[0] = __pingpong_main(
        _bank_index = 0,
    )
    self = pingpong_main_lf[0]
    # Start initializing Pingpong.p1 of class _player
    for pingpong_p1_i in range(1):
        bank_index = pingpong_p1_i
        pingpong_p1_lf[0] = __player(
            _name="Bob",
            _delay=MSEC(100),
            _serve=1,
            _bank_index = 0,
        )
    # Start initializing Pingpong.p2 of class _player
    for pingpong_p2_i in range(1):
        bank_index = pingpong_p2_i
        pingpong_p2_lf[0] = __player(
            _name="Jude",
            _delay=MSEC(300),
            _serve=0,
            _bank_index = 0,
        )
    # Start initializing Pingpong.delay of class __lf_gendelay_0
    for pingpong_delay_i in range(1):
        bank_index = pingpong_delay_i
        pingpong_delay_lf[0] = ___lf_gendelay_0(
            _delay=0,
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
