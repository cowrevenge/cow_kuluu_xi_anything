/* f_0x1006c8b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1006c8b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_c;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 56u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1006c8d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1006c8d8;
    case 0x1006c8dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1006c8dc;
    case 0x1006c923u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_1006c923;
    case 0x1006c93bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x20u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x20u); goto E_1006c93b;
    case 0x1006c944u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x20u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x20u); goto E_1006c944;
    case 0x1006c955u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x20u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x20u); goto E_1006c955;
    case 0x1006c966u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x20u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x20u); goto E_1006c966;
    case 0x1006c96du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1006c96d;
    case 0x1006c978u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1006c978;
    case 0x1006c982u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1006c982;
    case 0x1006c988u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1006c988;
    case 0x1006c993u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1006c993;
    case 0x1006c99cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1006c99c;
    default: break;
    }
#endif

    COW_AT(1006c8b0)
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    wr32(sp0 - 0x24u, 0u);
    t1 = rd32(rd32(COW_IMG(0x1047c004u)) + 0xcu);
    wr32(sp0 - 0x28u, t1);
    g->eax = t1;
    g->esp = sp0 - 0x1cu;
    t2 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1047c004u)) + 0xcu)) + 0x3cu), rd32(rd32(rd32(COW_IMG(0x1047c004u)) + 0xcu)), 3, t1, 0u, sp0 - 0x10u);
    if ((uint8_t)arg1 == 0u)
    {
        edi = 0u;
    }
    else
    {
    COW_AT(1006c8d8)
        edi = (uint32_t)(int16_t)rd16(self);
    }
    COW_AT(1006c8dc)
    wr32(sp0 - 0x20u, 0u);
    t3 = rd32(edi * 4u + self + 4u);
    wr32(sp0 - 0x24u, t3);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, COW_IMG(0x1032c18cu));
    t4 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x30u, t4);
    t5 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x34u, t5);
    g->edx = t4;
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu)) + 0x70u), rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu)), 6, t5, t4, COW_IMG(0x1032c18cu), 1u, t3, 0u);
    t6 = g->edx;
    t7 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x20u, t7);
    t8 = rd32(t7);
    cow_thiscall(g, rd32(t8 + 8u), t8, 1, t7);
    t9 = g->ecx;
    wr32(sp0 - 0x20u, 0x10u);
    wr32(sp0 - 0x24u, COW_IMG(0x1032c17cu));
    wr32(sp0 - 0x28u, sp0 - 8u);
    t10 = rd32(self + 4u);
    wr32(sp0 - 0x2cu, t10);
    g->eax = sp0 - 8u;
    g->edx = rd32(rd32(self + 4u));
    t11 = rd32(rd32(self + 4u));
    t12 = cow_thiscall(g, rd32(t11 + 0x24u), t9, 4, t10, sp0 - 8u, COW_IMG(0x1032c17cu), 0x10u);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 != 0u)
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        esi = 0u;
    }
    else
    {
        edi = t10;
    COW_AT(1006c923)
        wr32(sp0 - 0x10u, 8u);
        wr32(sp0 - 0x20u, in_ebx);
        t15 = rd32(sp0 - 8u) * 2u;
        wr32(sp0 - 0xcu, t15);
        edx = rd32(sp0 - 4u);
        esi = 0u;
        loc_10 = 8u;
        loc_c = t15;
L_1006c93b: ;
    COW_AT(1006c93b)
        if (edx >= edx + 0x40u) goto L_1006c955;
        eax = edx;
        ecx = edx + 0x40u;
L_1006c944: ;
    COW_AT(1006c944)
        if (eax + 8u < ecx)
        {
            esi = esi + (rd32(eax) & 0x80u);
            eax = eax + 8u;
            goto L_1006c944;
        }
        esi = esi + (rd32(eax) & 0x80u);
L_1006c955: ;
    COW_AT(1006c955)
        wr32(sp0 - 0x10u, loc_10 - 1u);
        if (loc_10 != 1u)
        {
            edx = edx + loc_c;
            loc_10 = loc_10 - 1u;
            goto L_1006c93b;
        }
        ecx = loc_c;
        edx = edx + loc_c;
    COW_AT(1006c966)
        wr32(sp0 - 0x24u, edi);
        g->eax = rd32(edi);
        g->edx = edx;
        t16 = rd32(edi);
        g->esp = sp0 - 0x20u;
        t17 = cow_thiscall(g, rd32(t16 + 0x28u), ecx, 1, edi);
        t18 = g->ecx;
        t19 = g->edx;
        eax = t17;
        ecx = t18;
        edx = t19;
    }
    COW_AT(1006c96d)
    if ((uint8_t)arg1 == 0u)
    {
        esi = (uint32_t)((int32_t)esi >> 5u);
        goto L_1006c988;
    }
    esi = (uint32_t)((int32_t)esi >> 5u);
    COW_AT(1006c978)
    wr16(self, 0u);
    if (esi != 0u) goto L_1006c993;
    COW_AT(1006c982)
    wr16(self + 2u, 1u);
L_1006c988: ;
    COW_AT(1006c988)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    g->edx = edx;
    return esi;
L_1006c993: ;
    COW_AT(1006c993)
    if (rd16(self + 2u) == 0u) goto L_1006c988;
    ecx = (ecx & 0xffff0000u) | rd16(self + 2u);
    COW_AT(1006c99c)
    t20 = rd32(sp0 - 0x1cu);
    wr16(self + 2u, (uint16_t)(ecx - 1u));
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x18u);
    g->edi = t20;
    g->ebp = rd32(sp0 - 0x14u);
    g->edx = edx;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1006c8b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1006c8d8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        self = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->esi = 0u;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1006c8dcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        self = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->esi = 0u;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1006c923u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->esi = 0u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1006c93bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x20u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1006c944u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x20u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1006c955u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x20u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1006c966u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x20u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1006c96du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1006c978u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1006c982u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1006c988u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1006c993u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1006c99cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1006c8b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1006c8b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
