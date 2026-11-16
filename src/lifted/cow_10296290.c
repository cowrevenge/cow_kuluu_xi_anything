/* f_0x10296290 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10296290(Guest* g)
{
    uint32_t eax;
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
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
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
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), self, 2, arg2, COW_IMG(0x1034f7fcu));
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_102962d1;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bbb70u));
    t5 = g->ecx;
    t6 = g->edx;
    g->edx = t6;
    g->esp = sp0 - 0x18u;
    t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b99c8u), arg2);
    t8 = g->edx;
    g->edx = t8;
    return t7;
L_102962d1: ;
    g->edx = edx;
    t9 = rd32(arg1);
    g->esp = sp0;
    t10 = cow_call_regs(g, COW_IMG(0x1029cd60u), t9, ecx, g->edx, 1, 5, esi, t9, in_edi, in_esi, in_ebx);
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 != 0u)
    {
        ecx = t11;
        edx = t12;
        goto L_10296311;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t13 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bbb70u));
    t14 = g->ecx;
    t15 = g->edx;
    g->ecx = t14;
    g->edx = t15;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b99b4u), arg2);
    t16 = g->ecx;
    t17 = g->edx;
    g->edi = arg1;
    t18 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t17, 1, 3, esi, COW_IMG(0x103b99b4u), arg2);
    t19 = g->edx;
    g->edi = in_edi;
    g->edx = t19;
    return t18;
L_10296311: ;
    if (rd32(arg1) - 0x50001u > 8u)
    {
        eax = rd32(arg1) - 0x50001u;
        goto L_10296397;
    }
    eax = rd32(arg1) - 0x50001u;
    t20 = rd32(COW_IMG(0x102963c8u) + eax * 4u);
    switch (t20 - RD)
    {
    case 0x10296324u: goto L_10296324;
    case 0x1029633bu: goto L_1029633b;
    case 0x10296352u: goto L_10296352;
    case 0x10296369u: goto L_10296369;
    case 0x10296380u: goto L_10296380;
    case 0x10296397u: goto L_10296397;
    default: rt_fatal(g, COW_IMG(0x1029631du), "switch");
    }
    return 0;
L_10296324: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10294890u), 2, arg1, esi);
    t37 = g->ecx;
    t38 = g->edx;
    g->edi = arg1;
    g->esp = sp0 - 4u;
    t39 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t38, 1, 3, esi, in_edi, in_esi);
    t40 = g->edx;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t40;
    return t39;
L_1029633b: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10295da0u), 2, arg1, esi);
    t33 = g->ecx;
    t34 = g->edx;
    g->edi = arg1;
    g->esp = sp0 - 4u;
    t35 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t34, 1, 3, esi, in_edi, in_esi);
    t36 = g->edx;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t36;
    return t35;
L_10296352: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10293a20u), 2, arg1, esi);
    t29 = g->ecx;
    t30 = g->edx;
    g->edi = arg1;
    g->esp = sp0 - 4u;
    t31 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t30, 1, 3, esi, in_edi, in_esi);
    t32 = g->edx;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t32;
    return t31;
L_10296369: ;
    g->ebx = arg2;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102a5260u), 2, arg1, esi);
    t25 = g->ecx;
    t26 = g->edx;
    g->edi = arg1;
    g->esp = sp0 - 4u;
    t27 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t26, 1, 3, esi, in_edi, in_esi);
    t28 = g->edx;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t28;
    return t27;
L_10296380: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102a4860u), 2, arg1, esi);
    t21 = g->ecx;
    t22 = g->edx;
    g->edi = arg1;
    g->esp = sp0 - 4u;
    t23 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t22, 1, 3, esi, in_edi, in_esi);
    t24 = g->edx;
    g->edi = in_edi;
    g->edx = t24;
    return t23;
L_10296397: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t41 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bbb70u));
    t42 = g->edx;
    g->ecx = rd32(arg1);
    g->edx = t42;
    t43 = rd32(arg1);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bbb9cu), t43);
    t44 = g->ecx;
    t45 = g->edx;
    g->edi = arg1;
    g->esp = sp0 - 4u;
    t46 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t45, 1, 3, esi, in_edi, in_esi);
    t47 = g->edx;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t47;
    return t46;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10296290(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10296290(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
