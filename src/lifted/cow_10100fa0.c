/* f_0x10100fa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10100fa0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10100fbeu: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; edi = g->edi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10100fbe;
    case 0x10100fc9u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; edi = g->edi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10100fc9;
    case 0x10100fd4u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; edi = g->edi; in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10100fd4;
    case 0x10100ff5u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; edi = g->edi; in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10100ff5;
    case 0x10101063u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; edi = g->edi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10101063;
    default: break;
    }
#endif

    COW_AT(10100fa0)
    edi = arg2;
    eax = 0u;
    ecx = 0xfu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (rd8(arg1) == 2u)
    {
    COW_AT(10100fbe)
        if ((int8_t)rd8(arg1 + 1u) < 0)
        {
    COW_AT(10100fc9)
            eax = arg1 + 2u;
            ecx = arg2;
            ebx = in_ebx;
            edi = 3u;
L_10100fd4: ;
    COW_AT(10100fd4)
            t1 = rd16(eax) & 0x7ffu;
            wr32(ecx, t1);
            t2 = rd16(eax) >> 0xbu & 0xfu;
            wr32(ecx + 4u, t2);
            if (edi != 1u)
            {
                eax = eax + 2u;
                ecx = ecx + 0x14u;
                ebx = t2;
                edi = edi - 1u;
                goto L_10100fd4;
            }
            eax = eax + 2u;
            ecx = ecx + 0x14u;
    COW_AT(10100ff5)
            t3 = rd8(arg1 + 8u) & 0xfu;
            wr32(arg2 + 8u, t3);
            t4 = rd8(arg1 + 8u) >> 4u;
            wr32(arg2 + 0x1cu, t4);
            t5 = rd8(arg1 + 9u) & 0xfu;
            wr32(arg2 + 0x30u, t5);
            t6 = rd16(arg1 + 8u) >> 0xcu;
            wr32(arg2 + 0x10u, t6);
            t7 = rd8(arg1 + 0xau) & 0xfu;
            wr32(arg2 + 0x24u, t7);
            t8 = rd8(arg1 + 0xau) >> 4u;
            wr32(arg2 + 0x38u, t8);
            t9 = rd8(arg1 + 0xbu) & 7u;
            wr32(arg2 + 0xcu, t9);
            t10 = rd16(arg1 + 0xau) >> 0xbu & 7u;
            wr32(arg2 + 0x20u, t10);
            t11 = (rd16(arg1 + 0xau) >> 0xeu) + (rd16(arg1 + 6u) >> 0xfu) * 4u;
            wr32(arg2 + 0x34u, t11);
        }
    }
    COW_AT(10101063)
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10100fa0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10100fbeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 8u;
        g->edx = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10100fc9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 8u;
        g->edx = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10100fd4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        g->edx = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10100ff5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        g->edx = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10101063u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10100fa0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10100fa0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
