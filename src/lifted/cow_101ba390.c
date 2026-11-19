/* f_0x101ba390 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101ba390(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 40u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101ba3b1u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101ba3b1;
    case 0x101ba3bfu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101ba3bf;
    case 0x101ba3d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101ba3d8;
    case 0x101ba406u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101ba406;
    case 0x101ba43au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101ba43a;
    case 0x101ba441u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101ba441;
    case 0x101ba448u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101ba448;
    default: break;
    }
#endif

    COW_AT(101ba390)
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    t1 = arg1 & ((int32_t)arg1 < 0) - 1u;
    wr32(self + 4u, t1);
    if ((arg1 & ((int32_t)arg1 < 0) - 1u) == 1u)
    {
        eax = t1;
        edx = in_edx;
        loc_c = in_esi;
        loc_10 = in_edi;
        goto L_101ba441;
    }
    COW_AT(101ba3b1)
    if (rd32(self + 0xcu) != 0u)
    {
        loc_c = in_esi;
        loc_10 = in_edi;
        goto L_101ba448;
    }
    eax = rd32(self + 0xcu);
    COW_AT(101ba3bf)
    wr32(sp0 - 0x14u, 0x13u);
    wr32(sp0 - 0x18u, COW_IMG(0x1037c938u));
    g->eax = eax;
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x101c4b80u), t2, 2, COW_IMG(0x1037c938u), 0x13u);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(self + 0x10u, t3);
    if ((int32_t)t3 < 0)
    {
        eax = t3;
        edx = t5;
        goto L_101ba43a;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    COW_AT(101ba3d8)
    wr32(sp0 - 0x14u, COW_IMG(0x1037c930u));
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x1cu, self + 0xcu);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x101907a0u), 4, self + 0xcu, eax, COW_IMG(0x1037c930u), rd32(sp0 - 0x10u));
    wr32(sp0 - 0x14u, 0u);
    t6 = rd32(self + 0x10u);
    wr32(sp0 - 0x18u, t6);
    t7 = rd32(self + 0xcu);
    wr32(sp0 - 0x1cu, t7);
    wr32(sp0 - 0x20u, 0x13u);
    wr32(sp0 - 0x24u, COW_IMG(0x1037c938u));
    g->eax = t7;
    g->edx = t6;
    t8 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x10u;
    t9 = cow_thiscall(g, COW_IMG(0x101c47d0u), t8, 5, COW_IMG(0x1037c938u), 0x13u, t7, t6, 0u);
    t10 = g->ecx;
    t11 = g->edx;
    if ((int32_t)t9 < 0)
    {
        eax = t9;
        edx = t11;
        goto L_101ba43a;
    }
    ecx = t10;
    COW_AT(101ba406)
    t12 = rd32(self + 0x10u);
    wr16(sp0 - 3u, rd16(COW_IMG(0x1036fd84u)));
    wr32(sp0 - 0x14u, t12);
    wr32(sp0 - 0x18u, sp0 - 8u);
    t13 = rd32(self + 0xcu);
    wr32(sp0 - 0x1cu, t13);
    wr32(sp0 - 8u, 0u);
    wr8(sp0 - 4u, 0x3fu);
    g->eax = sp0 - 8u;
    g->edx = t12;
    g->esp = sp0 - 0x10u;
    t14 = cow_cdecl(g, COW_IMG(0x1031056cu), 3, t13, sp0 - 8u, t12);
    t15 = g->edx;
    wr32(self + 8u, t14);
    if (t14 != 0u)
    {
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_101ba448;
    }
    eax = t14;
    edx = t15;
L_101ba43a: ;
    COW_AT(101ba43a)
    wr32(self + 4u, 1u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
L_101ba441: ;
    COW_AT(101ba441)
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x101ba2d0u), self, 0);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
L_101ba448: ;
    COW_AT(101ba448)
    g->esi = loc_c;
    g->edi = loc_10;
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101ba390(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101ba3b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101ba3bfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->edi = self + 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101ba3d8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = self + 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101ba406u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = self + 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101ba43au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101ba441u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101ba448u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101ba390(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101ba390(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
