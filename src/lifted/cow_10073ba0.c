/* f_0x10073ba0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10073ba0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10073ba8u: eax = g->eax; ecx = g->ecx; goto E_10073ba8;
    case 0x10073bb6u: eax = g->eax; ecx = g->ecx; goto E_10073bb6;
    case 0x10073bbau: eax = g->eax; ecx = g->ecx; goto E_10073bba;
    case 0x10073bc1u: eax = g->eax; ecx = g->ecx; goto E_10073bc1;
    case 0x10073bc8u: eax = g->eax; ecx = g->ecx; goto E_10073bc8;
    case 0x10073bd5u: ecx = g->ecx; goto E_10073bd5;
    case 0x10073be0u: eax = g->eax; ecx = g->ecx; goto E_10073be0;
    case 0x10073be4u: eax = g->eax; ecx = g->ecx; goto E_10073be4;
    case 0x10073be6u: eax = g->eax; ecx = g->ecx; goto E_10073be6;
    case 0x10073beau: eax = g->eax; ecx = g->ecx; goto E_10073bea;
    case 0x10073beeu: eax = g->eax; goto E_10073bee;
    case 0x10073bf2u: eax = g->eax; goto E_10073bf2;
    case 0x10073bf7u: eax = g->eax; goto E_10073bf7;
    case 0x10073bfeu: eax = g->eax; goto E_10073bfe;
    case 0x10073c02u: eax = g->eax; goto E_10073c02;
    case 0x10073c04u: eax = g->eax; goto E_10073c04;
    case 0x10073c08u: eax = g->eax; ecx = g->ecx; goto E_10073c08;
    case 0x10073c15u: eax = g->eax; ecx = g->ecx; goto E_10073c15;
    case 0x10073c18u: eax = g->eax; ecx = g->ecx; goto E_10073c18;
    case 0x10073c21u: eax = g->eax; ecx = g->ecx; goto E_10073c21;
    default: break;
    }
#endif

    COW_AT(10073ba0)
    if (arg2 != 0u) goto L_10073bd5;
    COW_AT(10073ba8)
    if (rd32(rd32(rd32(COW_IMG(0x1047d124u))) + 0x14u) == 0u) goto L_10073bc8;
    ecx = rd32(rd32(rd32(COW_IMG(0x1047d124u))) + 0x14u);
    COW_AT(10073bb6)
L_10073bba: ;
    COW_AT(10073bba)
    t1 = rd32(rd32(ecx) + 0x20u);
    if (t1 == arg3) goto L_10073c18;
    eax = rd32(ecx);
    COW_AT(10073bc1)
    if (rd32(eax + 0x2cu) != 0u)
    {
        ecx = rd32(eax + 0x2cu);
        goto L_10073bba;
    }
L_10073bc8: ;
    COW_AT(10073bc8)
    wr32(arg1, 0u);
    return;
L_10073bd5: ;
    COW_AT(10073bd5)
    if (rd32(COW_IMG(0x1047cf80u) + arg2 * 4u) == 0u)
    {
    COW_AT(10073be4)
        eax = 0u;
    }
    else
    {
        eax = rd32(COW_IMG(0x1047cf80u) + arg2 * 4u);
    COW_AT(10073be0)
        eax = rd32(eax);
    }
    COW_AT(10073be6)
    if (eax == 0u) goto L_10073bc8;
    COW_AT(10073bea)
L_10073bee: ;
    COW_AT(10073bee)
    if (arg3 == 0u) goto L_10073c21;
    COW_AT(10073bf2)
    t2 = rd32(eax + 0x20u);
    if (t2 == arg3) goto L_10073c15;
    COW_AT(10073bf7)
    if (rd32(eax + 0x10u) == 0u)
    {
    COW_AT(10073c02)
        eax = 0u;
    }
    else
    {
        eax = rd32(eax + 0x10u);
    COW_AT(10073bfe)
        eax = rd32(eax);
    }
    COW_AT(10073c04)
    if (eax != 0u) goto L_10073bee;
    COW_AT(10073c08)
    wr32(arg1, 0u);
    return;
L_10073c15: ;
    COW_AT(10073c15)
    ecx = rd32(eax + 0x14u);
L_10073c18: ;
    COW_AT(10073c18)
    wr32(arg1, ecx);
    return;
L_10073c21: ;
    COW_AT(10073c21)
    t3 = rd32(eax + 0x14u);
    wr32(arg1, t3);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10073ba0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10073ba8u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10073bb6u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10073bbau:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10073bc1u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10073bc8u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10073bd5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10073be0u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10073be4u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10073be6u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10073beau:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10073beeu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        g->ecx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10073bf2u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        g->ecx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10073bf7u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        g->ecx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10073bfeu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        g->ecx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10073c02u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        g->ecx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10073c04u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        g->ecx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10073c08u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10073c15u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10073c18u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10073c21u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10073ba0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10073ba0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
