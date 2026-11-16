/* f_0x1024f070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1024f070(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_54;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 92u);

    wr32(sp0 - 0x4cu, sp0 - 0x48u);
    g->edx = in_edx;
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x10271eb0u), 1, sp0 - 0x48u);
    t1 = g->edx;
    if (!(rd32(sp0 - 0x48u) >> 8u & 1u))
    {
        wr32(sp0 - 0x4cu, sp0 - 0x44u);
        wr32(sp0 - 0x50u, 0u);
        t2 = rd32(arg1 + 0x1cu);
        wr32(sp0 - 0x54u, t2);
        eax = arg1;
        ecx = t2;
        edx = sp0 - 0x44u;
        loc_54 = t2;
    }
    else
    {
        eax = rd32(sp0 - 0x48u);
        edx = t1;
        wr32(sp0 - 0x4cu, sp0 - 0x44u);
        wr32(sp0 - 0x50u, 0u);
        wr32(sp0 - 0x54u, 6u);
        ecx = sp0 - 0x44u;
        loc_54 = 6u;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x48u;
    t3 = cow_cdecl(g, COW_IMG(0x10273390u), 3, loc_54, 0u, sp0 - 0x44u);
    t4 = g->ecx;
    wr32(sp0 - 0x4cu, sp0 - 0x40u);
    g->edx = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x1027ebf0u), 1, sp0 - 0x40u);
    t5 = g->edx;
    wr32(sp0 - 0x50u, arg2);
    wr32(sp0 - 0x54u, sp0 - 0x40u);
    wr32(sp0 - 0x58u, arg2);
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x1027efa0u), 3, arg2, sp0 - 0x40u, arg2);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024f070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1024f070(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
