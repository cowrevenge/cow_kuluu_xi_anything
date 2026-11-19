/* f_0x10084d40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10084d40(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
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
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 40u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10084d51u: eax = g->eax; edx = g->edx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10084d51;
    case 0x10084d59u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10084d59;
    case 0x10084d67u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10084d67;
    case 0x10084d7du: eax = g->eax; edx = g->edx; goto E_10084d7d;
    case 0x10084d85u: eax = g->eax; edx = g->edx; self = g->esi; goto E_10084d85;
    case 0x10084da1u: eax = g->eax; edx = g->edx; self = g->esi; goto E_10084da1;
    case 0x10084da7u: eax = g->eax; edx = g->edx; self = g->esi; goto E_10084da7;
    case 0x10084dbau: eax = g->eax; edx = g->edx; self = g->esi; goto E_10084dba;
    case 0x10084dcau: eax = g->eax; edx = g->edx; self = g->esi; goto E_10084dca;
    case 0x10084de5u: eax = g->eax; edx = g->edx; self = g->esi; goto E_10084de5;
    case 0x10084debu: eax = g->eax; edx = g->edx; self = g->esi; goto E_10084deb;
    case 0x10084dfeu: eax = g->eax; edx = g->edx; self = g->esi; goto E_10084dfe;
    case 0x10084e21u: eax = g->eax; edx = g->edx; self = g->esi; goto E_10084e21;
    case 0x10084e27u: eax = g->eax; edx = g->edx; self = g->esi; goto E_10084e27;
    case 0x10084e3au: eax = g->eax; edx = g->edx; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10084e3a;
    default: break;
    }
#endif

    COW_AT(10084d40)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, rd32(t1 + 0x1e4u), self, 0);
    t3 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        edx = t3;
        goto L_10084d59;
    }
    eax = t2;
    edx = t3;
    COW_AT(10084d51)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10084d59: ;
    COW_AT(10084d59)
    if (rd32(self + 0xb4u) == 0u)
    {
        eax = rd32(self + 0xb4u);
        loc_4 = self;
        loc_8 = in_esi;
        loc_c = in_edi;
        goto L_10084e3a;
    }
    eax = rd32(self + 0xb4u);
    COW_AT(10084d67)
    t4 = rd32(rd32(eax) + 0x14u);
    wr32(sp0 - 4u, t4);
    g->eax = eax;
    g->edx = t4;
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 4u, 0);
    t6 = g->edx;
    if ((uint8_t)t5 != 0u)
    {
        edx = t6;
        goto L_10084d85;
    }
    eax = t5;
    edx = t6;
    COW_AT(10084d7d)
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10084d85: ;
    COW_AT(10084d85)
    wr32(sp0 - 0x10u, arg1);
    wr32(sp0 - 0x14u, 7u);
    wr32(sp0 - 0x18u, sp0 + 4u);
    g->eax = rd32(self);
    g->edx = edx;
    t7 = rd32(self);
    g->esp = sp0 - 0xcu;
    t8 = cow_thiscall(g, rd32(t7 + 0x1ecu), self, 3, sp0 + 4u, 7u, arg1);
    t9 = g->edx;
    if (rd32(t8) == 0u)
    {
        eax = rd32(t8);
        edx = t9;
        goto L_10084dba;
    }
    eax = rd32(t8);
    edx = t9;
    COW_AT(10084da1)
    if (rd32(eax) == 0u)
    {
        eax = rd32(eax);
        goto L_10084dba;
    }
    eax = rd32(eax);
    COW_AT(10084da7)
    wr32(sp0 - 0x10u, arg2);
    wr32(sp0 - 0x14u, self);
    g->eax = eax;
    g->edx = arg2;
    g->esp = sp0 - 0xcu;
    t10 = cow_thiscall(g, COW_IMG(0x10057010u), eax, 2, self, arg2);
    t11 = g->edx;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = t11;
    return t10;
L_10084dba: ;
    COW_AT(10084dba)
    wr32(sp0 - 0x10u, COW_IMG(0x10330ebcu));
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t12 = cow_fastcall(g, COW_IMG(0x1002c8f0u), self, edx, 1, COW_IMG(0x10330ebcu));
    t13 = g->edx;
    if ((uint8_t)t12 == 0u) goto L_10084dfe;
    edx = t13;
    COW_AT(10084dca)
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0xffffffffu);
    wr32(sp0 - 0x1cu, arg1);
    wr32(sp0 - 0x20u, 7u);
    wr32(sp0 - 0x24u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t14 = cow_thiscall(g, COW_IMG(0x100ce480u), self, 6, sp0 + 4u, 7u, arg1, 0xffffffffu, 0u, 0u);
    t15 = g->edx;
    if (rd32(t14) == 0u) goto L_10084dfe;
    eax = rd32(t14);
    edx = t15;
    COW_AT(10084de5)
    if (rd32(eax) == 0u) goto L_10084dfe;
    eax = rd32(eax);
    COW_AT(10084deb)
    wr32(sp0 - 0x10u, arg2);
    wr32(sp0 - 0x14u, self);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t16 = cow_thiscall(g, COW_IMG(0x10057010u), eax, 2, self, arg2);
    t17 = g->edx;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = t17;
    return t16;
L_10084dfe: ;
    COW_AT(10084dfe)
    wr32(sp0 - 0x10u, arg1);
    wr32(sp0 - 0x14u, 7u);
    wr32(sp0 - 0x18u, sp0 + 4u);
    t18 = rd32(rd32(rd32(COW_IMG(0x1047d128u)) + 0x40008u));
    g->edx = rd32(COW_IMG(0x1047d128u));
    t19 = rd32(COW_IMG(0x1047d128u));
    g->esp = sp0 - 0xcu;
    t20 = cow_call_regs(g, COW_IMG(0x100724c0u), t18, t18, g->edx, 0, 3, sp0 + 4u, 7u, arg1);
    t21 = g->edx;
    if (rd32(t20) == 0u)
    {
        eax = rd32(t20);
        edx = t21;
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        goto L_10084e3a;
    }
    eax = rd32(t20);
    edx = t21;
    COW_AT(10084e21)
    if (rd32(eax) == 0u)
    {
        eax = rd32(eax);
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        goto L_10084e3a;
    }
    eax = rd32(eax);
    COW_AT(10084e27)
    wr32(sp0 - 0x10u, arg2);
    wr32(sp0 - 0x14u, self);
    g->eax = eax;
    g->edx = arg2;
    g->esp = sp0 - 0xcu;
    t22 = cow_thiscall(g, COW_IMG(0x10057010u), eax, 2, self, arg2);
    t23 = g->edx;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = t23;
    return t22;
L_10084e3a: ;
    COW_AT(10084e3a)
    g->esi = loc_8;
    g->edi = loc_c;
    g->edx = edx;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10084d40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10084d51u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10084d59u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10084d67u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10084d7du:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10084d85u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10084da1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        g->edi = arg1;
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10084da7u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10084dbau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        g->edi = arg1;
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10084dcau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        g->edi = arg1;
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10084de5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        g->edi = arg1;
        wr32(sp0 - 0x24u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10084debu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x24u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10084dfeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10084e21u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10084e27u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10084e3au:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10084d40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10084d40(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
