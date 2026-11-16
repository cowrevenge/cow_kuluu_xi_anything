/* f_0x10285a70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10285a70(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_220;
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
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 572u);

    wr32(sp0 - 0x214u, in_ebx);
    wr32(sp0 - 0x218u, in_esi);
    wr32(sp0 - 0x21cu, in_edi);
    wr32(sp0 - 0x220u, COW_IMG(0x10361d24u));
    wr32(sp0 - 0x224u, arg3);
    g->edx = in_edx;
    g->esp = sp0 - 0x21cu;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), self, 2, arg3, COW_IMG(0x10361d24u));
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        ebx = t1;
        goto L_10285aa0;
    }
    eax = t1;
    edx = t3;
    g->edx = edx;
    return eax & 0xffffff00u;
L_10285aa0: ;
    wr32(sp0 - 0x220u, arg3);
    g->edx = edx;
    g->esp = sp0 - 0x1fcu;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x1028a380u), ecx, 9, arg3, in_edi, in_esi, in_ebx, rd32(sp0 - 0x210u), rd32(sp0 - 0x20cu), rd32(sp0 - 0x208u), rd32(sp0 - 0x204u), rd32(sp0 - 0x200u));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x224u, arg3);
    g->ebx = ebx;
    g->edx = t6;
    g->esp = sp0 - 0x220u;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x1028a2b0u), t5, 1, arg3);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x220u, t7);
    if (t4 == 0u)
    {
        edx = t9;
        edi = t7;
        loc_220 = t7;
        wr32(sp0 - 0x224u, COW_IMG(0x103b7e98u));
        wr32(sp0 - 0x228u, sp0 - 0x200u);
        g->ebx = ebx;
        g->ecx = sp0 - 0x200u;
        g->edx = edx;
        g->esp = sp0 - 0x214u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x200u, COW_IMG(0x103b7e98u), loc_220, rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u));
        t14 = g->ecx;
        t15 = g->edx;
        ecx = t14;
        edx = t15;
    }
    else
    {
        ecx = t8;
        edx = t9;
        esi = t4;
        edi = t7;
        loc_220 = t7;
        wr32(sp0 - 0x224u, esi);
        wr32(sp0 - 0x228u, COW_IMG(0x103b7eccu));
        wr32(sp0 - 0x22cu, sp0 - 0x200u);
        g->ebx = ebx;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x218u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x200u, COW_IMG(0x103b7eccu), esi, loc_220, rd32(sp0 - 0x21cu));
        t10 = g->ecx;
        t11 = g->edx;
        wr32(sp0 - 0x230u, 0xaf8u);
        wr32(sp0 - 0x234u, COW_IMG(0x103b7ea0u));
        wr32(sp0 - 0x238u, esi);
        g->ecx = t10;
        g->edx = t11;
        g->esp = sp0 - 0x22cu;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, esi, COW_IMG(0x103b7ea0u), 0xaf8u);
        t12 = g->ecx;
        t13 = g->edx;
        ecx = t12;
        edx = t13;
    }
    wr32(sp0 - 0x220u, 0xafeu);
    wr32(sp0 - 0x224u, COW_IMG(0x103b7ea0u));
    wr32(sp0 - 0x228u, edi);
    g->ecx = ecx;
    g->esp = sp0 - 0x21cu;
    t16 = cow_cdecl(g, COW_IMG(0x10276110u), 3, edi, COW_IMG(0x103b7ea0u), 0xafeu);
    t17 = g->ecx;
    wr32(sp0 - 0x22cu, COW_IMG(0x10361d24u));
    wr32(sp0 - 0x230u, sp0 - 0x200u);
    g->edx = sp0 - 0x200u;
    g->esp = sp0 - 0x228u;
    t18 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), t17, 2, sp0 - 0x200u, COW_IMG(0x10361d24u));
    t19 = g->ecx;
    t20 = g->edx;
    if (t18 != 0u)
    {
        edx = t20;
        esi = t18;
        goto L_10285b35;
    }
    ecx = t19;
    edx = t20;
    wr32(sp0 - 0x220u, sp0 - 0x200u);
    wr32(sp0 - 0x224u, COW_IMG(0x103b7e64u));
    g->eax = sp0 - 0x200u;
    g->edx = edx;
    g->esp = sp0 - 0x21cu;
    t21 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b7e64u), sp0 - 0x200u);
    t22 = g->edx;
    g->ebx = rd32(sp0 - 0x214u);
    g->esi = rd32(sp0 - 0x218u);
    g->edi = rd32(sp0 - 0x21cu);
    g->edx = t22;
    return t21 & 0xffffff00u;
L_10285b35: ;
    wr32(sp0 - 0x220u, sp0 - 0x210u);
    g->ecx = sp0 - 0x210u;
    g->esp = sp0 - 0x21cu;
    cow_cdecl(g, COW_IMG(0x10285bf0u), 1, sp0 - 0x210u);
    t23 = g->ecx;
    wr32(sp0 - 0x224u, ebx);
    wr32(sp0 - 0x228u, sp0 - 0x210u);
    g->ebx = ebx;
    g->ecx = t23;
    g->edx = sp0 - 0x210u;
    g->esp = sp0 - 0x220u;
    cow_cdecl(g, COW_IMG(0x10285c10u), 2, sp0 - 0x210u, ebx);
    t24 = g->ecx;
    t25 = g->edx;
    wr32(sp0 - 0x22cu, ebx);
    wr32(sp0 - 0x230u, arg1);
    g->ebx = ebx;
    g->ecx = t24;
    g->edx = t25;
    g->esp = sp0 - 0x210u;
    t26 = cow_cdecl(g, COW_IMG(0x10285c80u), 8, arg1, ebx, sp0 - 0x210u, rd32(sp0 - 0x224u), sp0 - 0x210u, rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u), rd32(sp0 - 0x214u));
    t27 = g->ecx;
    t28 = g->edx;
    if ((uint8_t)t26 != 0u)
    {
        ecx = t27;
        edx = t28;
        goto L_10285b8e;
    }
    eax = t26;
    ecx = t27;
    edx = t28;
    wr32(sp0 - 0x220u, COW_IMG(0x103b7e38u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x218u;
    t29 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b7e38u), rd32(sp0 - 0x21cu));
    t30 = g->ecx;
    t31 = g->edx;
    wr32(sp0 - 0x224u, COW_IMG(0x103b7e14u));
    g->ecx = t30;
    g->edx = t31;
    g->esp = sp0 - 0x21cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b7e14u), COW_IMG(0x103b7e38u));
    t32 = g->ecx;
    t33 = g->edx;
    wr32(sp0 - 0x228u, ebx);
    g->edi = arg1;
    g->ecx = t32;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t33, 1, 3, ebx, COW_IMG(0x103b7e14u), COW_IMG(0x103b7e38u));
    t34 = g->ecx;
    t35 = g->edx;
    wr32(sp0 - 0x22cu, esi);
    g->edi = arg1;
    g->esp = sp0 - 0x220u;
    t36 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t35, 1, 3, esi, rd32(sp0 - 0x228u), COW_IMG(0x103b7e14u));
    t37 = g->edx;
    g->ebx = rd32(sp0 - 0x214u);
    g->esi = rd32(sp0 - 0x218u);
    g->edi = rd32(sp0 - 0x21cu);
    g->edx = t37;
    return t36 & 0xffffff00u;
L_10285b8e: ;
    wr32(sp0 - 0x220u, esi);
    wr32(sp0 - 0x224u, arg2);
    wr32(sp0 - 0x228u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x204u;
    t38 = cow_thiscall_cdecl(g, COW_IMG(0x102879b0u), ecx, 9, arg1, arg2, esi, rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u), rd32(sp0 - 0x214u), rd32(sp0 - 0x210u), rd32(sp0 - 0x20cu), rd32(sp0 - 0x208u));
    t39 = g->ecx;
    t40 = g->edx;
    if ((uint8_t)t38 != 0u)
    {
        ecx = t39;
        edx = t40;
        goto L_10285bc9;
    }
    eax = t38;
    ecx = t39;
    edx = t40;
    wr32(sp0 - 0x220u, COW_IMG(0x103b7de0u));
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x218u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b7de0u), rd32(sp0 - 0x21cu));
    t41 = g->ecx;
    t42 = g->edx;
    wr32(sp0 - 0x224u, ebx);
    g->edi = arg1;
    g->ecx = t41;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t42, 1, 3, ebx, COW_IMG(0x103b7de0u), rd32(sp0 - 0x21cu));
    t43 = g->ecx;
    t44 = g->edx;
    wr32(sp0 - 0x228u, esi);
    g->edi = arg1;
    g->esp = sp0 - 0x21cu;
    t45 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t44, 1, 3, esi, rd32(sp0 - 0x224u), COW_IMG(0x103b7de0u));
    t46 = g->edx;
    g->ebx = rd32(sp0 - 0x214u);
    g->esi = rd32(sp0 - 0x218u);
    g->edi = rd32(sp0 - 0x21cu);
    g->edx = t46;
    return t45 & 0xffffff00u;
L_10285bc9: ;
    wr32(sp0 - 0x220u, ebx);
    g->edi = arg1;
    g->ecx = ecx;
    g->esp = sp0 - 0x214u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, ebx, rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u));
    t47 = g->ecx;
    t48 = g->edx;
    wr32(sp0 - 0x224u, esi);
    g->edi = arg1;
    g->esp = sp0 - 0x218u;
    t49 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t48, 1, 3, esi, rd32(sp0 - 0x220u), rd32(sp0 - 0x21cu));
    t50 = g->edx;
    g->ebx = rd32(sp0 - 0x214u);
    g->esi = rd32(sp0 - 0x218u);
    g->edi = rd32(sp0 - 0x21cu);
    g->edx = t50;
    return (t49 & 0xffffff00u) | (uint8_t)(t49 | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10285a70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10285a70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
