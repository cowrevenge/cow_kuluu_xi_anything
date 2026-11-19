/* f_0x102379d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102379d0(Guest* g)
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102379e1u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102379e1;
    case 0x102379ecu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102379ec;
    case 0x102379f8u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102379f8;
    case 0x10237a00u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10237a00;
    case 0x10237a05u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10237a05;
    case 0x10237a0bu: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10237a0b;
    case 0x10237a17u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10237a17;
    case 0x10237a20u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10237a20;
    case 0x10237a35u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10237a35;
    case 0x10237a39u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10237a39;
    case 0x10237a5du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10237a5d;
    case 0x10237a62u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10237a62;
    case 0x10237a72u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10237a72;
    case 0x10237a7du: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10237a7d;
    case 0x10237a93u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10237a93;
    case 0x10237a9eu: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10237a9e;
    case 0x10237aa4u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10237aa4;
    case 0x10237aabu: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10237aab;
    case 0x10237abau: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10237aba;
    case 0x10237acdu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10237acd;
    case 0x10237ad8u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10237ad8;
    default: break;
    }
#endif

    COW_AT(102379d0)
    if (rd32(self + 0x1cu) == 1u) goto L_10237acd;
    COW_AT(102379e1)
    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
        edx = in_edx;
        goto L_10237a35;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    COW_AT(102379ec)
    t1 = rd32(COW_IMG(0x10237af4u) + eax * 4u);
    edx = (in_edx & 0xffff0000u) | rd16(sp0 + 8u);
    switch (t1 - RD)
    {
    case 0x102379f8u: goto L_102379f8;
    case 0x10237a05u: goto L_10237a05;
    case 0x10237a35u: goto L_10237a35;
    case 0x10237a72u: goto L_10237a72;
    case 0x10237a93u: goto L_10237a93;
    case 0x10237abau: goto L_10237aba;
    default: rt_fatal(g, COW_IMG(0x102379f1u), "switch");
    }
    return 0;
L_102379f8: ;
    COW_AT(102379f8)
    if ((int16_t)edx < 9) goto L_10237a05;
    eax = (uint32_t)(int16_t)edx;
    COW_AT(10237a00)
    if ((int32_t)eax <= 10) goto L_10237a35;
L_10237a05: ;
    COW_AT(10237a05)
    if ((int16_t)edx < 9)
    {
    COW_AT(10237a0b)
        t8 = (uint32_t)(int16_t)edx - 1u;
        wr32(self + 0x14u, t8);
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10037b30u), self, 0);
    }
    COW_AT(10237a17)
    if (rd32(COW_IMG(0x10456aa4u)) != 0u) goto L_10237a39;
    eax = rd32(COW_IMG(0x10456aa4u));
    COW_AT(10237a20)
    t9 = rd32(rd32(COW_IMG(0x10668fb4u)) + 0x14u);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t10 = cow_fastcall(g, COW_IMG(0x10251710u), rd32(COW_IMG(0x106693fcu)), t9, 1, t9);
    t11 = g->edx;
    eax = t10;
    edx = t11;
L_10237a35: ;
    COW_AT(10237a35)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
L_10237a39: ;
    COW_AT(10237a39)
    if ((int32_t)(rd32(rd32(COW_IMG(0x10668fb4u)) + 0x14u) & 0x80000007u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10668fb4u)) + 0x14u) & 0x80000007u;
        ecx = rd32(rd32(COW_IMG(0x10668facu)) + 0x14u) + rd32(rd32(COW_IMG(0x10668fb8u)) + 0x14u) * 8u;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10668fb4u)) + 0x14u) & 0x80000007u;
        ecx = rd32(rd32(COW_IMG(0x10668facu)) + 0x14u) + rd32(rd32(COW_IMG(0x10668fb8u)) + 0x14u) * 8u;
    COW_AT(10237a5d)
        eax = (eax - 1u | 0xfffffff8u) + 1u;
    }
    COW_AT(10237a62)
    t12 = eax + ecx * 8u;
    t13 = rd32(COW_IMG(0x10668fd8u));
    wr32(t13 + 0x1cu, t12);
    g->esi = in_esi;
    g->edx = t13;
    return eax;
L_10237a72: ;
    COW_AT(10237a72)
    if (rd16(sp0 + 8u) != 9u)
    {
        eax = (eax & 0xffff0000u) | rd16(sp0 + 8u);
        goto L_10237a9e;
    }
    COW_AT(10237a7d)
    t4 = rd32(self);
    wr32(sp0 + 8u, 9u);
    wr32(sp0 + 4u, 4u);
    g->esp = sp0;
    g->esi = in_esi;
    g->edx = edx;
    return cow_tailcall(g, rd32(t4 + 0x18u), t4, self, edx);
L_10237a93: ;
    COW_AT(10237a93)
    if (rd16(sp0 + 8u) == 9u)
    {
        eax = (eax & 0xffff0000u) | rd16(sp0 + 8u);
        goto L_10237aab;
    }
    eax = (eax & 0xffff0000u) | rd16(sp0 + 8u);
L_10237a9e: ;
    COW_AT(10237a9e)
    if ((uint16_t)eax != 0xau)
    {
    COW_AT(10237aa4)
        t5 = (uint32_t)(int16_t)eax - 1u;
        wr32(self + 0x14u, t5);
        edx = t5;
    }
L_10237aab: ;
    COW_AT(10237aab)
    wr32(self + 0x18u, 1u);
    wr32(self + 0x1cu, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x10037b90u), self, 0);
    t7 = g->edx;
    g->esi = in_esi;
    g->edx = t7;
    return t6;
L_10237aba: ;
    COW_AT(10237aba)
    wr32(self + 0x18u, 0xffffffffu);
    wr32(self + 0x1cu, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x10037bf0u), self, 0);
    t3 = g->edx;
    g->esi = in_esi;
    g->edx = t3;
    return t2;
L_10237acd: ;
    COW_AT(10237acd)
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
        goto L_10237a35;
    }
    eax = rd32(self + 8u);
    COW_AT(10237ad8)
    t14 = rd16(self + 0x14u);
    wr32(sp0 + 8u, 0u);
    t15 = (self & 0xffff0000u) | (uint16_t)(t14 + 1u);
    wr32(sp0 + 4u, t15);
    g->esp = sp0;
    g->esi = in_esi;
    return cow_tailcall(g, COW_IMG(0x10118db0u), eax, eax, in_edx);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102379d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102379e1u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x102379ecu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x102379f8u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10237a00u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10237a05u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10237a0bu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10237a17u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10237a20u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10237a35u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10237a39u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10237a5du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10237a62u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10237a72u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10237a7du:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10237a93u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10237a9eu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10237aa4u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10237aabu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10237abau:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10237acdu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10237ad8u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102379d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102379d0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
