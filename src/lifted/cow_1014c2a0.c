/* f_0x1014c2a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1014c2a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1014c2aau: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_1014c2aa;
    case 0x1014c2adu: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_1014c2ad;
    case 0x1014c2c6u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_1014c2c6;
    case 0x1014c2ceu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_1014c2ce;
    case 0x1014c2d1u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_1014c2d1;
    case 0x1014c2d4u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_1014c2d4;
    case 0x1014c2deu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_1014c2de;
    case 0x1014c2f3u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_1014c2f3;
    case 0x1014c2fcu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_1014c2fc;
    case 0x1014c305u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_1014c305;
    case 0x1014c30eu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_1014c30e;
    case 0x1014c315u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_1014c315;
    case 0x1014c328u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1014c328;
    default: break;
    }
#endif

    COW_AT(1014c2a0)
    if ((uint32_t)(int16_t)rd16(sp0 + 4u) == 5u) goto L_1014c2c6;
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 5u;
    COW_AT(1014c2aa)
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
        goto L_1014c328;
    }
    COW_AT(1014c2ad)
    t1 = rd32(self + 8u);
    wr32(sp0 + 8u, 1u);
    wr32(sp0 + 4u, t1);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x1015e790u), t1, COW_IMG(0x10621838u), in_edx);
L_1014c2c6: ;
    COW_AT(1014c2c6)
    if ((uint32_t)(int16_t)rd16(sp0 + 8u) == 1u) goto L_1014c305;
    eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
    COW_AT(1014c2ce)
    if (eax == 1u) goto L_1014c2f3;
    eax = eax - 1u;
    COW_AT(1014c2d1)
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
        goto L_1014c328;
    }
    eax = eax - 1u;
    COW_AT(1014c2d4)
    if (rd32(COW_IMG(0x106644c0u)) == 0u)
    {
        edx = in_edx;
        goto L_1014c328;
    }
    ecx = rd32(COW_IMG(0x106644c0u));
    COW_AT(1014c2de)
    wr32(sp0 + 8u, 1u);
    wr32(sp0 + 4u, 1u);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x1020f3a0u), eax, ecx, in_edx);
L_1014c2f3: ;
    COW_AT(1014c2f3)
    if (rd32(COW_IMG(0x10668eccu)) == 0u)
    {
        eax = rd32(COW_IMG(0x10668eccu));
    }
    else
    {
        eax = rd32(COW_IMG(0x10668eccu));
    COW_AT(1014c2fc)
        wr32(eax + 0x68u, 2u);
    }
L_1014c315: ;
    COW_AT(1014c315)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103580e0u), 1u, 0u);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_1014c328: ;
    COW_AT(1014c328)
    g->edx = edx;
    return eax;
L_1014c305: ;
    COW_AT(1014c305)
    if (rd32(COW_IMG(0x10668eccu)) == 0u)
    {
        eax = rd32(COW_IMG(0x10668eccu));
    }
    else
    {
        eax = rd32(COW_IMG(0x10668eccu));
    COW_AT(1014c30e)
        wr32(eax + 0x68u, 1u);
    }
    goto L_1014c315;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1014c2a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1014c2aau:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1014c2adu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1014c2c6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1014c2ceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1014c2d1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1014c2d4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1014c2deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1014c2f3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1014c2fcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1014c305u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1014c30eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1014c315u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1014c328u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1014c2a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1014c2a0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
