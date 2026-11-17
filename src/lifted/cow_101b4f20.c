/* f_0x101b4f20 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies self->[0x1c4] bytes from self to the destination argument when the count argument is at least that many (signed compare), returning the possibly updated byte count and leaving the old count in 

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_101b4f20(Guest* g, uint32_t self, uint32_t dest, uint32_t count_arg)
{
    const uint32_t count = rd32(self + 0x1C4u);

    if ((int32_t)count_arg < (int32_t)count)
    {
        g->edx = count_arg;
        return 0u;
    }

    /* Preserve the original's observable stack effects for the saved esi/edi slots.
       These are below the returned esp, but the original may read them if the
       copy aliases this stack area. */
    const uint32_t saved_edi_addr = g->esp - 8u;
    const uint32_t saved_esi_addr = g->esp - 4u;
    wr32(saved_esi_addr, g->esi);
    wr32(saved_edi_addr, g->edi);

    uint32_t src = self;
    uint32_t dst = dest;

    uint32_t n = count >> 2;
    while (n != 0u)
    {
        wr32(dst, rd32(src));
        src += 4u;
        dst += 4u;
        --n;
    }

    n = count & 3u;
    while (n != 0u)
    {
        wr8(dst, rd8(src));
        src += 1u;
        dst += 1u;
        --n;
    }

    /* The original pops edi/esi from the stack slots it pushed.  If the copy
       modified those slots, the popped values are observable in edi/esi. */
    g->edi = rd32(saved_edi_addr);
    g->esi = rd32(saved_esi_addr);

    g->edx = count;
    return rd32(self + 0x1C4u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b4f20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t dest = rd32(sp0 + 4u);
    const uint32_t count_arg = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_101b4f20(g, self, dest, count_arg);

    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
