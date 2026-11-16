/* f_0x10299930 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10299930(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d19;
    uint32_t t1;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
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
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc118u), arg1);
    t5 = g->ecx;
    t6 = g->edx;
    g->ecx = t5;
    g->edx = t6;
    t7 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bc118u), arg1);
    t8 = g->ecx;
    t9 = g->edx;
    d10 = (double)rdf32(arg1 + 0x54u);
    d11 = (double)rdf32(arg1 + 0x50u);
    d12 = (double)rdf32(arg1 + 0x4cu);
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0x1cu;
    t13 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc100u), cow_dlo(d12));
    t14 = g->ecx;
    t15 = g->edx;
    g->ecx = t14;
    g->edx = t15;
    t16 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bc100u), cow_dlo(d12));
    t17 = g->ecx;
    t18 = g->edx;
    d19 = (double)rdf32(arg1 + 0x58u);
    g->ecx = t17;
    g->edx = t18;
    g->esp = sp0 - 0xcu;
    t20 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc0f0u), cow_dlo(d19));
    t21 = g->ecx;
    t22 = g->edx;
    g->ecx = t21;
    g->edx = t22;
    cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bc0f0u), cow_dlo(d19));
    t23 = g->ecx;
    t24 = g->edx;
    t25 = rd32(arg1 + 0x5cu);
    g->eax = t25;
    g->ecx = t23;
    g->edx = t24;
    g->esp = sp0 - 0x18u;
    t26 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc0e0u), t25);
    t27 = g->ecx;
    t28 = g->edx;
    g->edx = t28;
    t29 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bc0e0u), t25);
    t30 = g->edx;
    t31 = rd32(arg1 + 0x60u);
    g->edx = t30;
    g->esp = sp0 - 0x24u;
    t32 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc0d0u), t31);
    t33 = g->edx;
    g->edx = t33;
    return t32;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10299930(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10299930(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
