/* f_0x10297260 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10297260(Guest* g)
{
    double d13;
    double d14;
    double d15;
    double d22;
    double d23;
    double d24;
    double d4;
    double d5;
    double d6;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t3;
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
    d4 = (double)rdf32(arg1 + 8u);
    d5 = (double)rdf32(arg1 + 4u);
    g->ecx = t2;
    g->edx = t3;
    d6 = (double)rdf32(arg1);
    g->esp = sp0 - 0x1cu;
    t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bbc2cu), cow_dlo(d6));
    t8 = g->ecx;
    t9 = g->edx;
    g->ecx = t8;
    g->edx = t9;
    t10 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, COW_IMG(0x103bbc2cu), cow_dlo(d6));
    t11 = g->ecx;
    t12 = g->edx;
    d13 = (double)rdf32(arg1 + 0x14u);
    d14 = (double)rdf32(arg1 + 0x10u);
    d15 = (double)rdf32(arg1 + 0xcu);
    g->ecx = t11;
    g->edx = t12;
    t16 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bbc20u), cow_dlo(d15));
    t17 = g->ecx;
    t18 = g->edx;
    g->ecx = t17;
    g->edx = t18;
    t19 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, COW_IMG(0x103bbc20u), cow_dlo(d15));
    t20 = g->ecx;
    t21 = g->edx;
    d22 = (double)rdf32(arg1 + 0x20u);
    d23 = (double)rdf32(arg1 + 0x1cu);
    d24 = (double)rdf32(arg1 + 0x18u);
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bbc14u), cow_dlo(d24));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10297260(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10297260(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
