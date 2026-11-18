/* f_0x10216770 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10216770(Guest* g)
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10212640u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; in_esi = g->esi; goto E_10212640;
    case 0x1021272du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021272d;
    case 0x1021273au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021273a;
    case 0x10212744u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10212744;
    case 0x10212753u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10212753;
    case 0x1021275au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021275a;
    case 0x10216777u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; in_esi = g->esi; goto E_10216777;
    case 0x1021677cu: in_eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; in_esi = g->esi; goto E_1021677c;
    default: break;
    }
#endif

    COW_AT(10216770)
    if (rd32(self + 0x14u) == 0u) goto L_1021677c;
    ecx = rd32(self + 0x14u);
    COW_AT(10216777)
    COW_AT(10212640)
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, sp0 - 0xcu);
    t1 = rd32(ecx + 8u);
    wr16(sp0 - 0xcu, 0u);
    wr16(sp0 - 0xau, 0u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    g->esp = sp0 - 0x14u;
    t2 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0xcu, t1, g->edx, 0, 1, sp0 - 0xcu);
    t3 = g->ecx;
    t4 = rd16(sp0 - 0xcu);
    t5 = rd16(sp0 - 0xau);
    t6 = rd32(sp0 - 0xcu);
    wr16(ecx + 0x180u, (uint16_t)t4);
    wr16(ecx + 0x17cu, (uint16_t)t4);
    t7 = rd32(sp0 - 8u);
    wr16(ecx + 0x182u, (uint16_t)t5);
    wr16(ecx + 0x17eu, (uint16_t)t5);
    t8 = rd32(sp0 - 0xau);
    t9 = rd32(sp0 - 6u);
    wr16(ecx + 0x184u, (uint16_t)(t7 - t6));
    wr16(ecx + 0x186u, (uint16_t)(t9 - t8 - 5u));
    wr16(ecx + 0x18eu, 5u);
    wr16(ecx + 0x190u, 5u);
    t10 = rd16(ecx + 0x17cu);
    wr16(ecx + 0x18au, (uint16_t)(t10 + 5u));
    wr16(ecx + 0x18cu, (uint16_t)(rd16(ecx + 0x17eu) + 5u));
    wr16(ecx + 0x192u, (uint16_t)(t7 - t6 - 0x14u));
    wr16(ecx + 0x194u, 0u);
    t11 = rd32(ecx + 8u);
    wr16(ecx + 0x17au, 0u);
    wr8(t11 + 0x61u, 0u);
    wr8(rd32(ecx + 8u) + 0x86u, 0u);
    t12 = rd32(ecx + 8u);
    wr8(t12 + 0x84u, 0u);
    t13 = rd32(ecx + 8u);
    wr8(t13 + 0x85u, 0u);
    g->ebx = 0u;
    g->eax = t13;
    g->edx = t12;
    t14 = cow_thiscall(g, COW_IMG(0x10216250u), ecx, 0);
    t15 = g->edx;
    if ((uint8_t)t14 != 0u)
    {
        eax = t14;
        edx = t15;
    }
    else
    {
        eax = t14;
        edx = t15;
        esi = ecx;
    COW_AT(1021272d)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t16 = cow_stdcall(g, COW_IMG(0x10216400u), 0);
        t17 = g->edx;
        wr8(esi + 0x1c2u, 0u);
        eax = t16;
        edx = t17;
    }
    COW_AT(1021273a)
    if (rd32(COW_IMG(0x10664530u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10664530u));
    COW_AT(10212744)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t18 = cow_thiscall(g, COW_IMG(0x10216a30u), ecx, 0);
        t19 = g->edx;
        if (rd32(COW_IMG(0x10664530u)) == 0u)
        {
            eax = t18;
            edx = t19;
        }
        else
        {
            eax = t18;
            ecx = rd32(COW_IMG(0x10664530u));
            edx = t19;
    COW_AT(10212753)
            wr32(sp0 - 0x18u, 0x19u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t20 = cow_thiscall(g, COW_IMG(0x102169e0u), ecx, 1, 0x19u);
            t21 = g->edx;
            eax = t20;
            edx = t21;
        }
    }
    COW_AT(1021275a)
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
L_1021677c: ;
    COW_AT(1021677c)
    g->ebx = in_ebx;
    g->esi = in_esi;
    return in_eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10216770(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10212640u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1021272du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        wr32(sp0 - 0x18u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1021273au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        wr32(sp0 - 0x18u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10212744u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        wr32(sp0 - 0x18u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10212753u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x18u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1021275au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10216777u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1021677cu:
    {
        uint32_t ecx;
        uint32_t in_eax;
        uint32_t in_ebx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10216770(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10216770(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
