/* f_0x101ae570 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101ae570(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 1044u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101ae585u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101ae585;
    case 0x101ae595u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101ae595;
    default: break;
    }
#endif

    COW_AT(101ae570)
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10662d40u));
    g->esp = sp0 - 0x400u;
    t2 = cow_thiscall(g, COW_IMG(0x101b5cb0u), t1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
    }
    else
    {
        eax = t2;
        ecx = t3;
        edx = t4;
    COW_AT(101ae585)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x400u;
        t5 = cow_stdcall(g, COW_IMG(0x101ae600u), 0);
        t6 = g->edx;
        t7 = rd32(COW_IMG(0x10662d40u));
        t8 = cow_fastcall(g, COW_IMG(0x101b5800u), t7, t6, 0);
        t9 = g->ecx;
        t10 = g->edx;
        eax = t8;
        ecx = t9;
        edx = t10;
    }
    COW_AT(101ae595)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x400u;
    t11 = cow_stdcall(g, COW_IMG(0x101ae5e0u), 0);
    t12 = g->edx;
    wr32(sp0 - 0x404u, t11);
    wr32(sp0 - 0x408u, arg1);
    wr32(sp0 - 0x40cu, COW_IMG(0x10350ff8u));
    wr32(sp0 - 0x410u, sp0 - 0x400u);
    g->esp = sp0 - 0x3fcu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x400u, COW_IMG(0x10350ff8u), arg1, t11, rd32(sp0 - 0x400u));
    wr32(sp0 - 0x404u, sp0 - 0x400u);
    g->eax = sp0 - 0x400u;
    g->edx = rd32(rd32(COW_IMG(0x10662d40u)));
    t13 = rd32(COW_IMG(0x10662d40u));
    t14 = rd32(rd32(COW_IMG(0x10662d40u)));
    g->esp = sp0 - 0x400u;
    t15 = cow_thiscall(g, rd32(t14 + 0x24u), t13, 1, sp0 - 0x400u);
    t16 = g->ecx;
    t17 = g->edx;
    g->edx = t17;
    cow_stdcall(g, COW_IMG(0x101ae5f0u), 0);
    t18 = g->edx;
    g->edx = t18;
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101ae570(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101ae585u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x400u;
        (void)sp0;
        return 1;
    }
    case 0x101ae595u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x400u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101ae570(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101ae570(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
