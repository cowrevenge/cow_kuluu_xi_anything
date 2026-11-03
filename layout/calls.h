/* layout/calls.h - typed prototypes for guest functions we have NOT converted yet.

   User code in src/ calls these by name and never sees f_<hex>. Each bridge lives in calls.c, where
   the bare address is allowed, and goes through the runtime's own call machinery (guest_call /
   guest_thiscall in gthread.h): that marshals the Guest, the stack and the guest lock, which a direct
   f_<hex>(g) call would not - calling a translation by hand from host code is how you get a corrupt
   esp that only shows up forty functions later.

   The pattern a bridge follows, once a unit actually needs one:

     calls.h:  CowI32 cow_call_registry_key_path(CowAddr dest, CowAddr source);
     calls.c:  CowI32 cow_call_registry_key_path(CowAddr dest, CowAddr source)
               {
                   CowAddr args[2] = { dest, source };
                   return (CowI32)guest_call(COW_ADDR_REGISTRY_KEY_PATH, 2, args);
               }

   The name goes into cow/names.csv (kind=call) with the evidence that says what the function is. */
#ifndef COW_LAYOUT_CALLS_H
#define COW_LAYOUT_CALLS_H

#include "cow_types.h"

/* Call a guest function that takes no arguments; returns its eax. */
CowU32 cow_guest_call0(CowAddr fn);
/* The same as a thiscall member function of `self` (self goes in ecx, as the game expects). */
CowU32 cow_guest_thiscall0(CowAddr fn, CowAddr self);

#endif /* COW_LAYOUT_CALLS_H */
