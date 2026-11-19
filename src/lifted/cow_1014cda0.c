/* f_0x1014cda0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1014cda0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1014cdb4u: eax = g->eax; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014cdb4;
    case 0x1014cdbbu: eax = g->eax; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014cdbb;
    case 0x1014cdc9u: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014cdc9;
    case 0x1014cdd1u: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014cdd1;
    case 0x1014cddau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014cdda;
    case 0x1014cdf6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014cdf6;
    case 0x1014cdfbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014cdfb;
    case 0x1014ce00u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014ce00;
    case 0x1014ce09u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014ce09;
    case 0x1014ce10u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014ce10;
    case 0x1014ce1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014ce1f;
    case 0x1014ce2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014ce2b;
    case 0x1014ce36u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_c = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014ce36;
    case 0x1014ce6du: eax = g->eax; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014ce6d;
    case 0x1014ce72u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014ce72;
    default: break;
    }
#endif

    COW_AT(1014cda0)
    if ((uint32_t)(int16_t)arg1 == 5u)
    {
        eax = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
        goto L_1014cdc9;
    }
    eax = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
    COW_AT(1014cdb4)
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        edx = in_edx;
        goto L_1014ce72;
    }
    COW_AT(1014cdbb)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100f7fa0u), 1, 0xfu);
    t2 = g->edx;
    g->esi = in_esi;
    g->edx = t2;
    return t1;
L_1014cdc9: ;
    COW_AT(1014cdc9)
    if ((int32_t)eax <= 0) goto L_1014ce6d;
    COW_AT(1014cdd1)
    if ((int32_t)eax > 8) goto L_1014ce6d;
    COW_AT(1014cdda)
    if (rd32(eax * 0x48u + rd32(COW_IMG(0x104dfd98u)) + 0x2c9dcu) == 7u)
    {
        ecx = eax * 0x48u + rd32(COW_IMG(0x104dfd98u)) + 0x2c9dcu;
        edx = rd32(COW_IMG(0x104dfd98u));
        goto L_1014ce00;
    }
    ecx = eax * 0x48u + rd32(COW_IMG(0x104dfd98u)) + 0x2c9dcu;
    eax = rd32(eax * 0x48u + rd32(COW_IMG(0x104dfd98u)) + 0x2c9dcu) - 7u;
    edx = rd32(COW_IMG(0x104dfd98u));
    COW_AT(1014cdf6)
    if (eax == 4u) goto L_1014ce00;
    eax = eax - 4u;
    COW_AT(1014cdfb)
    if (eax != 2u)
    {
        eax = eax - 2u;
        goto L_1014ce72;
    }
L_1014ce00: ;
    COW_AT(1014ce00)
    if (rd32(COW_IMG(0x10578458u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10578458u));
        goto L_1014ce72;
    }
    eax = rd32(COW_IMG(0x10578458u));
    COW_AT(1014ce09)
    if (rd32(eax + 8u) == 0u)
    {
        edx = rd32(eax + 8u);
        goto L_1014ce72;
    }
    edx = rd32(eax + 8u);
    COW_AT(1014ce10)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x1014ca10u), 1, ecx);
    t4 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        eax = t3;
        edx = t4;
    COW_AT(1014ce2b)
        ecx = rd32(rd32(COW_IMG(0x10578458u)) + 8u);
        loc_c = 0xbu;
    }
    else
    {
        edx = t4;
    COW_AT(1014ce1f)
        eax = rd32(COW_IMG(0x10578458u));
        ecx = rd32(rd32(COW_IMG(0x10578458u)) + 8u);
        loc_c = 5u;
    }
    COW_AT(1014ce36)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x10118b60u), ecx, 2, loc_c, 3u);
    g->edx = rd32(COW_IMG(0x10578458u));
    t6 = rd32(COW_IMG(0x10578458u));
    cow_call_regs(g, COW_IMG(0x10118db0u), t5, rd32(t6 + 8u), g->edx, 0, 2, 1u, 0u);
    t7 = g->edx;
    t8 = rd32(rd32(COW_IMG(0x10578458u)) + 8u);
    g->eax = rd32(COW_IMG(0x10578458u));
    t9 = rd32(COW_IMG(0x10578458u));
    t10 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t7, 2, t8, 0u);
    t11 = g->edx;
    wr32(self + 0x14u, 7u);
    g->esi = in_esi;
    g->edx = t11;
    return t10;
L_1014ce6d: ;
    COW_AT(1014ce6d)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t12 = cow_thiscall(g, COW_IMG(0x10037c50u), (uint32_t)(int16_t)arg1 - 5u, 0);
    t13 = g->edx;
    eax = t12;
    edx = t13;
L_1014ce72: ;
    COW_AT(1014ce72)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1014cda0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1014cdb4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = (uint32_t)(int16_t)arg1 - 5u;
        (void)sp0;
        return 1;
    }
    case 0x1014cdbbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = (uint32_t)(int16_t)arg1 - 6u;
        (void)sp0;
        return 1;
    }
    case 0x1014cdc9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = (uint32_t)(int16_t)arg1 - 5u;
        (void)sp0;
        return 1;
    }
    case 0x1014cdd1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = (uint32_t)(int16_t)arg1 - 5u;
        (void)sp0;
        return 1;
    }
    case 0x1014cddau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1014cdf6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1014cdfbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1014ce00u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1014ce09u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1014ce10u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1014ce1fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 8u, 3u);
        (void)sp0;
        return 1;
    }
    case 0x1014ce2bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 8u, 3u);
        (void)sp0;
        return 1;
    }
    case 0x1014ce36u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, 3u);
        (void)sp0;
        return 1;
    }
    case 0x1014ce6du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = (uint32_t)(int16_t)arg1 - 5u;
        (void)sp0;
        return 1;
    }
    case 0x1014ce72u:
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
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1014cda0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1014cda0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
