/* f_0x102b0860 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102b0860(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), self, 2, arg2, COW_IMG(0x10361d24u));
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_102b08a1;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf7acu));
    t5 = g->ecx;
    t6 = g->edx;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b99c8u), arg2);
    return;
L_102b08a1: ;
    g->edx = edx;
    t7 = rd32(arg1);
    g->esp = sp0;
    t8 = cow_call_regs(g, COW_IMG(0x1029cd60u), t7, ecx, g->edx, 1, 5, esi, t7, in_edi, in_esi, in_ebx);
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 != 0u)
    {
        ecx = t9;
        edx = t10;
        goto L_102b08e1;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf7acu));
    t12 = g->ecx;
    t13 = g->edx;
    g->ecx = t12;
    g->edx = t13;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b99b4u), arg2);
    t14 = g->ecx;
    t15 = g->edx;
    g->edi = arg1;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t15, 1, 3, esi, COW_IMG(0x103b99b4u), arg2);
    g->edi = in_edi;
    return;
L_102b08e1: ;
    if (rd32(arg1) - 0xa0002u > 7u)
    {
        eax = rd32(arg1) - 0xa0002u;
        ebx = rd32(arg1);
        goto L_102b0968;
    }
    eax = rd32(arg1) - 0xa0002u;
    ebx = rd32(arg1);
    t16 = rd32(COW_IMG(0x102b0998u) + eax * 4u);
    switch (t16 - RD)
    {
    case 0x102b08f5u: goto L_102b08f5;
    case 0x102b090cu: goto L_102b090c;
    case 0x102b0923u: goto L_102b0923;
    case 0x102b093au: goto L_102b093a;
    case 0x102b0951u: goto L_102b0951;
    case 0x102b0968u: goto L_102b0968;
    default: rt_fatal(g, COW_IMG(0x102b08eeu), "switch");
    }
    return;
L_102b08f5: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102ac2a0u), 2, arg1, esi);
    t25 = g->ecx;
    t26 = g->edx;
    g->edi = arg1;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t26, 1, 3, esi, in_edi, in_esi);
    g->edi = in_edi;
    return;
L_102b090c: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102b6610u), 2, arg1, esi);
    t23 = g->ecx;
    t24 = g->edx;
    g->edi = arg1;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t24, 1, 3, esi, in_edi, in_esi);
    g->edi = in_edi;
    return;
L_102b0923: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102b5b90u), 2, arg1, esi);
    t21 = g->ecx;
    t22 = g->edx;
    g->edi = arg1;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t22, 1, 3, esi, in_edi, in_esi);
    g->edi = in_edi;
    return;
L_102b093a: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102ace60u), 2, arg1, esi);
    t19 = g->ecx;
    t20 = g->edx;
    g->edi = arg1;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t20, 1, 3, esi, in_edi, in_esi);
    g->edi = in_edi;
    return;
L_102b0951: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102ae810u), 2, arg1, esi);
    t17 = g->ecx;
    t18 = g->edx;
    g->edi = arg1;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t18, 1, 3, esi, in_edi, in_esi);
    g->edi = in_edi;
    return;
L_102b0968: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t27 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103bf7acu));
    t28 = g->ecx;
    t29 = g->edx;
    g->ecx = t28;
    g->edx = t29;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf7fcu), ebx);
    t30 = g->ecx;
    t31 = g->edx;
    g->edi = arg1;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t31, 1, 3, esi, in_edi, in_esi);
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b0860(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b0860(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
