/* f_0x10280d30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10280d30(Guest* g)
{
    double d14;
    double d15;
    double d16;
    double d17;
    double d24;
    double d25;
    double d26;
    double d27;
    double d34;
    double d35;
    double d36;
    double d37;
    double d4;
    double d5;
    double d6;
    double d7;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
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
    d4 = (double)rdf32(arg1 + 0xcu);
    d5 = (double)rdf32(arg1 + 8u);
    d6 = (double)rdf32(arg1 + 4u);
    g->ecx = t2;
    g->edx = t3;
    d7 = (double)rdf32(arg1);
    g->esp = sp0 - 0x24u;
    t8 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b480cu), cow_dlo(d7));
    t9 = g->ecx;
    t10 = g->edx;
    g->ecx = t9;
    g->edx = t10;
    t11 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, COW_IMG(0x103b480cu), cow_dlo(d7));
    t12 = g->ecx;
    t13 = g->edx;
    d14 = (double)rdf32(arg1 + 0x1cu);
    d15 = (double)rdf32(arg1 + 0x18u);
    d16 = (double)rdf32(arg1 + 0x14u);
    d17 = (double)rdf32(arg1 + 0x10u);
    g->ecx = t12;
    g->edx = t13;
    t18 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b47fcu), cow_dlo(d17));
    t19 = g->ecx;
    t20 = g->edx;
    g->ecx = t19;
    g->edx = t20;
    t21 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, COW_IMG(0x103b47fcu), cow_dlo(d17));
    t22 = g->ecx;
    t23 = g->edx;
    d24 = (double)rdf32(arg1 + 0x2cu);
    d25 = (double)rdf32(arg1 + 0x28u);
    d26 = (double)rdf32(arg1 + 0x24u);
    d27 = (double)rdf32(arg1 + 0x20u);
    g->ecx = t22;
    g->edx = t23;
    t28 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b47fcu), cow_dlo(d27));
    t29 = g->ecx;
    t30 = g->edx;
    g->ecx = t29;
    g->edx = t30;
    t31 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, COW_IMG(0x103b47fcu), cow_dlo(d27));
    t32 = g->ecx;
    t33 = g->edx;
    d34 = (double)rdf32(arg1 + 0x3cu);
    d35 = (double)rdf32(arg1 + 0x38u);
    d36 = (double)rdf32(arg1 + 0x34u);
    d37 = (double)rdf32(arg1 + 0x30u);
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b47ecu), cow_dlo(d37));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10280d30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10280d30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
