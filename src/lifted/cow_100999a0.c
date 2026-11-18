/* f_0x100999a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100999a0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100999abu: eax = g->eax; in_edx = g->edx; goto E_100999ab;
    case 0x100999b4u: eax = g->eax; in_edx = g->edx; goto E_100999b4;
    case 0x100999cau: eax = g->eax; in_edx = g->edx; goto E_100999ca;
    case 0x100999ceu: eax = g->eax; in_edx = g->edx; goto E_100999ce;
    case 0x100999d7u: eax = g->eax; in_edx = g->edx; goto E_100999d7;
    case 0x100999eau: eax = g->eax; edx = g->edx; goto E_100999ea;
    default: break;
    }
#endif

    COW_AT(100999a0)
    if (rd8(arg3 + 4u) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg3 + 4u);
        goto L_100999ca;
    }
    COW_AT(100999ab)
    if (rd32(COW_IMG(0x10487e9cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x10487e9cu));
        edx = in_edx;
        goto L_100999ea;
    }
    eax = rd32(COW_IMG(0x10487e9cu));
    COW_AT(100999b4)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_thiscall_cdecl(g, eax, arg3 + 8u, 1, arg3 + 8u);
    t2 = g->edx;
    wr32(COW_IMG(0x10487e9cu), 0u);
    g->edx = t2;
    return (t1 & 0xffffff00u) | 1u;
L_100999ca: ;
    COW_AT(100999ca)
    if ((uint8_t)eax != 1u)
    {
        edx = in_edx;
    }
    else
    {
    COW_AT(100999ce)
        if (rd32(COW_IMG(0x10487ea0u)) == 0u)
        {
            eax = rd32(COW_IMG(0x10487ea0u));
            edx = in_edx;
        }
        else
        {
            eax = rd32(COW_IMG(0x10487ea0u));
    COW_AT(100999d7)
            g->eax = eax;
            g->edx = in_edx;
            g->esp = sp0;
            t3 = cow_thiscall_cdecl(g, eax, arg3 + 8u, 1, arg3 + 8u);
            t4 = g->edx;
            wr32(COW_IMG(0x10487ea0u), 0u);
            eax = t3;
            edx = t4;
        }
    }
L_100999ea: ;
    COW_AT(100999ea)
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100999a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100999abu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        g->ecx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100999b4u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        g->ecx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100999cau:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        g->ecx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100999ceu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        g->ecx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100999d7u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        g->ecx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100999eau:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
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
void cow_adapter_100999a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100999a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
