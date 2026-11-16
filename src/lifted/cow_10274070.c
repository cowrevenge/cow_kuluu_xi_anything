/* f_0x10274070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_10274070(Guest* g)
{
    double d4;
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 92u);

    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if (rd32(sp0 + 8u) != 0xffffffffu)
    {
        eax = in_eax;
        ecx = rd32(sp0 + 8u);
    }
    else
    {
        t1 = rd32(arg1 + 0x18u);
        wr32(sp0 + 8u, t1);
        eax = t1;
        ecx = t1;
    }
    if ((int32_t)ecx < (int32_t)rd32(arg1 + 0x1cu)) goto L_102740a8;
    wr32(sp0 - 0x18u, COW_IMG(0x103b274cu));
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b274cu), in_edi);
    t3 = g->edx;
    g->edx = t3;
    return 0xffffffffu;
L_102740a8: ;
    d4 = (double)rdf32(sp0 + 0x14u);
    if ((cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        ebp = ecx * 0xd8u + rd32(arg1 + 0x20u);
        goto L_102741e9;
    }
    ebp = ecx * 0xd8u + rd32(arg1 + 0x20u);
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, sp0 - 4u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x1026f510u), 2, sp0 - 8u, sp0 - 4u);
    wr32(sp0 - 0x24u, 0u);
    t5 = rd32(sp0 - 8u) + rd32(arg4 * 0xcu + rd32(arg1 + 0x10u) + 4u) * 0xc0u;
    wr32(sp0 - 0x28u, t5);
    wr32(sp0 - 0x2cu, ebp + 8u);
    g->edx = t5;
    t6 = rd32(arg1 + 0x10u);
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x1027e140u), 3, ebp + 8u, t5, 0u);
    t7 = g->edx;
    wr32(sp0 - 0x30u, 0u);
    t8 = rd32(sp0 - 8u) + rd32(arg4 * 0xcu + t6 + 8u) * 0xc0u;
    wr32(sp0 - 0x34u, t8);
    wr32(sp0 - 0x38u, ebp + 0x70u);
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x1027e140u), 3, ebp + 0x70u, t8, 0u);
    wr32(sp0 - 0x3cu, 1u);
    t9 = rd32(sp0 - 8u) + rd32(arg3 * 0xcu + rd32(arg1 + 0x10u) + 4u) * 0xc0u;
    wr32(sp0 - 0x40u, t9);
    wr32(sp0 - 0x44u, ebp + 8u);
    g->ecx = t9;
    t10 = rd32(arg1 + 0x10u);
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x1027e140u), 3, ebp + 8u, t9, 1u);
    t11 = g->ecx;
    wr32(sp0 - 0x48u, 1u);
    t12 = rd32(sp0 - 8u) + rd32(arg3 * 0xcu + t10 + 8u) * 0xc0u;
    wr32(sp0 - 0x4cu, t12);
    wr32(sp0 - 0x50u, ebp + 0x70u);
    g->eax = rd32(sp0 - 8u);
    g->ecx = t11;
    g->edx = t12;
    t13 = rd32(sp0 - 8u);
    g->esp = sp0 - 0x44u;
    t14 = cow_cdecl(g, COW_IMG(0x1027e140u), 3, ebp + 0x70u, t12, 1u);
    t15 = g->ecx;
    t16 = g->edx;
    wr32(sp0 - 0x54u, arg5);
    wr32(sp0 - 0x58u, ebp + 8u);
    g->ecx = t15;
    g->edx = t16;
    g->esp = sp0 - 0x50u;
    t17 = cow_cdecl(g, COW_IMG(0x1027e160u), 2, ebp + 8u, arg5);
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 - 0x1cu, arg5);
    wr32(sp0 - 0x20u, ebp + 0x70u);
    g->ecx = t18;
    g->edx = t19;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x1027e160u), 2, ebp + 0x70u, arg5);
    t20 = g->ecx;
    t21 = g->edx;
    if (arg6 == 0u)
    {
        ecx = t20;
        edx = t21;
        esi = ebp + 8u;
        edi = ebp + 0x70u;
    }
    else
    {
        ecx = t20;
        edx = t21;
        esi = ebp + 8u;
        edi = ebp + 0x70u;
        wr32(sp0 - 0x18u, 1u);
        wr32(sp0 - 0x1cu, 4u);
        wr32(sp0 - 0x20u, esi);
        g->eax = arg6;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t22 = cow_cdecl(g, COW_IMG(0x1027e170u), 3, esi, 4u, 1u);
        t23 = g->ecx;
        t24 = g->edx;
        wr32(sp0 - 0x24u, 1u);
        wr32(sp0 - 0x28u, 4u);
        wr32(sp0 - 0x2cu, edi);
        g->ecx = t23;
        g->edx = t24;
        g->esp = sp0 - 0x20u;
        cow_cdecl(g, COW_IMG(0x1027e170u), 3, edi, 4u, 1u);
        t25 = g->ecx;
        t26 = g->edx;
        ecx = t25;
        edx = t26;
    }
    wr32(sp0 - 0x18u, esi);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t27 = cow_thiscall_cdecl(g, COW_IMG(0x1027e1f0u), ecx, 5, esi, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t28 = g->ecx;
    t29 = g->edx;
    if (t27 != 0u)
    {
        ecx = t28;
        edx = t29;
        goto L_102741bd;
    }
    eax = t27;
    ecx = t28;
    edx = t29;
    wr32(sp0 - 0x18u, COW_IMG(0x103b2714u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t30 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2714u), rd32(sp0 - 0x14u));
    t31 = g->edx;
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0xcu);
    g->edx = t31;
    return 0xffffffffu;
L_102741bd: ;
    wr32(sp0 - 0x18u, edi);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t32 = cow_thiscall_cdecl(g, COW_IMG(0x1027e1f0u), ecx, 5, edi, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t33 = g->ecx;
    t34 = g->edx;
    if (t32 != 0u) goto L_102741e1;
    eax = t32;
    ecx = t33;
    edx = t34;
    wr32(sp0 - 0x18u, COW_IMG(0x103b26dcu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t35 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b26dcu), rd32(sp0 - 0x14u));
    t36 = g->edx;
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0xcu);
    g->edx = t36;
    return 0xffffffffu;
L_102741e1: ;
    ecx = rd32(sp0 + 8u);
L_102741e9: ;
    wr32(ebp, arg3);
    wr32(ebp + 4u, arg4);
    if ((int32_t)ecx >= (int32_t)rd32(arg1 + 0x18u))
    {
        eax = rd32(arg1 + 0x18u);
        wr32(arg1 + 0x18u, eax + 1u);
    }
    g->edx = arg4;
    return ecx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10274070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10274070(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
