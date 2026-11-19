/* f_0x1020fbf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1020fbf0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
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
    cow_frame(g, sp0, 36u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1020fbfau: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1020fbfa;
    case 0x1020fc01u: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1020fc01;
    case 0x1020fc13u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1020fc13;
    case 0x1020fc2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020fc2e;
    case 0x1020fc35u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020fc35;
    case 0x1020fc49u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020fc49;
    case 0x1020fc51u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020fc51;
    case 0x1020fc55u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020fc55;
    case 0x1020fc59u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020fc59;
    case 0x1020fc70u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_4 = rd32(sp0 - 4u); goto E_1020fc70;
    default: break;
    }
#endif

    COW_AT(1020fbf0)
    wr32(sp0 - 4u, in_esi);
    if (rd32(COW_IMG(0x10578204u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10578204u));
        edx = in_edx;
        loc_4 = in_esi;
        goto L_1020fc70;
    }
    eax = rd32(COW_IMG(0x10578204u));
    COW_AT(1020fbfa)
    if (rd32(self + 8u) == 0u)
    {
        edx = in_edx;
        loc_4 = in_esi;
        goto L_1020fc70;
    }
    esi = rd32(self + 8u);
    COW_AT(1020fc01)
    if ((int32_t)(uint8_t)rd32(sp0 + 8u) >= (int16_t)rd16(self + 4u))
    {
        eax = (uint32_t)(int16_t)rd16(self + 4u);
        edx = (uint8_t)rd32(sp0 + 8u);
        loc_4 = in_esi;
        goto L_1020fc70;
    }
    edx = (uint8_t)rd32(sp0 + 8u);
    COW_AT(1020fc13)
    t1 = rd32(edx * 0x54u + esi + 0x48u);
    wr32(sp0 - 8u, t1);
    wr32(sp0 - 0xcu, sp0 + 8u);
    g->eax = edx * 8u - edx;
    g->edx = sp0 + 8u;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x100f8a80u), 2, sp0 + 8u, t1);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    COW_AT(1020fc2e)
    if ((uint8_t)eax == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        goto L_1020fc70;
    }
    COW_AT(1020fc35)
    if (rd32(rd32(COW_IMG(0x10578204u)) + 8u) == 0u)
    {
        eax = rd32(sp0 + 8u) + 0xcu;
        ecx = rd32(COW_IMG(0x10578204u));
        edx = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
        goto L_1020fc55;
    }
    eax = rd32(sp0 + 8u) + 0xcu;
    ecx = rd32(COW_IMG(0x10578204u));
    edx = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
    COW_AT(1020fc49)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, eax);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_call_regs(g, COW_IMG(0x1013e2f0u), eax, ecx, g->edx, 0, 2, eax, 0u);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    COW_AT(1020fc51)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_1020fc55: ;
    COW_AT(1020fc55)
    if (eax == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
    }
    else
    {
    COW_AT(1020fc59)
        wr32(sp0 - 8u, 0u);
        wr32(sp0 - 0xcu, 0u);
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 0x14u, 0u);
        t6 = (edx & 0xffffff00u) | rd8(eax + 2u);
        wr32(sp0 - 0x18u, t6);
        t7 = (eax & 0xffff0000u) | rd16(eax);
        wr32(sp0 - 0x1cu, t7);
        wr32(sp0 - 0x20u, 1u);
        g->edx = t6;
        g->esp = sp0 - 4u;
        t8 = cow_call_regs(g, COW_IMG(0x1013e410u), t7, ecx, g->edx, 0, 7, 1u, t7, t6, 0u, 0u, 0u, 0u);
        t9 = g->edx;
        eax = t8;
        edx = t9;
        loc_4 = rd32(sp0 - 4u);
    }
L_1020fc70: ;
    COW_AT(1020fc70)
    g->esi = loc_4;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1020fbf0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1020fbfau:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020fc01u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020fc13u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020fc2eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0xcu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1020fc35u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0xcu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1020fc49u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0xcu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1020fc51u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020fc55u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0xcu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1020fc59u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0xcu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1020fc70u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1020fbf0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1020fbf0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
