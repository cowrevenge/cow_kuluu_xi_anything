/* f_0x100e0b60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100e0b60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100e0b75u: eax = g->eax; ecx = g->ecx; edx = g->edx; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100e0b75;
    case 0x100e0b8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100e0b8c;
    case 0x100e0b91u: eax = g->eax; ecx = g->ecx; edx = g->edx; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100e0b91;
    case 0x100e0b95u: eax = g->eax; ecx = g->ecx; edx = g->edx; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100e0b95;
    case 0x100e0bb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100e0bb0;
    case 0x100e0bb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100e0bb8;
    case 0x100e0bbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100e0bbb;
    default: break;
    }
#endif

    COW_AT(100e0b60)
    if (rd16(rd32(COW_IMG(0x104dfd98u)) + 0x1a6a0u) == 0xffffu)
    {
        eax = (in_eax & 0xffff0000u) | rd16(rd32(COW_IMG(0x104dfd98u)) + 0x1a6a0u);
        goto L_100e0bb8;
    }
    eax = (in_eax & 0xffff0000u) | rd16(rd32(COW_IMG(0x104dfd98u)) + 0x1a6a0u);
    edx = rd32(COW_IMG(0x104dfd98u));
    COW_AT(100e0b75)
    t1 = rd16(edx + (uint32_t)(int16_t)eax * 0x1cu + 0x1a6a8u);
    if ((uint16_t)t1 == 0xffffu)
    {
        eax = (uint32_t)(int16_t)eax;
        goto L_100e0bb8;
    }
    eax = (uint32_t)(int16_t)eax;
    COW_AT(100e0b8c)
    if (eax == 0xffffffffu) goto L_100e0bb8;
    COW_AT(100e0b91)
L_100e0b95: ;
    COW_AT(100e0b95)
    if (rd32(eax * 0x1cu + edx + 0x1a6acu) == arg1) goto L_100e0bbb;
    ecx = eax * 0x1cu + edx + 0x1a6a4u;
    COW_AT(100e0bb0)
    if ((uint32_t)(int16_t)rd16(ecx) != 0xffffffffu)
    {
        eax = (uint32_t)(int16_t)rd16(ecx);
        goto L_100e0b95;
    }
    eax = (uint32_t)(int16_t)rd16(ecx);
L_100e0bb8: ;
    COW_AT(100e0bb8)
    eax = 0xffffffffu;
L_100e0bbb: ;
    COW_AT(100e0bbb)
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100e0b60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100e0b75u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100e0b8cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100e0b91u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100e0b95u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e0bb0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e0bb8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100e0bbbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100e0b60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100e0b60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
