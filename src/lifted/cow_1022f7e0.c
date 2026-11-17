/* f_0x1022f7e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1022f7e0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg2 == rd8(self + 0x6eu))
    {
        eax = rd8(self + 0x6eu);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t3 = cow_cdecl(g, COW_IMG(0x10220cf0u), 2, 0u, 0x23u);
        t4 = g->edx;
        eax = t3;
        edx = t4;
        loc_c = t3;
        loc_10 = 5u;
        loc_14 = 4u;
    }
    else
    {
        eax = rd8(self + 0x6eu);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_cdecl(g, COW_IMG(0x10220cf0u), 2, 4u, 0xaau);
        t2 = g->edx;
        eax = t1;
        edx = t2;
        loc_c = t1;
        loc_10 = 1u;
        loc_14 = 0u;
    }
    g->edi = arg2;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x101170f0u), arg1, 3, loc_14, loc_10, loc_c);
    t6 = g->edx;
    g->edx = t6;
    g->esp = sp0 - 0xcu;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, arg2 + 0x1b8u);
    t8 = g->edx;
    g->edi = arg2 + 0x1b8u;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x101171b0u), arg1, 4, 0x18u, 0u, t7, arg3);
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022f7e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1022f7e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
