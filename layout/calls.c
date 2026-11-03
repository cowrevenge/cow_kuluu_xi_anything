/* layout/calls.c - the only .c file that may name a bare guest function address, because a bridge is
   a layout fact (which function, how many arguments, which convention), not game logic.

   Bridges go through guest_call/guest_thiscall rather than calling f_<hex>(g) directly: the runtime
   owns the Guest marshalling, the guest stack and the guest lock. See layout/calls.h for the pattern. */
#include "cow.h"

CowU32 cow_guest_call0(CowAddr fn)
{
    return guest_call(fn, 0, NULL);
}

CowU32 cow_guest_thiscall0(CowAddr fn, CowAddr self)
{
    return guest_thiscall(fn, self, 0, NULL);
}
