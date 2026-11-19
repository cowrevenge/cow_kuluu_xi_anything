/* f_0x100a5e10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100a5e10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_1c;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100a5e24u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x1cu); goto E_100a5e24;
    case 0x100a5e30u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x1cu); goto E_100a5e30;
    case 0x100a5e39u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x1cu); goto E_100a5e39;
    case 0x100a5e52u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x1cu); goto E_100a5e52;
    case 0x100a5e60u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100a5e60;
    case 0x100a5e6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100a5e6e;
    case 0x100a5ea4u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100a5ea4;
    case 0x100a5eb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_1c = rd32(sp0 - 0x1cu); goto E_100a5eb8;
    default: break;
    }
#endif

    COW_AT(100a5e10)
    wr32(sp0 - 0x1cu, in_esi);
    if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x40u)
    {
        loc_1c = in_esi;
        goto L_100a5eb8;
    }
    eax = rd32(COW_IMG(0x10456a28u));
    ecx = rd32(rd32(COW_IMG(0x10456a28u)));
    COW_AT(100a5e24)
    if (arg1 == 0u)
    {
        loc_1c = in_esi;
        goto L_100a5eb8;
    }
    COW_AT(100a5e30)
    if (rd8(COW_IMG(0x10487f80u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f80u));
        goto L_100a5e52;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f80u));
    COW_AT(100a5e39)
    wr32(sp0 - 0x20u, arg1);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t1 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t2 = g->edx;
    g->edx = t2;
    g->esp = sp0 - 0x1cu;
    t3 = cow_call_regs(g, COW_IMG(0x10021110u), t1, t1, g->edx, 0, 1, arg1);
    t4 = g->edx;
    cow_thiscall(g, COW_IMG(0x100a5ef0u), arg1, 0);
    g->esi = in_esi;
    return;
L_100a5e52: ;
    COW_AT(100a5e52)
    g->eax = eax;
    g->edx = rd32(arg1);
    t5 = rd32(arg1);
    g->esp = sp0 - 0x1cu;
    t6 = cow_thiscall(g, rd32(t5 + 0x340u), arg1, 0);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
    }
    else
    {
        edx = t8;
    COW_AT(100a5e60)
        g->eax = rd32(arg1);
        g->edx = edx;
        t9 = rd32(arg1);
        g->esp = sp0 - 0x1cu;
        t10 = cow_thiscall(g, rd32(t9 + 0x330u), arg1, 0);
        t11 = g->ecx;
        t12 = g->edx;
        if ((uint8_t)t10 == 0u)
        {
            eax = t10;
            ecx = t11;
            edx = t12;
        }
        else
        {
            eax = t10;
            edx = t12;
    COW_AT(100a5e6e)
            wr32(sp0 - 0x20u, sp0 - 0x18u);
            g->eax = eax;
            g->ecx = sp0 - 0x18u;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t13 = cow_cdecl(g, COW_IMG(0x1025e0b0u), 1, sp0 - 0x18u);
            t14 = g->ecx;
            t15 = g->edx;
            g->ecx = t14;
            g->esp = sp0 - 0x20u;
            t16 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
            t17 = g->ecx;
            wr32(sp0 - 0x24u, t16 + 0x50u);
            wr32(sp0 - 0x28u, sp0 - 0x18u);
            wr32(sp0 - 0x2cu, sp0 - 0xcu);
            g->eax = sp0 - 0xcu;
            g->edx = sp0 - 0x18u;
            t18 = cow_cdecl(g, COW_IMG(0x10026fa0u), 3, sp0 - 0xcu, sp0 - 0x18u, t16 + 0x50u);
            t19 = g->edx;
            wr32(sp0 - 0x20u, sp0 - 0xcu);
            g->edx = t19;
            t20 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
            t21 = g->edx;
            g->edx = t21;
            g->esp = sp0 - 0x1cu;
            t22 = cow_thiscall(g, COW_IMG(0x1001e760u), t20, 1, sp0 - 0xcu);
            t23 = g->ecx;
            t24 = g->edx;
            eax = t22;
            ecx = t23;
            edx = t24;
        }
    }
    COW_AT(100a5ea4)
    wr32(sp0 - 0x20u, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t25 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t26 = g->edx;
    g->esp = sp0 - 0x1cu;
    t27 = cow_call_regs(g, COW_IMG(0x1001ee60u), t25, t25, t26, 0, 1, arg1);
    t28 = g->edx;
    cow_thiscall(g, COW_IMG(0x100a5ef0u), arg1, 0);
    loc_1c = rd32(sp0 - 0x1cu);
L_100a5eb8: ;
    COW_AT(100a5eb8)
    g->esi = loc_1c;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100a5e10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100a5e24u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100a5e30u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a5e39u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a5e52u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a5e60u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a5e6eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a5ea4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a5eb8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100a5e10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100a5e10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
