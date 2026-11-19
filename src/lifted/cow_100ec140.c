/* f_0x100ec140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100ec140(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100ec149u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_100ec149;
    case 0x100ec171u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_100ec171;
    case 0x100ec184u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_100ec184;
    default: break;
    }
#endif

    COW_AT(100ec140)
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x104dfd98u));
    COW_AT(100ec149)
        esi = arg3 + 4u;
        edi = eax + 0x3bfd8u;
        ecx = 0x11u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c130u) == 0u)
        {
            eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c130u);
            edx = in_edx;
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c130u);
            ecx = rd32(COW_IMG(0x104dfd98u));
    COW_AT(100ec171)
            t1 = rd32(ecx + 0x3c134u);
            g->eax = eax;
            g->edx = ecx + 0x3bfd8u;
            g->esp = sp0;
            t2 = cow_thiscall_cdecl(g, eax, t1, 2, t1, ecx + 0x3bfd8u);
            t3 = g->edx;
            eax = t2;
            edx = t3;
        }
    }
    COW_AT(100ec184)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100ec140(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100ec149u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100ec171u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100ec184u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100ec140(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100ec140(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
