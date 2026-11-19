/* f_0x1022c290 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1022c290(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
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
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1022c29au: in_edx = g->edx; in_esi = g->esi; goto E_1022c29a;
    case 0x1022c29du: in_edx = g->edx; in_esi = g->esi; goto E_1022c29d;
    case 0x1022c2a6u: eax = g->eax; in_edx = g->edx; in_esi = g->esi; goto E_1022c2a6;
    case 0x1022c2c3u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; goto E_1022c2c3;
    case 0x1022c2cbu: in_edx = g->edx; in_esi = g->esi; goto E_1022c2cb;
    case 0x1022c2ceu: in_edx = g->edx; in_esi = g->esi; goto E_1022c2ce;
    case 0x1022c2d1u: in_edx = g->edx; in_esi = g->esi; goto E_1022c2d1;
    case 0x1022c2dfu: eax = g->eax; edx = g->edx; in_esi = g->esi; goto E_1022c2df;
    case 0x1022c305u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1022c305;
    case 0x1022c33eu: eax = g->eax; edx = g->edx; in_esi = g->esi; goto E_1022c33e;
    default: break;
    }
#endif

    COW_AT(1022c290)
    if ((uint32_t)(int16_t)arg1 == 5u) goto L_1022c2c3;
    COW_AT(1022c29a)
    if ((uint32_t)(int16_t)arg1 == 6u) goto L_1022c2a6;
    COW_AT(1022c29d)
    if ((uint32_t)(int16_t)arg1 - 6u != 2u)
    {
        eax = (uint32_t)(int16_t)arg1 - 8u;
        edx = in_edx;
        goto L_1022c33e;
    }
L_1022c2a6: ;
    COW_AT(1022c2a6)
    t1 = rd32(rd32(COW_IMG(0x10667a70u)) + 8u);
    g->eax = rd32(COW_IMG(0x10667a70u));
    t2 = rd32(COW_IMG(0x10667a70u));
    g->esp = sp0;
    t3 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), in_edx, 2, t1, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x10037e90u), t4, 0);
    t7 = g->edx;
    g->esi = in_esi;
    g->edx = t7;
    return t6;
L_1022c2c3: ;
    COW_AT(1022c2c3)
    if ((uint32_t)(int16_t)arg2 == 1u) goto L_1022c305;
    COW_AT(1022c2cb)
    if ((uint32_t)(int16_t)arg2 == 2u) goto L_1022c2df;
    COW_AT(1022c2ce)
    if ((uint32_t)(int16_t)arg2 != 3u)
    {
        eax = (uint32_t)(int16_t)arg2 - 3u;
        edx = in_edx;
        goto L_1022c33e;
    }
    COW_AT(1022c2d1)
    g->esp = sp0;
    t8 = cow_call_regs(g, COW_IMG(0x101df020u), (uint32_t)(int16_t)arg2 - 3u, rd32(COW_IMG(0x1066349cu)), in_edx, 1, 0);
    t9 = g->edx;
    g->esi = in_esi;
    g->edx = t9;
    return t8;
L_1022c2df: ;
    COW_AT(1022c2df)
    t10 = rd32(rd32(COW_IMG(0x10667a70u)) + 8u);
    g->eax = t10;
    t11 = rd32(COW_IMG(0x10667a70u));
    g->esp = sp0;
    t12 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t11, 2, t10, 0u);
    t13 = g->edx;
    wr32(rd32(COW_IMG(0x10667a70u)) + 0x6cu, 1u);
    g->esi = in_esi;
    g->edx = t13;
    return t12;
L_1022c305: ;
    COW_AT(1022c305)
    t14 = (rd16(rd32(self + 8u) + 0x58u) != 3u) - 1u & 0x10u;
    g->eax = t14;
    g->edx = rd32(self + 8u);
    t15 = rd32(self + 8u);
    t16 = rd32(COW_IMG(0x10666ea4u));
    g->esp = sp0 - 0x10u;
    t17 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x50u);
    t18 = g->edx;
    g->edx = t18;
    g->esp = sp0 - 4u;
    t19 = cow_thiscall(g, COW_IMG(0x10222770u), t16, 6, COW_IMG(0x1022d240u), 0u, t17, 0u, 0u, t14);
    t20 = g->edx;
    eax = t19;
    edx = t20;
L_1022c33e: ;
    COW_AT(1022c33e)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1022c290(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1022c29au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 5u;
        (void)sp0;
        return 1;
    }
    case 0x1022c29du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 6u;
        (void)sp0;
        return 1;
    }
    case 0x1022c2a6u:
    {
        uint32_t eax;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1022c2c3u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1022c2cbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022c2ceu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 2u;
        (void)sp0;
        return 1;
    }
    case 0x1022c2d1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x1022c2dfu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1022c305u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1022c33eu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
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
void cow_adapter_1022c290(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1022c290(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
