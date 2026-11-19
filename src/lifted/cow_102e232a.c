/* f_0x102e232a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102e232a(Guest* g)
{
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_4;
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
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 68u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102e2385u: in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_102e2385;
    case 0x102e23aau: edx = g->edx; self = g->esi; goto E_102e23aa;
    case 0x102e23b6u: edx = g->edx; self = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); goto E_102e23b6;
    case 0x102e23c3u: edx = g->edx; self = g->esi; goto E_102e23c3;
    case 0x102e23cdu: edx = g->edx; self = g->esi; goto E_102e23cd;
    default: break;
    }
#endif

    COW_AT(102e232a)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_esi);
    t1 = rd32(self + 0x1058u);
    wr32(sp0 - 0x10u, t1);
    t2 = rd32(self + 0x1064u);
    wr32(sp0 - 0x14u, t2);
    t3 = rd32(self + 0x18u);
    wr32(sp0 - 0x18u, t3);
    t4 = rd32(self + 0x2cu);
    wr32(sp0 - 0x1cu, t4);
    t5 = rd32(self + 0x10u);
    wr32(sp0 - 0x20u, t5);
    t6 = rd32(self + 0x1068u);
    wr32(self + 0x1064u, t6);
    wr32(sp0 - 0x34u, in_edi);
    t7 = rd32(self + 8u);
    wr32(self + 0x1058u, 1u);
    wr32(self + 0x18u, sp0 - 0x28u);
    wr32(self + 0x2cu, COW_IMG(0x103ccb50u));
    wr32(self + 0x10u, 0u);
    if (t7 == 1u)
    {
        edx = in_edx;
        loc_4 = in_ebp;
        loc_2c = in_ebx;
        loc_30 = in_esi;
        loc_10 = t1;
        loc_14 = t2;
        loc_18 = t3;
        loc_1c = t4;
        loc_20 = t5;
        loc_34 = in_edi;
    }
    else
    {
        loc_10 = t1;
        loc_14 = t2;
        loc_18 = t3;
        loc_1c = t4;
        loc_20 = t5;
    COW_AT(102e2385)
        t8 = rd32(self + 0x1048u);
        wr32(sp0 - 8u, t8);
        t9 = rd32(self + 0x104cu);
        wr32(self + 0x1048u, 1u);
        wr32(sp0 - 0xcu, t9);
        wr32(sp0 - 0x38u, self + 0x1cu);
        wr32(self + 0x104cu, self + 0x1cu);
        g->edx = in_edx;
        g->esp = sp0 - 0x34u;
        cow_thiscall(g, COW_IMG(0x102e17b2u), self, 1, self + 0x1cu);
        t10 = g->edx;
        edx = t10;
    COW_AT(102e23aa)
        t11 = rd32(sp0 - 8u);
        wr32(self + 0x1048u, t11);
        t12 = rd32(sp0 - 0xcu);
        wr32(self + 0x104cu, t12);
        loc_4 = rd32(sp0 - 4u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_34 = rd32(sp0 - 0x34u);
    }
    COW_AT(102e23b6)
    wr32(sp0 - 0x38u, self + 0x1cu);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, rd32(rd32(self) + 8u), self, 3, 0u, 0u, self + 0x1cu);
    t13 = g->edx;
    edx = t13;
    COW_AT(102e23c3)
    wr32(sp0 - 0x38u, self + 0x1cu);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, rd32(rd32(self) + 4u), self, 3, 0u, 0u, self + 0x1cu);
    t14 = g->edx;
    edx = t14;
    COW_AT(102e23cd)
    t15 = rd32(sp0 - 0x10u);
    wr32(self + 0x1058u, t15);
    t16 = rd32(sp0 - 0x14u);
    wr32(self + 0x1064u, t16);
    t17 = rd32(sp0 - 0x18u);
    wr32(self + 0x18u, t17);
    t18 = rd32(sp0 - 0x1cu);
    wr32(self + 0x2cu, t18);
    t19 = rd32(sp0 - 0x20u);
    t20 = rd32(sp0 - 0x34u);
    wr32(self + 0x10u, t19);
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = t20;
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return t19;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102e232a(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102e2385u:
    {
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x34u;
        g->eax = 1u;
        g->ecx = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e23aau:
    {
        uint32_t edx;
        uint32_t self;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x34u;
        g->ebx = self + 0x104cu;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x1048u;
        (void)sp0;
        return 1;
    }
    case 0x102e23b6u:
    {
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_4;
        edx = g->edx;
        self = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e23c3u:
    {
        uint32_t edx;
        uint32_t self;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102e23cdu:
    {
        uint32_t edx;
        uint32_t self;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102e232a(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102e232a(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
