/* f_0x102b1710 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102b1710(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 144u);

    wr32(sp0 - 0x60u, in_ebx);
    wr32(sp0 - 0x64u, in_ebp);
    wr32(sp0 - 0x68u, in_esi);
    wr32(sp0 - 0x6cu, in_edi);
    if (arg2 != 0u) goto L_102b1748;
    wr32(sp0 - 0x70u, 0x229u);
    wr32(sp0 - 0x74u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x78u, COW_IMG(0x103b379cu));
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x70u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x7cu, COW_IMG(0x103bfb10u));
    g->esp = sp0 - 0x74u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bfb10u), COW_IMG(0x103b379cu));
    return;
L_102b1748: ;
    if (rd32(sp0 + 0xcu) == 2u) goto L_102b1778;
    wr32(sp0 - 0x70u, 0x22fu);
    wr32(sp0 - 0x74u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x78u, COW_IMG(0x103b379cu));
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x70u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x7cu, COW_IMG(0x103b4228u));
    g->esp = sp0 - 0x74u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b4228u), COW_IMG(0x103b379cu));
    return;
L_102b1778: ;
    wr32(sp0 - 0x70u, arg2);
    wr32(sp0 - 0x74u, 0x50u);
    wr32(sp0 - 0x78u, 1u);
    wr32(sp0 - 0x7cu, sp0 - 0x50u);
    g->esp = sp0 - 0x50u;
    cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, in_edx, 1, 11, sp0 - 0x50u, 1u, 0x50u, arg2, in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
    t7 = g->edx;
    wr32(sp0 - 0x80u, arg2);
    wr32(sp0 - 0x84u, 1u);
    wr32(sp0 - 0x88u, 4u);
    wr32(sp0 - 0x8cu, sp0 + 8u);
    g->ecx = sp0 + 8u;
    g->esp = sp0 - 0x60u;
    cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, t7, 1, 11, sp0 + 8u, 4u, 1u, arg2, sp0 - 0x50u, 1u, 0x50u, arg2, in_edi, in_esi, in_ebp);
    t8 = g->ecx;
    t9 = g->edx;
    if ((int32_t)arg2 > 0)
    {
        ecx = t8;
        edx = t9;
        goto L_102b17d8;
    }
    ecx = t8;
    edx = t9;
    wr32(sp0 - 0x70u, 0x238u);
    wr32(sp0 - 0x74u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x78u, COW_IMG(0x103b379cu));
    g->eax = arg2;
    g->ecx = ecx;
    g->esp = sp0 - 0x70u;
    t10 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t11 = g->ecx;
    wr32(sp0 - 0x7cu, arg2);
    wr32(sp0 - 0x80u, COW_IMG(0x103bfae4u));
    g->esp = sp0 - 0x78u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bfae4u), arg2);
    g->ebx = rd32(sp0 - 0x60u);
    g->esi = rd32(sp0 - 0x68u);
    g->edi = rd32(sp0 - 0x6cu);
    g->ebp = rd32(sp0 - 0x64u);
    return;
L_102b17d8: ;
    wr32(sp0 - 0x70u, arg2);
    wr32(sp0 - 0x74u, 1u);
    wr32(sp0 - 0x78u, 4u);
    wr32(sp0 - 0x7cu, sp0 - 0x5cu);
    g->ecx = ecx;
    g->esp = sp0 - 0x50u;
    cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, edx, 1, 11, sp0 - 0x5cu, 4u, 1u, arg2, rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
    t12 = g->ecx;
    t13 = g->edx;
    if ((int32_t)rd32(sp0 - 0x5cu) > 0)
    {
        ecx = t12;
        goto L_102b1820;
    }
    eax = rd32(sp0 - 0x5cu);
    ecx = t12;
    edx = t13;
    wr32(sp0 - 0x70u, 0x23eu);
    wr32(sp0 - 0x74u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x78u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x70u;
    t14 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t15 = g->edx;
    t16 = rd32(sp0 - 0x5cu);
    wr32(sp0 - 0x7cu, t16);
    wr32(sp0 - 0x80u, COW_IMG(0x103bfac0u));
    g->esp = sp0 - 0x78u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bfac0u), t16);
    g->ebx = rd32(sp0 - 0x60u);
    g->esi = rd32(sp0 - 0x68u);
    g->edi = rd32(sp0 - 0x6cu);
    g->ebp = rd32(sp0 - 0x64u);
    return;
L_102b1820: ;
    wr32(sp0 - 0x70u, arg2);
    wr32(sp0 - 0x74u, arg1);
    g->edx = arg2;
    g->esp = sp0 - 0x68u;
    cow_cdecl(g, COW_IMG(0x1029a350u), 3, arg1, arg2, rd32(sp0 - 0x6cu));
    t17 = g->edx;
    wr32(sp0 + 0xcu, 0u);
    if ((int32_t)arg2 <= 0) goto L_102b19c7;
    edx = t17;
    edi = 0u;
L_102b184a: ;
    wr32(sp0 - 0x70u, arg2);
    wr32(sp0 - 0x74u, 2u);
    wr32(sp0 - 0x78u, 4u);
    wr32(sp0 - 0x7cu, sp0 - 0x58u);
    g->ecx = sp0 - 0x58u;
    g->esp = sp0 - 0x50u;
    cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, edx, 1, 11, sp0 - 0x58u, 4u, 2u, arg2, rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
    t18 = g->ecx;
    t19 = g->edx;
    if ((int32_t)rd32(sp0 - 0x58u) < 0)
    {
        eax = rd32(sp0 - 0x58u);
        ecx = t18;
        edx = t19;
        goto L_102b199b;
    }
    ecx = t18;
    edx = t19;
    if ((int32_t)rd32(sp0 - 0x54u) <= 0)
    {
        eax = rd32(sp0 - 0x54u);
        goto L_102b199b;
    }
    eax = rd32(sp0 - 0x54u);
    wr32(sp0 - 0x70u, 0x254u);
    wr32(sp0 - 0x74u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x78u, 4u);
    wr32(sp0 - 0x7cu, eax);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x68u;
    t20 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, eax, 4u, COW_IMG(0x103bf904u), 0x254u, rd32(sp0 - 0x6cu));
    t21 = g->ecx;
    t22 = g->edx;
    if (t20 == 0u)
    {
        eax = t20;
        ecx = t21;
        edx = t22;
        goto L_102b193d;
    }
    ecx = t21;
    ebx = t20;
    wr32(sp0 - 0x70u, arg2);
    t23 = rd32(sp0 - 0x54u);
    wr32(sp0 - 0x74u, t23);
    wr32(sp0 - 0x78u, 4u);
    wr32(sp0 - 0x7cu, ebx);
    g->ecx = ecx;
    g->esp = sp0 - 0x50u;
    cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, t23, 1, 11, ebx, 4u, t23, arg2, rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
    t24 = g->ecx;
    t25 = g->edx;
    wr32(sp0 - 0x80u, 0x25eu);
    wr32(sp0 - 0x84u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x88u, 4u);
    t26 = rd32(sp0 - 0x54u);
    wr32(sp0 - 0x8cu, t26);
    g->ecx = t24;
    g->edx = t25;
    g->esp = sp0 - 0x78u;
    t27 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t26, 4u, COW_IMG(0x103bf904u), 0x25eu, rd32(sp0 - 0x7cu));
    t28 = g->ecx;
    t29 = g->edx;
    if (t27 == 0u)
    {
        eax = t27;
        ecx = t28;
        edx = t29;
        goto L_102b196c;
    }
    edx = t29;
    esi = t27;
    wr32(sp0 - 0x70u, arg2);
    t30 = rd32(sp0 - 0x54u);
    wr32(sp0 - 0x74u, t30);
    wr32(sp0 - 0x78u, 4u);
    wr32(sp0 - 0x7cu, esi);
    g->ecx = t30;
    g->esp = sp0 - 0x50u;
    cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, edx, 1, 11, esi, 4u, t30, arg2, rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
    t31 = g->ecx;
    t32 = rd32(sp0 - 0x58u);
    wr32(sp0 - 0x80u, t32);
    wr32(sp0 - 0x84u, arg1);
    g->ecx = t31;
    g->edx = t32;
    g->esp = sp0 - 0x7cu;
    t33 = cow_cdecl(g, COW_IMG(0x1029a440u), 2, arg1, t32);
    t34 = g->ecx;
    t35 = g->edx;
    if (t33 == 0u)
    {
        edx = t35;
    }
    else
    {
        ecx = t34;
        edx = t35;
        edi = t33;
        g->esp = sp0 - 0x6cu;
        t36 = cow_stdcall(g, COW_IMG(0x102af560u), 0);
        t37 = rd32(sp0 - 0x54u);
        wr32(t36 + 0x9cu, edi);
        wr32(sp0 - 0x70u, t36);
        wr32(sp0 - 0x74u, arg1);
        wr32(t36 + 0x50u, t37);
        wr32(t36 + 0x30u, ebx);
        wr32(t36 + 0x38u, esi);
        wr32(t36 + 0x3cu, 0u);
        wr32(t36 + 0x58u, edi + 0x24u);
        g->edx = arg1;
        g->esp = sp0 - 0x60u;
        cow_call_regs(g, COW_IMG(0x1029a3a0u), t36, g->ecx, g->edx, 1, 5, arg1, t36, rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u));
        t38 = g->edx;
        edx = t38;
    }
    t39 = rd32(sp0 + 0xcu) + 1u;
    t40 = rd32(sp0 + 0xcu);
    wr32(sp0 + 0xcu, t39);
    if ((int32_t)(t40 + 1u) < (int32_t)arg2) goto L_102b1846;
    g->ebx = rd32(sp0 - 0x60u);
    g->esi = rd32(sp0 - 0x68u);
    g->edi = rd32(sp0 - 0x6cu);
    g->ebp = rd32(sp0 - 0x64u);
    return;
L_102b1846: ;
    edi = rd32(sp0 + 0xcu);
    goto L_102b184a;
L_102b193d: ;
    wr32(sp0 - 0x70u, 0x256u);
    wr32(sp0 - 0x74u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x78u, COW_IMG(0x103b379cu));
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x70u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t44 = g->ecx;
    t45 = g->edx;
    t46 = rd32(sp0 - 0x54u);
    wr32(sp0 - 0x7cu, t46);
    wr32(sp0 - 0x80u, edi);
    wr32(sp0 - 0x84u, COW_IMG(0x103bfa8cu));
    g->esp = sp0 - 0x7cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bfa8cu), edi);
    g->ebx = rd32(sp0 - 0x60u);
    g->esi = rd32(sp0 - 0x68u);
    g->edi = rd32(sp0 - 0x6cu);
    g->ebp = rd32(sp0 - 0x64u);
    return;
L_102b196c: ;
    wr32(sp0 - 0x70u, 0x260u);
    wr32(sp0 - 0x74u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x78u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x70u;
    t41 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t42 = g->edx;
    t43 = rd32(sp0 - 0x54u);
    wr32(sp0 - 0x7cu, t43);
    wr32(sp0 - 0x80u, edi);
    wr32(sp0 - 0x84u, COW_IMG(0x103bfa54u));
    g->esp = sp0 - 0x7cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bfa54u), edi);
    g->ebx = rd32(sp0 - 0x60u);
    g->esi = rd32(sp0 - 0x68u);
    g->edi = rd32(sp0 - 0x6cu);
    g->ebp = rd32(sp0 - 0x64u);
    return;
L_102b199b: ;
    wr32(sp0 - 0x70u, 0x24du);
    wr32(sp0 - 0x74u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x78u, COW_IMG(0x103b379cu));
    g->ecx = ecx;
    g->esp = sp0 - 0x70u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t47 = g->ecx;
    t48 = rd32(sp0 - 0x54u);
    wr32(sp0 - 0x7cu, t48);
    t49 = rd32(sp0 - 0x58u);
    wr32(sp0 - 0x80u, t49);
    wr32(sp0 - 0x84u, edi);
    wr32(sp0 - 0x88u, COW_IMG(0x103bfa28u));
    g->esp = sp0 - 0x80u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bfa28u), edi);
L_102b19c7: ;
    g->ebx = rd32(sp0 - 0x60u);
    g->esi = rd32(sp0 - 0x68u);
    g->edi = rd32(sp0 - 0x6cu);
    g->ebp = rd32(sp0 - 0x64u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b1710(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b1710(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
