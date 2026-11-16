/* f_0x10295f50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10295f50(Guest* g)
{
    double d16;
    double d23;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
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
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bbb08u), arg1);
    t5 = g->ecx;
    t6 = g->edx;
    if ((int32_t)arg2 < 1)
    {
        eax = t4;
        edx = t6;
        goto L_10296007;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_edi, in_esi);
    t7 = g->ecx;
    t8 = g->edx;
    g->eax = rd32(arg1);
    g->ecx = t7;
    g->edx = t8;
    t9 = rd32(arg1);
    g->esp = sp0 - 0x14u;
    t10 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb718u), t9);
    t11 = g->ecx;
    t12 = g->edx;
    g->ecx = t11;
    g->edx = t12;
    t13 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bb718u), t9);
    t14 = g->ecx;
    t15 = g->edx;
    d16 = (double)rdf32(arg1 + 0x20u);
    g->ecx = t14;
    g->edx = t15;
    t17 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb708u), cow_dlo(d16));
    t18 = g->ecx;
    t19 = g->edx;
    g->ecx = t18;
    g->edx = t19;
    t20 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bb708u), cow_dlo(d16));
    t21 = g->ecx;
    t22 = g->edx;
    d23 = (double)rdf32(arg1 + 0x24u);
    g->ecx = t21;
    g->edx = t22;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb6f8u), cow_dlo(d23));
    t24 = g->ecx;
    t25 = g->edx;
    if (rd32(arg1 + 0x28u) == 0u)
    {
        eax = rd32(arg1 + 0x28u);
        ecx = t24;
        edx = t25;
        goto L_10295ff5;
    }
    eax = rd32(arg1 + 0x28u);
    ecx = t24;
    edx = t25;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t26 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_edi, in_esi);
    t27 = g->ecx;
    t28 = g->edx;
    g->edx = t28;
    g->esp = sp0 - 0x10u;
    t29 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bbafcu), arg3 + 1u);
    t30 = g->edx;
    t31 = rd32(arg1 + 0x28u);
    g->edx = t30;
    g->esp = sp0 - 0x18u;
    t32 = cow_cdecl(g, COW_IMG(0x102857a0u), 3, t31, arg2, arg3 + 2u);
    t33 = g->edx;
    g->edx = t33;
    return t32;
L_10295ff5: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t34 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_edi, in_esi);
    t35 = g->ecx;
    t36 = g->edx;
    g->edx = t36;
    g->esp = sp0 - 0x10u;
    t37 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bbaecu), arg3 + 1u);
    t38 = g->edx;
    eax = t37;
    edx = t38;
L_10296007: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10295f50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10295f50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
