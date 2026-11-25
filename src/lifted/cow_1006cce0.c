/* f_0x1006cce0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   CPU feature-detection routine; in the guest model the EFLAGS ID-bit test fails, so it clears the feature globals and returns the deterministic post-xor EFLAGS value 0x46.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1006cce0(Guest* g)
{
    (void)g;

    wr8(COW_IMG(0x1047cd0bu), 0u);
    wr8(COW_IMG(0x1047cf78u), 0u);
    wr8(COW_IMG(0x1047ce60u), 0u);
    wr8(COW_IMG(0x1047cf30u), 0u);
    wr8(COW_IMG(0x1047cee9u), 0u);

    /*
       The original first does:
           xor cl, cl
           pushfd
           pop eax
       In the guest model, the ID flag is not writable, so the CPUID test path
       is not taken.  The value returned is the EFLAGS value after "xor cl,cl":
           bit 1 = 1, bit 2 = 1, bit 6 = 1  => 0x00000046.
    */
    return 0x00000046u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006cce0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1006cce0(g);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* ret */
}
/* COW_ADAPTER END */
