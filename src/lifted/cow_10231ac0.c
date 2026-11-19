/* f_0x10231ac0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10231ac0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_18;
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
    uint32_t t21;
    uint32_t t22;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10231ae4u: self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10231ae4;
    case 0x10231aebu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10231aeb;
    case 0x10231af7u: in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10231af7;
    case 0x10231afeu: edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10231afe;
    case 0x10231b0du: eax = g->eax; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10231b0d;
    case 0x10231b1cu: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10231b1c;
    case 0x10231b47u: self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10231b47;
    case 0x10231b5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10231b5e;
    case 0x10231b67u: self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10231b67;
    case 0x10231b7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10231b7e;
    case 0x10231b87u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10231b87;
    case 0x10231b95u: eax = g->eax; self = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10231b95;
    case 0x10231ba0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10231ba0;
    case 0x10231ba9u: eax = g->eax; self = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10231ba9;
    case 0x10231bb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10231bb4;
    case 0x10231bb9u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10231bb9;
    case 0x10231bc1u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10231bc1;
    case 0x10231bc6u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10231bc6;
    case 0x10231bd4u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10231bd4;
    case 0x10231bdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10231bdb;
    case 0x10231bddu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10231bdd;
    case 0x10231be4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10231be4;
    case 0x10231befu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10231bef;
    case 0x10231bf4u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10231bf4;
    default: break;
    }
#endif

    COW_AT(10231ac0)
    t1 = rd32(self + 0x68u);
    if ((uint32_t)(int16_t)arg1 - 3u > 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 3u;
        edx = in_edx;
        loc_4 = t1;
        goto L_10231bdb;
    }
    loc_4 = t1;
    COW_AT(10231ae4)
    t2 = rd32(COW_IMG(0x10231bfcu) + (uint32_t)(int16_t)arg1 * 4u - 0xcu);
    switch (t2 - RD)
    {
    case 0x10231aebu: goto L_10231aeb;
    case 0x10231b1cu: goto L_10231b1c;
    case 0x10231b47u: goto L_10231b47;
    case 0x10231b67u: goto L_10231b67;
    case 0x10231bb9u: goto L_10231bb9;
    case 0x10231bdbu: eax = (uint32_t)(int16_t)arg1 - 3u; edx = in_edx; goto L_10231bdb;
    default: rt_fatal(g, COW_IMG(0x10231ae4u), "switch");
    }
    return;
L_10231aeb: ;
    COW_AT(10231aeb)
    if ((uint32_t)(int16_t)arg2 == 9u)
    {
    COW_AT(10231b0d)
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(self) + 0x18u), self, 2, 4u, arg2);
        t21 = g->edx;
        edx = t21;
    }
    else
    {
    COW_AT(10231af7)
        if ((uint32_t)(int16_t)arg2 != 0xau)
        {
            edx = in_edx;
        }
        else
        {
    COW_AT(10231afe)
            g->edx = rd32(self);
            t19 = rd32(self);
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, rd32(t19 + 0x18u), self, 2, 3u, arg2);
            t20 = g->edx;
            edx = t20;
        }
    }
L_10231be4: ;
    COW_AT(10231be4)
    if (loc_4 != rd32(self + 0x68u))
    {
        eax = rd32(self + 0x68u);
        ecx = loc_4;
    COW_AT(10231bef)
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    }
    COW_AT(10231bf4)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_10231b1c: ;
    COW_AT(10231b1c)
    t13 = rd32(self + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t14 = cow_call_regs(g, COW_IMG(0x1015e790u), (uint32_t)(int16_t)arg1 - 3u, COW_IMG(0x10621838u), g->edx, 0, 2, t13, 0u);
    t15 = g->edx;
    t16 = cow_fastcall(g, COW_IMG(0x10221c70u), rd32(COW_IMG(0x10668eccu)), t15, 0);
    t17 = g->edx;
    g->edx = t17;
    cow_thiscall(g, COW_IMG(0x10221c60u), rd32(COW_IMG(0x10668eccu)), 0);
    t18 = g->edx;
    edx = t18;
    goto L_10231be4;
L_10231b47: ;
    COW_AT(10231b47)
    g->ebx = arg2;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x10123a70u), (uint32_t)(int16_t)arg1 - 3u, self, g->edx, 1, 7, 0x3eu, 0xa8u, 4u, 0xffffffffu, in_edi, in_esi, in_ebx);
    t8 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        edx = t8;
        goto L_10231b87;
    }
    eax = t7;
    COW_AT(10231b5e)
    edx = arg2;
    loc_18 = 0x19u;
L_10231bdd: ;
    COW_AT(10231bdd)
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10222150u), self, 2, loc_18, arg2);
    t22 = g->edx;
    edx = t22;
    goto L_10231be4;
L_10231b67: ;
    COW_AT(10231b67)
    g->ebx = arg2;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t5 = cow_call_regs(g, COW_IMG(0x10123a70u), (uint32_t)(int16_t)arg1 - 3u, self, g->edx, 1, 7, 0x3eu, 0xa8u, 4u, 0xffffffffu, in_edi, in_esi, in_ebx);
    t6 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        edx = t6;
        goto L_10231b87;
    }
    edx = t6;
    COW_AT(10231b7e)
    eax = arg2;
    loc_18 = 0x18u;
    goto L_10231bdd;
L_10231b87: ;
    COW_AT(10231b87)
    if (rd32(self + 0x68u) != 5u)
    {
        eax = rd32(self + 0x68u);
    COW_AT(10231ba9)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t11 = cow_thiscall(g, COW_IMG(0x102319c0u), self, 1, 0u);
        t12 = g->edx;
        if ((uint8_t)t11 == 0u)
        {
            edx = t12;
        }
        else
        {
            edx = t12;
    COW_AT(10231bb4)
            wr32(self + 0x68u, 5u);
        }
    }
    else
    {
        eax = rd32(self + 0x68u);
    COW_AT(10231b95)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t9 = cow_thiscall(g, COW_IMG(0x102319c0u), self, 1, 1u);
        t10 = g->edx;
        if ((uint8_t)t9 == 0u)
        {
            edx = t10;
        }
        else
        {
            edx = t10;
    COW_AT(10231ba0)
            wr32(self + 0x68u, 6u);
        }
    }
    goto L_10231be4;
L_10231bb9: ;
    COW_AT(10231bb9)
    if ((int16_t)arg2 < 9) goto L_10231bd4;
    COW_AT(10231bc1)
    if ((int16_t)arg2 > 10) goto L_10231bd4;
    COW_AT(10231bc6)
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10221cd0u), self, 0);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_10231bd4: ;
    COW_AT(10231bd4)
    g->eax = (uint32_t)(int16_t)arg2;
    g->esp = sp0 - 0x10u;
    t3 = cow_fastcall(g, COW_IMG(0x10221ce0u), self, in_edx, 0);
    t4 = g->edx;
    eax = t3;
    edx = t4;
L_10231bdb: ;
    COW_AT(10231bdb)
    loc_18 = arg1;
    goto L_10231bdd;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10231ac0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10231ae4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        g->ebx = arg2;
        g->esi = self;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10231aebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10231af7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = (uint32_t)(int16_t)arg2 - 9u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10231afeu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = (uint32_t)(int16_t)arg2 - 0xau;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10231b0du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10231b1cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x10231b47u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        g->ebx = arg2;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10231b5eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10231b67u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        g->ebx = arg2;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10231b7eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10231b87u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10231b95u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_4;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10231ba0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10231ba9u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_4;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = self;
        g->edi = 5u;
        (void)sp0;
        return 1;
    }
    case 0x10231bb4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edi = 5u;
        (void)sp0;
        return 1;
    }
    case 0x10231bb9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10231bc1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = (uint32_t)(int16_t)arg2;
        g->ebx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10231bc6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = (uint32_t)(int16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x10231bd4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = (uint32_t)(int16_t)arg2;
        g->ebx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10231bdbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10231bddu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x14u, arg2);
        (void)sp0;
        return 1;
    }
    case 0x10231be4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10231befu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10231bf4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10231ac0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10231ac0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
