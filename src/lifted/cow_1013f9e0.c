/* f_0x1013f9e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1013f9e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 92u);

    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x48u;
    t1 = cow_stdcall(g, COW_IMG(0x1013f970u), 0);
    t2 = g->edx;
    wr32(sp0 - 0x44u, COW_IMG(0x1036f5a0u));
    g->edx = t2;
    g->esp = sp0 - 0x40u;
    t3 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f5a0u));
    t4 = g->edx;
    wr32(sp0 - 0x44u, COW_IMG(0x1036ff80u));
    g->edx = t4;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036ff80u));
    t5 = g->edx;
    if (arg2 == 0u)
    {
        eax = arg2;
        edx = t5;
    }
    else
    {
        if (rd32(COW_IMG(0x10480af0u) + rd32(arg2) * 4u) == 0u)
        {
            eax = arg2;
            edx = rd32(COW_IMG(0x10480af0u) + rd32(arg2) * 4u);
        }
        else
        {
            ecx = rd32(arg2);
            t6 = rd32(arg2 + 4u);
            wr32(sp0 - 0x44u, t6);
            wr32(sp0 - 0x48u, COW_IMG(0x1036ff78u));
            wr32(sp0 - 0x4cu, COW_IMG(0x1036ff70u));
            wr32(sp0 - 0x50u, sp0 - 0x40u);
            g->edx = t6;
            g->esp = sp0 - 0x3cu;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x1036ff70u), COW_IMG(0x1036ff78u), t6, rd32(sp0 - 0x40u));
            t7 = g->edx;
            wr32(sp0 - 0x54u, 0u);
            wr32(sp0 - 0x58u, sp0 - 0x40u);
            g->edx = t7;
            g->esp = sp0 - 0x50u;
            t8 = cow_cdecl(g, COW_IMG(0x10080dc0u), 2, sp0 - 0x40u, 0u);
            t9 = g->edx;
            eax = t8;
            edx = t9;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013f9e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013f9e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
