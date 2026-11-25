/* f_0x1003de40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1003de40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1003de46u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1003de46;
    case 0x1003de52u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1003de52;
    case 0x1003de5du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1003de5d;
    case 0x1003de5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1003de5f;
    case 0x1003de64u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1003de64;
    case 0x1003de6du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1003de6d;
    case 0x1003de72u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1003de72;
    case 0x1003de79u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1003de79;
    case 0x1003de7du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1003de7d;
    default: break;
    }
#endif

    COW_AT(1003de40)
    ecx = self;
    esi = 0u;
L_1003de46: ;
    COW_AT(1003de46)
    if ((uint8_t)rd32(ecx) == 0u)
    {
        edx = (uint8_t)rd32(ecx);
    COW_AT(1003de5d)
        eax = 0u;
    }
    else
    {
        eax = rd32(ecx);
        edx = (uint8_t)rd32(ecx);
    COW_AT(1003de52)
        eax = ecx + (eax >> 8u & 0x1fu) * 4u;
    }
    COW_AT(1003de5f)
    if (edx != 0x69u) goto L_1003de6d;
    COW_AT(1003de64)
    wr16(ecx + 4u, 0u);
    ecx = eax;
    esi = esi + 1u;
    goto L_1003de46;
L_1003de6d: ;
    COW_AT(1003de6d)
    if (edx != 0x6au) goto L_1003de79;
    COW_AT(1003de72)
    wr16(ecx + 4u, 0u);
    if (esi == 1u) goto L_1003de7d;
    esi = esi - 1u;
L_1003de79: ;
    COW_AT(1003de79)
    ecx = eax;
    goto L_1003de46;
L_1003de7d: ;
    COW_AT(1003de7d)
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1003de40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1003de46u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003de52u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003de5du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003de5fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003de64u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003de6du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003de72u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003de79u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003de7du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1003de40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1003de40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
