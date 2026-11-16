/* f_0x1002a700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1002a700(Guest* g)
{
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 8u, 0u);
    g->edx = 0u;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x10029e70u), self, 0);
    t2 = g->edx;
    if (rd32(t1) == t2)
    {
        ebx = in_ebx;
        ebp = in_ebp;
    }
    else
    {
        ecx = rd32(t1);
        esi = t1;
        wr32(sp0 - 0x14u, in_ebx);
        wr32(sp0 - 0x18u, in_ebp);
L_1002a728: ;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        wr32(sp0 - 0x24u, arg2);
        wr32(sp0 - 0x28u, self);
        wr32(sp0 - 0x2cu, arg1);
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, rd32(rd32(ecx) + 0x20u), ecx, 5, arg1, self, arg2, sp0 - 4u, sp0 - 8u);
        if (rd32(rd32(esi) + 4u) != 0u)
        {
            ecx = rd32(rd32(esi) + 4u);
            esi = rd32(esi) + 4u;
            goto L_1002a728;
        }
        ebx = rd32(sp0 - 0x14u);
        ebp = rd32(sp0 - 0x18u);
    }
    g->ebx = ebx;
    g->ebp = ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002a700(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1002a700(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
