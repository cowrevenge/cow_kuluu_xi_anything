/* f_0x10178610 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10178610(Guest* g)
{
    double d10;
    double d11;
    double d14;
    double d6;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1017861fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1017861f;
    case 0x10178623u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10178623;
    case 0x1017862fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1017862f;
    case 0x10178637u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10178637;
    case 0x101786eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101786ea;
    case 0x10178705u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10178705;
    default: break;
    }
#endif

    COW_AT(10178610)
    eax = COW_IMG(0x10632040u);
    ecx = rd32(sp0 + 4u);
    ebx = 0u;
L_1017861f: ;
    COW_AT(1017861f)
    t1 = rd32(eax);
    if (t1 == ecx) goto L_10178637;
    COW_AT(10178623)
    if ((int32_t)(ebx + 1u) < 256)
    {
        eax = eax + 0x70u;
        ebx = ebx + 1u;
        goto L_1017861f;
    }
    eax = eax + 0x70u;
    COW_AT(1017862f)
    return 0xffffffffu;
L_10178637: ;
    COW_AT(10178637)
    wr32(eax, ecx);
    t2 = eax;
    edi = t2 + 8u;
    eax = 0u;
    ecx = 0x1au;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t3 = (uint8_t)rd32(sp0 + 0xeu);
    t4 = rd32(sp0 + 0xdu);
    wr32(sp0 + 4u, t3);
    t5 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, (uint8_t)t4);
    wr32(t2 + 8u, 1u);
    wr32(t2 + 0x18u, 0x3f000000u);
    d6 = fr(g, (double)(int32_t)t5 * (double)rdf32(COW_IMG(0x1032a778u)));
    wr32(t2 + 0x1cu, 0u);
    wr32(t2 + 0x20u, 0u);
    wr32(t2 + 0x24u, 0u);
    wr32(t2 + 0x28u, 0u);
    wr32(t2 + 0x2cu, 0u);
    wr32(t2 + 0x30u, 0u);
    wrf32(t2 + 0xcu, (float)d6);
    t7 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, (uint8_t)arg3);
    wr32(t2 + 0x34u, 0u);
    wr32(t2 + 0x38u, 0u);
    d8 = fr(g, (double)(int32_t)t7 * (double)rdf32(COW_IMG(0x1032a778u)));
    wrf32(t2 + 0x10u, (float)d8);
    d9 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1032a778u)));
    wrf32(t2 + 0x14u, (float)d9);
    d10 = (double)rdf32(sp0 + 0x10u);
    d11 = (double)rdf32(COW_IMG(0x103295d8u));
    wr32(t2 + 0x3cu, rd32(arg2));
    t12 = rd32(arg2 + 4u);
    wr32(t2 + 0x40u, t12);
    t13 = rd32(arg2 + 8u);
    wr32(t2 + 0x44u, t13);
    wr32(t2 + 0x54u, arg5);
    if (d10 == d11)
    {
        edx = t2 + 8u;
        goto L_10178705;
    }
    edx = t2 + 8u;
    COW_AT(101786ea)
    d14 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 + 0x10u));
    wr32(edx + 0x60u, arg4);
    wrf32(edx + 0x5cu, (float)d14);
    return ebx;
L_10178705: ;
    COW_AT(10178705)
    wr32(edx + 0x60u, arg4);
    wr32(edx + 0x5cu, 0x3f800000u);
    return ebx;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10178610(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1017861fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10178623u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017862fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10178637u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101786eau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10178705u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10178610(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10178610(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
