/* f_0x100e3f20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100e3f20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100e3f3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100e3f3f;
    case 0x100e3f49u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100e3f49;
    default: break;
    }
#endif

    COW_AT(100e3f20)
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x19dd4u, 3u);
    if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x19dd8u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x19dd8u);
        ecx = rd32(COW_IMG(0x104dfd98u));
        edx = in_edx;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x19dd8u);
        ecx = rd32(COW_IMG(0x104dfd98u));
    COW_AT(100e3f3f)
        g->eax = eax;
        g->edx = arg3;
        g->esp = sp0;
        t1 = cow_thiscall_cdecl(g, eax, ecx, 1, arg3);
        t2 = g->ecx;
        t3 = g->edx;
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    COW_AT(100e3f49)
    g->eax = eax;
    g->esp = sp0;
    t4 = cow_stdcall(g, COW_IMG(0x100dc080u), 0);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x19ddcu, t4);
    t5 = rd32(COW_IMG(0x104dfd98u));
    wr32(t5 + 0x19dd4u, 4u);
    g->edx = t5;
    return (t4 & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100e3f20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100e3f3fu:
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
    case 0x100e3f49u:
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
void cow_adapter_100e3f20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100e3f20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
