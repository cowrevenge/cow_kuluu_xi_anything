/* f_0x1019a360 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1019a360(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_24;
    uint32_t loc_28;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1019a384u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1019a384;
    case 0x1019a387u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1019a387;
    case 0x1019a39du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1019a39d;
    case 0x1019a3b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1019a3b1;
    case 0x1019a3b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1019a3b6;
    case 0x1019a3ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; goto E_1019a3ce;
    case 0x1019a3d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); goto E_1019a3d5;
    case 0x1019a467u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1019a467;
    case 0x1019a469u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1019a469;
    default: break;
    }
#endif

    COW_AT(1019a360)
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    t1 = rd32(self + 0x34u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    if (t1 == 0u) goto L_1019a39d;
    eax = t1;
    COW_AT(1019a384)
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_1019a3b6;
    }
    COW_AT(1019a387)
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0x80808080u);
    t2 = (uint32_t)(int16_t)rd16(self + 0x46u);
    wr32(sp0 - 0x24u, t2);
    t3 = (uint32_t)(int16_t)rd16(self + 0x44u);
    wr32(sp0 - 0x28u, t3);
    eax = t2;
    ecx = rd32(self + 0x20u);
    edx = in_edx;
    loc_24 = t2;
    loc_28 = t3;
L_1019a3b1: ;
    COW_AT(1019a3b1)
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t6 = cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, loc_28, loc_24, 0x80808080u, 0u, 0u);
    eax = t6;
L_1019a3b6: ;
    COW_AT(1019a3b6)
    t7 = rd32(rd32(self + 0x3cu));
    wr32(sp0 - 0x18u, t7);
    wr32(sp0 - 0x1cu, 0xbu);
    g->eax = eax;
    g->edx = t7;
    g->esp = sp0 - 0x14u;
    t8 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, t7);
    t9 = g->edx;
    if (t8 == 0u)
    {
        eax = t8;
        edx = t9;
        ebx = in_ebx;
        ebp = in_ebp;
    }
    else
    {
        edx = t9;
    COW_AT(1019a3ce)
        wr32(sp0 - 0x18u, in_ebx);
        wr32(sp0 - 0x1cu, in_ebp);
        ebx = in_ebx;
        ebp = 1u;
        edi = 0u;
L_1019a3d5: ;
    COW_AT(1019a3d5)
        wr32(sp0 - 0x20u, 1u);
        wr32(sp0 - 0x24u, 1u);
        wr32(sp0 - 0x28u, ebp);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        g->ebx = ebx;
        g->edi = edi;
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, ebp, 1u, 1u);
        wr32(sp0 - 0x20u, 0x80808080u);
        t10 = rd32(edi + rd32(self + 0x3cu));
        wr32(sp0 - 0x24u, t10);
        wr32(sp0 - 0x28u, 0xbu);
        t11 = (uint32_t)(int16_t)rd16(sp0 - 6u);
        wr32(sp0 - 0xcu, t11);
        g->eax = t10;
        g->edx = rd32(self + 0x3cu);
        t12 = rd32(self + 0x3cu);
        t13 = rd16(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        t14 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, t10);
        t15 = g->edx;
        wr32(sp0 - 0x24u, t14);
        t16 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x28u, t16);
        t17 = (uint32_t)(int16_t)t13 + 0x1eu;
        wr32(sp0 - 0x2cu, t17);
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x101907e0u), 9, t17, t16, t14, 0x80808080u, in_ebp, in_ebx, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t18 = rd32(edi + rd32(self + 0x3cu) + 4u);
        wr32(sp0 - 0x20u, t18);
        g->eax = t18;
        g->esp = sp0 - 0x1cu;
        t19 = cow_thiscall(g, COW_IMG(0x1019a860u), self, 1, t18);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0x80808080u);
        t20 = (uint32_t)(int16_t)rd16(sp0 - 6u);
        wr32(sp0 - 0x2cu, t20);
        t21 = (uint32_t)(int16_t)rd16(sp0 - 8u);
        wr32(sp0 - 0x30u, t21);
        g->edx = t21;
        cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + t19 * 4u + 0x14u), 5, t21, t20, 0x80808080u, 0u, 0u);
        t22 = g->edx;
        t23 = rd32(edi + rd32(self + 0x3cu) + 8u);
        wr32(sp0 - 0x20u, t23);
        wr32(sp0 - 0x24u, 0xbu);
        g->eax = rd32(self + 0x3cu);
        g->edx = t22;
        t24 = rd32(self + 0x3cu);
        t25 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, t23);
        t26 = g->edx;
        if (t25 != 0u)
        {
            edx = t26;
            ebx = t17;
            ebp = ebp + 1u;
            edi = edi + 8u;
            goto L_1019a3d5;
        }
        eax = t25;
        edx = t26;
    COW_AT(1019a467)
        ebx = rd32(sp0 - 0x18u);
        ebp = rd32(sp0 - 0x1cu);
    }
    COW_AT(1019a469)
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_1019a39d: ;
    COW_AT(1019a39d)
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0x80808080u);
    t4 = (uint32_t)(int16_t)rd16(self + 0x46u);
    wr32(sp0 - 0x24u, t4);
    t5 = (uint32_t)(int16_t)rd16(self + 0x44u);
    wr32(sp0 - 0x28u, t5);
    eax = t5;
    ecx = rd32(self + 0x1cu);
    edx = t4;
    loc_24 = t4;
    loc_28 = t5;
    goto L_1019a3b1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1019a360(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1019a384u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1019a387u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1019a39du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1019a3b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        wr32(sp0 - 0x20u, 0x80808080u);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x18u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1019a3b6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1019a3ceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1019a3d5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1019a467u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1019a469u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1019a360(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1019a360(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
