/* f_0x10327412 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10327412(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10327422u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10327422;
    case 0x1032742au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1032742a;
    case 0x1032742cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1032742c;
    case 0x10327430u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10327430;
    case 0x1032743bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1032743b;
    default: break;
    }
#endif

    COW_AT(10327412)
    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x10329208u)), 2, arg1, 0u);   /* kernel32.dll!CreateDirectoryA */
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
    COW_AT(1032742a)
        eax = 0u;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    COW_AT(10327422)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0;
        t4 = cow_stdcall(g, rd32(COW_IMG(0x10329168u)), 0);   /* kernel32.dll!GetLastError */
        t5 = g->ecx;
        t6 = g->edx;
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    COW_AT(1032742c)
    if (eax == 0u) goto L_1032743b;
    COW_AT(10327430)
    g->eax = eax;
    g->esp = sp0;
    t7 = cow_call_regs(g, COW_IMG(0x10319c16u), g->eax, ecx, edx, 1, 1, eax);
    return 0xffffffffu;
L_1032743b: ;
    COW_AT(1032743b)
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10327412(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10327422u:
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
    case 0x1032742au:
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
    case 0x1032742cu:
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
    case 0x10327430u:
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
    case 0x1032743bu:
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
void cow_adapter_10327412(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10327412(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
