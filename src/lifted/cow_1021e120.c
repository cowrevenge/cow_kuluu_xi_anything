/* f_0x1021e120 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1021e120(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
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
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1021e134u: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x18u); goto E_1021e134;
    case 0x1021e16au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; goto E_1021e16a;
    case 0x1021e17du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_1021e17d;
    case 0x1021e197u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x24u); goto E_1021e197;
    case 0x1021e1a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); goto E_1021e1a9;
    case 0x1021e1b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); goto E_1021e1b3;
    case 0x1021e1bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); goto E_1021e1bd;
    case 0x1021e1eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); goto E_1021e1ee;
    case 0x1021e213u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); goto E_1021e213;
    case 0x1021e215u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x24u); goto E_1021e215;
    case 0x1021e219u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); goto E_1021e219;
    case 0x1021e226u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); goto E_1021e226;
    case 0x1021e23cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); goto E_1021e23c;
    case 0x1021e242u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); goto E_1021e242;
    case 0x1021e24eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); goto E_1021e24e;
    case 0x1021e296u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); goto E_1021e296;
    case 0x1021e2bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); goto E_1021e2bf;
    case 0x1021e2dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; goto E_1021e2db;
    case 0x1021e2eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_1021e2ee;
    case 0x1021e302u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_1021e302;
    case 0x1021e30cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; goto E_1021e30c;
    case 0x1021e313u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_1021e313;
    default: break;
    }
#endif

    COW_AT(1021e120)
    wr32(sp0 - 0x18u, in_esi);
    if (rd8(COW_IMG(0x10666e80u)) == 1u)
    {
        edx = in_edx;
        loc_18 = in_esi;
        goto L_1021e313;
    }
    COW_AT(1021e134)
    wr8(COW_IMG(0x10666e80u), 1u);
    wr32(sp0 - 0x1cu, sp0 + 4u);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0x20u, t1);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(rd32(rd32(sp0 + 4u)) + 0xcu), rd32(rd32(sp0 + 4u)), 2, t1, sp0 + 4u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, sp0 - 8u);
    wr32(sp0 - 0x28u, 0u);
    t2 = rd32(self + rd32(self + 0x170u) * 4u + 0x174u);
    wr32(sp0 - 0x2cu, t2);
    g->eax = t2;
    g->edx = sp0 - 8u;
    t3 = cow_thiscall(g, rd32(rd32(t2) + 0x40u), rd32(t2), 5, t2, 0u, sp0 - 8u, 0u, 0u);
    t4 = g->edx;
    if ((int32_t)t3 >= 0) goto L_1021e17d;
    edx = t4;
    COW_AT(1021e16a)
    wr8(COW_IMG(0x10666e80u), 0u);
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x18u);
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return 0x80004005u;
L_1021e17d: ;
    COW_AT(1021e17d)
    t5 = rd32(sp0 - 8u);
    wr32(sp0 - 0x10u, t5);
    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, in_edi);
    if (rd32(self + 0x16cu) != 0x15u)
    {
        ecx = rd32(sp0 - 4u);
        loc_10 = t5;
        goto L_1021e215;
    }
    ecx = rd32(sp0 - 4u);
    loc_10 = t5;
    COW_AT(1021e197)
    wr32(sp0 - 0x14u, 0u);
    if ((int32_t)rd32(self + 0x164u) <= 0) goto L_1021e215;
    COW_AT(1021e1a9)
    eax = rd32(sp0 + 4u);
    edi = rd32(self + 0x160u);
    loc_14 = 0u;
L_1021e1b3: ;
    COW_AT(1021e1b3)
    if ((int32_t)edi <= 0)
    {
        ebx = ecx;
        ebp = eax;
        goto L_1021e1ee;
    }
    edx = 0u;
    ebx = ecx;
    ebp = eax;
L_1021e1bd: ;
    COW_AT(1021e1bd)
    wr8(ecx, rd8(eax));
    wr8(ecx + 1u, rd8(rd32(sp0 + 4u) + 1u));
    wr8(ecx + 2u, rd8(rd32(sp0 + 4u) + 2u));
    t6 = rd32(sp0 + 4u) + 3u;
    t7 = rd32(self + 0x160u);
    wr32(sp0 + 4u, t6);
    if ((int32_t)(edx + 1u) < (int32_t)t7)
    {
        eax = t6;
        ecx = ecx + 4u;
        edx = edx + 1u;
        goto L_1021e1bd;
    }
    edi = t7;
L_1021e1ee: ;
    COW_AT(1021e1ee)
    t8 = ebp + rd32(self + 0x168u);
    t9 = rd32(self + 0x164u);
    wr32(sp0 + 4u, t8);
    wr32(sp0 - 0x14u, loc_14 + 1u);
    if ((int32_t)(loc_14 + 1u) < (int32_t)t9)
    {
        eax = t8;
        ecx = ebx + loc_10;
        loc_14 = loc_14 + 1u;
        goto L_1021e1b3;
    }
    eax = t8;
    ecx = ebx + loc_10;
    ebx = t9;
    COW_AT(1021e213)
L_1021e219: ;
    COW_AT(1021e219)
    if (rd32(self + 0x16cu) == 0x19u)
    {
    COW_AT(1021e226)
        wr32(sp0 - 0x14u, 0u);
        if ((int32_t)rd32(self + 0x164u) > 0)
        {
    COW_AT(1021e23c)
            edx = rd32(self + 0x160u);
            loc_14 = 0u;
L_1021e242: ;
    COW_AT(1021e242)
            wr32(sp0 - 0xcu, ecx);
            if ((int32_t)edx <= 0)
            {
                ebp = eax;
                loc_c = ecx;
                goto L_1021e296;
            }
            ebp = eax;
            edi = 0u;
            loc_c = ecx;
L_1021e24e: ;
    COW_AT(1021e24e)
            t10 = rd8(eax + 1u);
            wr16(ecx, (uint16_t)(((eax & 0xffff0000u) | rd8(eax) >> 3u) + ((ebx & 0xffff0000u) | (t10 & 0xf8u)) * 4u + ((edx & 0xffff0000u) | (rd8(eax + 2u) & 0xf8u)) * 0x80u - 0x8000u));
            t11 = rd32(sp0 + 4u) + 3u;
            t12 = rd32(self + 0x160u);
            wr32(sp0 + 4u, t11);
            if ((int32_t)(edi + 1u) < (int32_t)t12)
            {
                eax = t11;
                ecx = ecx + 2u;
                edx = t12;
                ebx = (ebx & 0xffff0000u) | (t10 & 0xf8u);
                edi = edi + 1u;
                goto L_1021e24e;
            }
            edx = t12;
L_1021e296: ;
    COW_AT(1021e296)
            t13 = ebp + rd32(self + 0x168u);
            t14 = rd32(self + 0x164u);
            wr32(sp0 + 4u, t13);
            wr32(sp0 - 0x14u, loc_14 + 1u);
            if ((int32_t)(loc_14 + 1u) < (int32_t)t14)
            {
                eax = t13;
                ecx = loc_10 + loc_c;
                ebx = t14;
                loc_14 = loc_14 + 1u;
                goto L_1021e242;
            }
        }
    }
    COW_AT(1021e2bf)
    wr32(sp0 - 0x28u, 0u);
    t15 = rd32(self + rd32(self + 0x170u) * 4u + 0x174u);
    wr32(sp0 - 0x2cu, t15);
    g->eax = t15;
    g->edx = rd32(self + 0x170u);
    t16 = rd32(self + 0x170u);
    g->esp = sp0 - 0x24u;
    t17 = cow_thiscall(g, rd32(rd32(t15) + 0x44u), rd32(t15), 2, t15, 0u);
    t18 = g->edx;
    if ((int32_t)t17 >= 0)
    {
        edx = t18;
        goto L_1021e2ee;
    }
    edx = t18;
    COW_AT(1021e2db)
    wr8(COW_IMG(0x10666e80u), 0u);
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x18u);
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return 0x80004005u;
L_1021e215: ;
    COW_AT(1021e215)
    eax = rd32(sp0 + 4u);
    ebx = in_ebx;
    goto L_1021e219;
L_1021e2ee: ;
    COW_AT(1021e2ee)
    t19 = rd32(self + 0x170u) + 1u;
    wr32(self + 0x170u, t19);
    if ((int32_t)t19 >= 4)
    {
    COW_AT(1021e302)
        wr32(self + 0x170u, 0u);
    }
    COW_AT(1021e30c)
    wr8(COW_IMG(0x10666e80u), 0u);
    loc_18 = rd32(sp0 - 0x18u);
L_1021e313: ;
    COW_AT(1021e313)
    g->ebx = in_ebx;
    g->esi = loc_18;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1021e120(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1021e134u:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        g->eax = (g->eax & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x1021e16au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x24u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1021e17du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x24u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1021e197u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x1cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1021e1a9u:
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
        uint32_t in_edi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x14u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1021e1b3u:
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
        uint32_t in_edi;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1021e1bdu:
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
        uint32_t in_edi;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1021e1eeu:
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
        uint32_t in_edi;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1021e213u:
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
        uint32_t in_edi;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1021e215u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x1cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1021e219u:
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
        uint32_t in_edi;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1021e226u:
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
        uint32_t in_edi;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1021e23cu:
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
        uint32_t in_edi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x14u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1021e242u:
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
        uint32_t in_edi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1021e24eu:
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
        uint32_t in_edi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1021e296u:
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
        uint32_t in_edi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1021e2bfu:
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
        uint32_t in_edi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1021e2dbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1021e2eeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1021e302u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1021e30cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1021e313u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1021e120(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1021e120(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
