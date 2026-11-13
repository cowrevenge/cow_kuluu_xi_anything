/* f_0x10285890 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   Thunk that loads an object from the sole stack argument, fetches a function pointer at object+0x2c, and tail-jumps to it with ecx=self and the same stack argument, or returns immediately if the pointe

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10285890(Guest* g, uint32_t sp0, uint32_t self)
{
    const uint32_t target = rd32(self + 0x2cu);

    if (target == 0u)
    {
        /*
           Original:
             mov  ecx, [esp+4]       ; ecx = self
             mov  eax, [ecx+0x2c]    ; eax = 0
             test eax, eax           ; zf = 1
             je   ret                ; bare ret, pops return address only
             (edx is untouched)
        */
        g->ecx = self;
        g->edx = g->edx;
        return 0u;
    }

    /*
       Original:
         mov  ecx, [esp+4]           ; ecx = self
         mov  eax, [ecx+0x2c]        ; target
         test eax, eax
         je   ret
         mov  [esp+4], ecx           ; rewrite same value (must preserve the memory touch)
         jmp  eax                    ; tail-call with ecx=self and [esp+4]=self

       The callee is a thiscall-style function pointer: ecx carries the object,
       one stack argument is present at [esp+4], and the callee cleans 4 bytes
       on return. Emulate that tail jump by invoking the target with its
       convention, then let the adapter report the callee's stack cleanup.
    */
    wr32(sp0 + 4u, self);

    g->ecx = self;
    g->eax = target;

    cow_thiscall(g, target, self, 1u, self);

    /*
       eax and edx are exactly whatever the callee left behind, because the
       original tail-jumped into the callee and returned directly to the
       thunk's caller.
    */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10285890(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_10285890(g, sp0, self);

    g->esp = sp0;

    /*
       Null path: original executes bare ret -> callee cleanup 0.
       Tail-call path: thiscall target with one stack argument cleans 4 bytes.
       The non-null path is selected by the presence of a target pointer at
       self+0x2c, which is exactly the condition checked above.
    */
    if (rd32(self + 0x2cu) != 0u)
        rt_return(g, result, 4u);
    else
        rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
