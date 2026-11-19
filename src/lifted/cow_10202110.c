/* f_0x10202110 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10202110(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
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
    uint32_t t2;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10202127u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10202127;
    case 0x10202135u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10202135;
    case 0x10202144u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; goto E_10202144;
    case 0x10202162u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; goto E_10202162;
    case 0x10202175u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10202175;
    case 0x1020217du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1020217d;
    case 0x10202187u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10202187;
    case 0x102021acu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_102021ac;
    case 0x102021b6u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_102021b6;
    case 0x102021beu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_102021be;
    case 0x102021e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_102021e1;
    case 0x102021f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_102021f0;
    case 0x102021f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_102021f8;
    case 0x10202201u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_10202201;
    case 0x10202209u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_10202209;
    case 0x10202211u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_10202211;
    case 0x1020221cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1020221c;
    case 0x10202226u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; goto E_10202226;
    case 0x1020223cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; goto E_1020223c;
    case 0x1020224du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; goto E_1020224d;
    case 0x10202251u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; goto E_10202251;
    case 0x10202256u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; goto E_10202256;
    case 0x10202293u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10202293;
    case 0x1020229fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1020229f;
    default: break;
    }
#endif

    COW_AT(10202110)
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd32(COW_IMG(0x106643e4u)) != 0u)
    {
        eax = rd32(COW_IMG(0x106643e4u));
        goto L_10202175;
    }
    eax = rd32(COW_IMG(0x106643e4u));
    COW_AT(10202127)
    if (rd32(COW_IMG(0x1057876cu)) == 0u)
    {
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_1020229f;
    }
    ecx = rd32(COW_IMG(0x1057876cu));
    COW_AT(10202135)
    g->esp = sp0 - 0x1cu;
    t1 = cow_call_regs(g, COW_IMG(0x101597f0u), eax, ecx, in_edx, 1, 0);
    if (t1 == 0u)
    {
        eax = t1;
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_1020229f;
    }
    ecx = t1;
    COW_AT(10202144)
    if (rd32(COW_IMG(0x10663af0u) + rd32(COW_IMG(0x106643dcu)) * 0x7cu) != rd32(ecx + 4u))
    {
        eax = rd32(COW_IMG(0x106643dcu));
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        goto L_1020229f;
    }
    eax = rd32(COW_IMG(0x106643dcu));
    edx = rd32(COW_IMG(0x10663af0u) + rd32(COW_IMG(0x106643dcu)) * 0x7cu);
    COW_AT(10202162)
    eax = eax - arg1 * 6u;
    ecx = rd32(COW_IMG(0x106643e0u));
    edi = 0xffffffffu;
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
L_102021f0: ;
    COW_AT(102021f0)
    if ((int32_t)eax < 0) goto L_1020229f;
    COW_AT(102021f8)
    if ((int32_t)eax >= 6) goto L_1020229f;
    COW_AT(10202201)
    if (rd32(COW_IMG(0x106643e4u)) != 0u) goto L_1020221c;
    COW_AT(10202209)
    if (rd32(COW_IMG(0x106643e8u)) != 0u) goto L_1020221c;
    COW_AT(10202211)
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t6 = cow_thiscall(g, rd32(rd32(self) + 0x48u), self, 2, eax, 0u);
    eax = t6;
L_10202226: ;
    COW_AT(10202226)
    wr32(sp0 - 0x20u, sp0 + 8u);
    wr32(sp0 - 0x24u, sp0 - 0xcu);
    g->eax = eax;
    g->edx = sp0 - 0xcu;
    g->esp = sp0 - 0x1cu;
    t9 = cow_thiscall(g, COW_IMG(0x10118a80u), rd32(self + 8u), 2, sp0 - 0xcu, sp0 + 8u);
    t10 = g->edx;
    if ((uint8_t)t9 == 0u)
    {
        eax = t9;
    }
    else
    {
        edx = t10;
    COW_AT(1020223c)
        wr32(sp0 - 0x20u, arg2);
        t11 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x24u, t11);
        g->eax = arg2;
        g->esp = sp0 - 0x1cu;
        t12 = cow_thiscall(g, COW_IMG(0x102022b0u), self, 2, t11, arg2);
        eax = t12;
    }
    COW_AT(1020224d)
    if ((int32_t)edi >= 0)
    {
    COW_AT(10202251)
        if ((int32_t)edi < 6)
        {
    COW_AT(10202256)
            wr32(sp0 - 0x20u, 1u);
            wr32(sp0 - 0x24u, 1u);
            wr32(sp0 - 0x28u, edi + 1u);
            wr32(sp0 - 0x2cu, sp0 - 8u);
            t13 = rd32(self + 8u);
            wr16(sp0 - 8u, 0u);
            wr16(sp0 - 6u, 0u);
            wr16(sp0 - 4u, 0u);
            wr16(sp0 - 2u, 0u);
            g->ebx = self;
            g->edi = edi + 1u;
            g->edx = sp0 - 8u;
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, COW_IMG(0x10118900u), t13, 4, sp0 - 8u, edi + 1u, 1u, 1u);
            t14 = g->edx;
            wr32(sp0 - 0x20u, 0xe0d04040u);
            t15 = rd32(sp0 - 6u);
            wr32(sp0 - 0x24u, t15);
            t16 = rd32(sp0 - 8u);
            wr32(sp0 - 0x28u, t16);
            g->eax = t15;
            t17 = cow_thiscall(g, COW_IMG(0x10202350u), self, 3, t16, t15, 0xe0d04040u);
            eax = t17;
        }
    }
    COW_AT(10202293)
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return (eax & 0xffffff00u) | 1u;
L_10202175: ;
    COW_AT(10202175)
    if (rd32(COW_IMG(0x106643e8u)) == 0u) goto L_102021ac;
    COW_AT(1020217d)
    if (rd32(COW_IMG(0x106643fcu)) == 0u) goto L_102021ac;
    ecx = rd32(COW_IMG(0x106643fcu));
    COW_AT(10202187)
    wr32(sp0 - 0x20u, ecx);
    g->ebx = self;
    g->eax = arg1;
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t2 = cow_stdcall(g, COW_IMG(0x10203540u), 1, ecx);
    t3 = g->edx;
    eax = rd32(COW_IMG(0x106643e0u)) - arg1 * 6u;
    ecx = rd32(COW_IMG(0x106643e0u));
    edx = t3;
    edi = t2 - arg1 * 6u;
    loc_10 = in_ebx;
    loc_14 = in_ebp;
    loc_18 = in_esi;
    loc_1c = in_edi;
    goto L_102021f0;
L_102021ac: ;
    COW_AT(102021ac)
    if ((int32_t)rd32(COW_IMG(0x106643e0u)) >= 0)
    {
        ecx = rd32(COW_IMG(0x106643e0u));
        goto L_102021e1;
    }
    ecx = rd32(COW_IMG(0x106643e0u));
    COW_AT(102021b6)
    if ((int32_t)arg2 < 0) goto L_102021e1;
    COW_AT(102021be)
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    g->ebx = self;
    g->esp = sp0 - 0x1cu;
    t4 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, 0u, 0u);
    wr32(sp0 - 0x20u, arg3);
    wr32(sp0 - 0x24u, arg2);
    t5 = cow_thiscall(g, COW_IMG(0x102022b0u), self, 2, arg2, arg3);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (t5 & 0xffffff00u) | 1u;
L_102021e1: ;
    COW_AT(102021e1)
    eax = ecx - arg1 * 6u;
    edx = arg1 * 6u;
    edi = 0xffffffffu;
    loc_10 = in_ebx;
    loc_14 = in_ebp;
    loc_18 = in_esi;
    loc_1c = in_edi;
    goto L_102021f0;
L_1020221c: ;
    COW_AT(1020221c)
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, ecx);
    g->eax = rd32(self);
    t7 = rd32(self);
    g->esp = sp0 - 0x1cu;
    t8 = cow_thiscall(g, rd32(t7 + 0x48u), self, 2, ecx, 1u);
    eax = t8;
    goto L_10202226;
L_1020229f: ;
    COW_AT(1020229f)
    g->ebx = loc_10;
    g->esi = loc_18;
    g->edi = loc_1c;
    g->ebp = loc_14;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10202110(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10202127u:
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
        self = g->ebx;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x10202135u:
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
        self = g->ebx;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x10202144u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x10202162u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x10202175u:
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
        self = g->ebx;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x1020217du:
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
        self = g->ebx;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x10202187u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102021acu:
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
        self = g->ebx;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x102021b6u:
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
        self = g->ebx;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x102021beu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102021e1u:
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
        self = g->ebx;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x102021f0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102021f8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10202201u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10202209u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10202211u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020221cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10202226u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020223cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x20u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1020224du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10202251u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10202256u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10202293u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1020229fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10202110(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10202110(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
