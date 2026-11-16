/* f_0x100d1400 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100d1400(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 + 4u, 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 1u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        edx = t2;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t3 = cow_thiscall(g, COW_IMG(0x100816c0u), arg2 + 4u, 0);
        t4 = g->edx;
        if (t3 == 0u)
        {
            eax = t3;
            edx = t4;
        }
        else
        {
            eax = t3;
            wr32(sp0 - 8u, rd32(arg2));
            wr32(sp0 - 0xcu, arg1);
            g->eax = eax;
            g->edx = arg1;
            g->esp = sp0 - 4u;
            t5 = cow_thiscall(g, COW_IMG(0x100d1450u), eax, 2, arg1, rd32(arg2));
            t6 = g->edx;
            eax = t5;
            edx = t6;
        }
    }
    if (arg2 != 0u)
    {
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t7 = cow_thiscall(g, COW_IMG(0x100814e0u), arg2 + 4u, 0);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(sp0 - 8u, arg2);
        g->edx = t9;
        t10 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, arg2);
        t11 = g->edx;
        eax = t10;
        edx = t11;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d1400(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d1400(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
