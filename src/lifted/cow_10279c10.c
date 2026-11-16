/* f_0x10279c10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10279c10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg2 == 0u) goto L_10279c7a;
    if ((int32_t)rd32(arg1 + 0x7cu) <= 0)
    {
        eax = rd32(arg1 + 0x7cu);
        ecx = self;
        edx = in_edx;
        goto L_10279c51;
    }
    ecx = self;
    edx = in_edx;
    edi = 0u;
L_10279c2d: ;
    if (rd32(edi * 4u + rd32(arg1 + 0x74u)) != arg3) goto L_10279c49;
    t1 = rd32(edi * 4u + rd32(arg1 + 0x70u));
    g->ebx = arg3;
    t2 = rd32(arg1 + 0x70u);
    g->esp = sp0 - 0x10u;
    t3 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t2, t1, 1, 2, arg2, t1);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == 0u)
    {
        edx = t5;
        goto L_10279c81;
    }
    ecx = t4;
    edx = t5;
L_10279c49: ;
    if ((int32_t)(edi + 1u) < (int32_t)rd32(arg1 + 0x7cu))
    {
        edi = edi + 1u;
        goto L_10279c2d;
    }
    eax = rd32(arg1 + 0x7cu);
L_10279c51: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b37ecu));
    t17 = g->ecx;
    t18 = g->edx;
    g->ecx = t17;
    g->edx = t18;
    g->esp = sp0 - 0x1cu;
    t19 = cow_cdecl(g, COW_IMG(0x1027a1e0u), 1, arg3);
    t20 = g->ecx;
    t21 = g->edx;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3d94u), arg2);
L_10279c7a: ;
    g->ebx = in_ebx;
    return 0u;
L_10279c81: ;
    t6 = rd32(edi * 4u + rd32(arg1 + 0x78u));
    t7 = rd32(arg1 + 0x78u);
    wr32(arg4, t6);
    if (arg3 > 4u)
    {
        eax = t7;
        goto L_10279ce4;
    }
    eax = t7;
    edi = t6;
    t8 = rd32(COW_IMG(0x10279d10u) + arg3 * 4u);
    switch (t8 - RD)
    {
    case 0x10279c99u: goto L_10279c99;
    case 0x10279ca8u: goto L_10279ca8;
    case 0x10279cb7u: goto L_10279cb7;
    case 0x10279cc6u: goto L_10279cc6;
    case 0x10279cd5u: goto L_10279cd5;
    default: rt_fatal(g, COW_IMG(0x10279c92u), "switch");
    }
    return 0;
L_10279c99: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t13 = cow_cdecl(g, COW_IMG(0x10279850u), 2, arg1, edi);
    g->ebx = in_ebx;
    return t13;
L_10279ca8: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t12 = cow_cdecl(g, COW_IMG(0x10279870u), 2, arg1, edi);
    g->ebx = in_ebx;
    return t12;
L_10279cb7: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t11 = cow_cdecl(g, COW_IMG(0x10279890u), 2, arg1, edi);
    g->ebx = in_ebx;
    return t11;
L_10279cc6: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t10 = cow_cdecl(g, COW_IMG(0x102798b0u), 2, arg1, edi);
    g->ebx = in_ebx;
    return t10;
L_10279cd5: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t9 = cow_cdecl(g, COW_IMG(0x102798d0u), 2, arg1, edi);
    g->ebx = in_ebx;
    return t9;
L_10279ce4: ;
    g->eax = eax;
    g->ecx = arg4;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t14 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b37ecu));
    t15 = g->ecx;
    t16 = g->edx;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3d7cu), arg3);
    g->ebx = in_ebx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10279c10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10279c10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
