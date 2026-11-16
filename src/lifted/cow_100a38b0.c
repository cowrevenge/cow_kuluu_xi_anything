/* f_0x100a38b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100a38b0(Guest* g)
{
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(arg3 + 0xcu) != 0xfau)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        if (rd32(COW_IMG(0x10578158u)) == 0u)
        {
            ecx = rd32(COW_IMG(0x10578158u));
            edx = in_edx;
        }
        else
        {
            ecx = rd32(COW_IMG(0x10578158u));
            g->edx = in_edx;
            g->esp = sp0 - 4u;
            cow_thiscall(g, COW_IMG(0x10129de0u), ecx, 1, 0x2du);
            t1 = g->ecx;
            t2 = g->edx;
            ecx = t1;
            edx = t2;
        }
    }
    if (rd8(arg3 + 0xcu) == 0xf9u)
    {
        g->edx = edx;
        t3 = rd32(COW_IMG(0x10578158u));
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10129e30u), t3, 1, 0xb9u);
        t4 = g->ecx;
        t5 = g->edx;
        ecx = t4;
        edx = t5;
    }
    if (rd8(arg3 + 4u) - 1u > 0xeu)
    {
        eax = rd8(arg3 + 4u) - 1u;
        goto L_100a3a76;
    }
    eax = rd8(arg3 + 4u) - 1u;
    t6 = rd32(COW_IMG(0x100a3a7cu) + eax * 4u);
    switch (t6 - RD)
    {
    case 0x100a38f8u: goto L_100a38f8;
    case 0x100a390au: goto L_100a390a;
    case 0x100a391cu: goto L_100a391c;
    case 0x100a392eu: goto L_100a392e;
    case 0x100a3940u: goto L_100a3940;
    case 0x100a3952u: goto L_100a3952;
    case 0x100a3964u: goto L_100a3964;
    case 0x100a3976u: goto L_100a3976;
    case 0x100a3988u: goto L_100a3988;
    case 0x100a39aau: goto L_100a39aa;
    case 0x100a39dcu: goto L_100a39dc;
    case 0x100a39feu: goto L_100a39fe;
    case 0x100a3a20u: goto L_100a3a20;
    case 0x100a3a39u: goto L_100a3a39;
    case 0x100a3a52u: goto L_100a3a52;
    default: rt_fatal(g, COW_IMG(0x100a38f1u), "switch");
    }
    return 0;
L_100a38f8: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t45 = cow_cdecl(g, COW_IMG(0x100f8080u), 2, arg1, arg3);
    t46 = g->edx;
    g->esi = in_esi;
    g->edx = t46;
    return (t45 & 0xffffff00u) | 1u;
L_100a390a: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t43 = cow_call_regs(g, COW_IMG(0x100f82b0u), eax, g->ecx, g->edx, 1, 2, arg1, arg3);
    t44 = g->edx;
    g->esi = in_esi;
    g->edx = t44;
    return (t43 & 0xffffff00u) | 1u;
L_100a391c: ;
    g->edx = arg1;
    g->esp = sp0 - 4u;
    t41 = cow_call_regs(g, COW_IMG(0x100f8320u), eax, g->ecx, g->edx, 1, 2, arg1, arg3);
    t42 = g->edx;
    g->esi = in_esi;
    g->edx = t42;
    return (t41 & 0xffffff00u) | 1u;
L_100a392e: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t39 = cow_call_regs(g, COW_IMG(0x100f8390u), arg1, g->ecx, g->edx, 1, 2, arg1, arg3);
    t40 = g->edx;
    g->esi = in_esi;
    g->edx = t40;
    return (t39 & 0xffffff00u) | 1u;
L_100a3940: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t37 = cow_call_regs(g, COW_IMG(0x100f8400u), eax, g->ecx, g->edx, 1, 2, arg1, arg3);
    t38 = g->edx;
    g->esi = in_esi;
    g->edx = t38;
    return (t37 & 0xffffff00u) | 1u;
L_100a3952: ;
    g->edx = arg1;
    g->esp = sp0 - 4u;
    t35 = cow_call_regs(g, COW_IMG(0x100f8480u), eax, g->ecx, g->edx, 1, 2, arg1, arg3);
    t36 = g->edx;
    g->esi = in_esi;
    g->edx = t36;
    return (t35 & 0xffffff00u) | 1u;
L_100a3964: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t33 = cow_call_regs(g, COW_IMG(0x100f84f0u), arg1, g->ecx, g->edx, 1, 2, arg1, arg3);
    t34 = g->edx;
    g->esi = in_esi;
    g->edx = t34;
    return (t33 & 0xffffff00u) | 1u;
L_100a3976: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t31 = cow_call_regs(g, COW_IMG(0x100f8580u), eax, g->ecx, g->edx, 1, 2, arg1, arg3);
    t32 = g->edx;
    g->esi = in_esi;
    g->edx = t32;
    return (t31 & 0xffffff00u) | 1u;
L_100a3988: ;
    if (rd32(COW_IMG(0x10578450u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10578450u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x10578450u));
        g->esi = arg3;
        g->ecx = ecx;
        g->esp = sp0 - 4u;
        t27 = cow_call_regs(g, COW_IMG(0x1014d0b0u), g->eax, g->ecx, edx, 0, 1, arg3);
        t28 = g->ecx;
        eax = t27;
        ecx = t28;
    }
    g->edx = arg1;
    g->esp = sp0 - 4u;
    t29 = cow_call_regs(g, COW_IMG(0x100f85f0u), eax, g->ecx, g->edx, 1, 2, arg1, arg3);
    t30 = g->edx;
    g->esi = in_esi;
    g->edx = t30;
    return (t29 & 0xffffff00u) | 1u;
L_100a39aa: ;
    if (rd32(COW_IMG(0x10578450u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578450u));
        g->esi = arg3;
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x1014d0b0u), g->eax, g->ecx, edx, 0, 1, arg3);
        t22 = g->edx;
        edx = t22;
    }
    if (rd32(COW_IMG(0x10578198u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10578198u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x10578198u));
        g->ecx = ecx;
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x1012f2a0u), g->eax, g->ecx, edx, 0, 1, arg3);
        t23 = g->ecx;
        t24 = g->edx;
        ecx = t23;
        edx = t24;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    t25 = cow_call_regs(g, COW_IMG(0x100f8660u), arg1, ecx, g->edx, 1, 2, arg1, arg3);
    t26 = g->edx;
    g->esi = in_esi;
    g->edx = t26;
    return (t25 & 0xffffff00u) | 1u;
L_100a39dc: ;
    if (rd32(COW_IMG(0x10578450u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578450u));
        g->esi = arg3;
        g->esp = sp0 - 4u;
        t18 = cow_call_regs(g, COW_IMG(0x1014d0b0u), g->eax, g->ecx, edx, 0, 1, arg3);
        t19 = g->edx;
        eax = t18;
        edx = t19;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    t20 = cow_call_regs(g, COW_IMG(0x100f86e0u), eax, arg1, g->edx, 1, 2, arg1, arg3);
    t21 = g->edx;
    g->esi = in_esi;
    g->edx = t21;
    return (t20 & 0xffffff00u) | 1u;
L_100a39fe: ;
    if (rd32(COW_IMG(0x10578198u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10578198u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x10578198u));
        g->esp = sp0 - 4u;
        cow_fastcall(g, COW_IMG(0x1012f880u), ecx, edx, 1, arg3);
        t15 = g->ecx;
        ecx = t15;
    }
    g->edx = arg1;
    g->esp = sp0 - 4u;
    t16 = cow_cdecl(g, COW_IMG(0x100f8760u), 2, arg1, arg3);
    t17 = g->edx;
    g->edx = t17;
    return (t16 & 0xffffff00u) | 1u;
L_100a3a20: ;
    if (rd8(arg3 + 0xcu) != 1u) goto L_100a3a76;
    if (rd32(COW_IMG(0x10578198u)) == 0u) goto L_100a3a76;
    ecx = rd32(COW_IMG(0x10578198u));
    g->edx = edx;
    g->esp = sp0 - 4u;
    t13 = cow_thiscall(g, COW_IMG(0x1012eff0u), ecx, 0);
    t14 = g->edx;
    g->edx = t14;
    return (t13 & 0xffffff00u) | 1u;
L_100a3a39: ;
    if (rd8(arg3 + 0xcu) != 1u) goto L_100a3a76;
    if (rd32(COW_IMG(0x10578450u)) == 0u) goto L_100a3a76;
    ecx = rd32(COW_IMG(0x10578450u));
    g->edx = edx;
    g->esp = sp0 - 4u;
    t11 = cow_thiscall(g, COW_IMG(0x1014ce80u), ecx, 0);
    t12 = g->edx;
    g->edx = t12;
    return (t11 & 0xffffff00u) | 1u;
L_100a3a52: ;
    if (rd8(arg3 + 0xcu) == 1u)
    {
        if (rd32(COW_IMG(0x10578450u)) != 0u)
        {
            ecx = rd32(COW_IMG(0x10578450u));
            g->edx = edx;
            g->esp = sp0 - 4u;
            t7 = cow_thiscall(g, COW_IMG(0x1014d000u), ecx, 0);
            t8 = g->edx;
            eax = t7;
            edx = t8;
        }
        if (rd32(COW_IMG(0x10578198u)) != 0u)
        {
            ecx = rd32(COW_IMG(0x10578198u));
            g->edx = edx;
            g->esp = sp0 - 4u;
            t9 = cow_call_regs(g, COW_IMG(0x1012f1b0u), eax, ecx, g->edx, 1, 0);
            t10 = g->edx;
            eax = t9;
            edx = t10;
        }
    }
L_100a3a76: ;
    g->esi = in_esi;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a38b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a38b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
