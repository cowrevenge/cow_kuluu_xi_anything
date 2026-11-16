/* f_0x1026e370 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1026e370(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b1178u), arg1);
    t5 = g->ecx;
    t6 = g->edx;
    g->ecx = t5;
    g->edx = t6;
    t7 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103b1178u), arg1);
    t8 = g->ecx;
    t9 = g->edx;
    d10 = (double)rdf32(arg1 + 0x20u);
    d11 = (double)rdf32(arg1 + 0x1cu);
    d12 = (double)rdf32(arg1 + 0x18u);
    d13 = (double)rdf32(arg1 + 0x14u);
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0x24u;
    t14 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b1164u), cow_dlo(d13));
    t15 = g->ecx;
    t16 = g->edx;
    g->ecx = t15;
    g->edx = t16;
    cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103b1164u), cow_dlo(d13));
    t17 = g->ecx;
    t18 = g->edx;
    if (rd32(arg1 + 0x30u) != 0u)
    {
        eax = COW_IMG(0x103b1160u);
        ecx = t17;
        edx = t18;
    }
    else
    {
        ecx = t17;
        edx = t18;
        eax = COW_IMG(0x10387ef4u);
    }
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b114cu), eax);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026e370(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1026e370(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
