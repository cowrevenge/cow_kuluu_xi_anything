/* f_0x1027ed10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u16 stack_args=1 */
uint32_t cow_fn_1027ed10(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    uint32_t eax;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1027ed1du: in_eax = g->eax; goto E_1027ed1d;
    case 0x1027ed2du: eax = g->eax; goto E_1027ed2d;
    case 0x1027ed3du: eax = g->eax; goto E_1027ed3d;
    case 0x1027ed4du: eax = g->eax; goto E_1027ed4d;
    case 0x1027ed52u: eax = g->eax; goto E_1027ed52;
    case 0x1027ed62u: eax = g->eax; goto E_1027ed62;
    case 0x1027ed72u: eax = g->eax; goto E_1027ed72;
    case 0x1027ed82u: eax = g->eax; goto E_1027ed82;
    case 0x1027ed87u: eax = g->eax; goto E_1027ed87;
    case 0x1027ed8au: eax = g->eax; goto E_1027ed8a;
    default: break;
    }
#endif

    COW_AT(1027ed10)
    if (rd32(arg1) != 0x3f800000u)
    {
        eax = in_eax;
        goto L_1027ed8a;
    }
    COW_AT(1027ed1d)
    d1 = (double)rdf32(arg1 + 4u);
    if (d1 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1027ed8a;
    }
    eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(1027ed2d)
    d2 = (double)rdf32(arg1 + 8u);
    if (d2 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1027ed8a;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(1027ed3d)
    d3 = (double)rdf32(arg1 + 0x10u);
    if (d3 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1027ed8a;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(1027ed4d)
    if (rd32(arg1 + 0x14u) != 0x3f800000u) goto L_1027ed8a;
    COW_AT(1027ed52)
    d4 = (double)rdf32(arg1 + 0x18u);
    if (d4 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1027ed8a;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(1027ed62)
    d5 = (double)rdf32(arg1 + 0x20u);
    if (d5 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1027ed8a;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(1027ed72)
    d6 = (double)rdf32(arg1 + 0x24u);
    if (d6 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1027ed8a;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(1027ed82)
    if (rd32(arg1 + 0x28u) != 0x3f800000u) goto L_1027ed8a;
    COW_AT(1027ed87)
    g->edx = 0x3f800000u;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
L_1027ed8a: ;
    COW_AT(1027ed8a)
    g->edx = 0x3f800000u;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1027ed10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1027ed1du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_eax;
        in_eax = g->eax;
        g->esp = sp0;
        g->ecx = arg1;
        g->edx = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x1027ed2du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        g->ecx = arg1;
        g->edx = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x1027ed3du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        g->ecx = arg1;
        g->edx = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x1027ed4du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        g->ecx = arg1;
        g->edx = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x1027ed52u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        g->ecx = arg1;
        g->edx = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x1027ed62u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        g->ecx = arg1;
        g->edx = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x1027ed72u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        g->ecx = arg1;
        g->edx = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x1027ed82u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        g->ecx = arg1;
        g->edx = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x1027ed87u:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        g->edx = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x1027ed8au:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        g->edx = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1027ed10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1027ed10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
