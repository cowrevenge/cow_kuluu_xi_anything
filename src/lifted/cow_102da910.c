/* f_0x102da910 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_102da910(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 1064u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102da924u: eax = g->eax; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x404u); in_esi = rd32(sp0 - 0x400u); in_ebx = rd32(sp0 - 0x3fcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x3fcu); g->edi = rd32(sp0 - 0x404u); g->esi = rd32(sp0 - 0x400u); goto E_102da924;
    case 0x102da92fu: eax = g->eax; edx = g->edx; esi = g->esi; goto E_102da92f;
    case 0x102da938u: edx = g->edx; goto E_102da938;
    case 0x102da93au: edx = g->edx; goto E_102da93a;
    case 0x102da941u: edx = g->edx; goto E_102da941;
    case 0x102da943u: edx = g->edx; goto E_102da943;
    case 0x102da94au: edx = g->edx; goto E_102da94a;
    case 0x102da94cu: edx = g->edx; goto E_102da94c;
    case 0x102da95cu: eax = g->eax; edx = g->edx; goto E_102da95c;
    case 0x102da960u: eax = g->eax; edx = g->edx; goto E_102da960;
    case 0x102da97cu: eax = g->eax; edx = g->edx; goto E_102da97c;
    case 0x102da980u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_102da980;
    case 0x102da982u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_102da982;
    case 0x102da98du: eax = g->eax; edx = g->edx; esi = g->esi; goto E_102da98d;
    case 0x102da995u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_102da995;
    default: break;
    }
#endif

    COW_AT(102da910)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x3fcu, in_ebx);
    wr32(sp0 - 0x400u, in_esi);
    wr32(sp0 - 0x404u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x404u;
    COW_RET(0x102da924u);
    t1 = cow_thiscall(g, COW_IMG(0x102e72fdu), sp0 - 0x10u, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(102da924)
    g->ebp = sp0 - 4u;
    g->edx = edx;
    g->esp = sp0 - 0x404u;
    COW_RET(0x102da92fu);
    cow_thiscall(g, COW_IMG(0x102ea7f9u), sp0 - 0x3f8u, 0);
    t3 = g->edx;
    edx = t3;
    COW_AT(102da92f)
    if (arg4 != 0u)
    {
    COW_AT(102da938)
        wr32(arg4, 0u);
    }
    COW_AT(102da93a)
    if (arg5 != 0u)
    {
    COW_AT(102da941)
        wr32(arg5, 0u);
    }
    COW_AT(102da943)
    if (arg6 != 0u)
    {
    COW_AT(102da94a)
        wr32(arg6, 0u);
    }
    COW_AT(102da94c)
    wr32(sp0 - 0x408u, 0u);
    wr32(sp0 - 0x40cu, 0u);
    wr32(sp0 - 0x410u, arg2);
    wr32(sp0 - 0x414u, arg1);
    g->eax = arg4;
    g->esp = sp0 - 0x404u;
    COW_RET(0x102da95cu);
    t4 = cow_fastcall(g, COW_IMG(0x102e7337u), sp0 - 0x10u, edx, 4, arg1, arg2, 0u, 0u);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    COW_AT(102da95c)
    if ((int32_t)eax < 0) goto L_102da980;
    COW_AT(102da960)
    wr32(sp0 - 0x408u, arg6);
    wr32(sp0 - 0x40cu, arg5);
    wr32(sp0 - 0x410u, arg4);
    wr32(sp0 - 0x414u, arg3);
    wr32(sp0 - 0x418u, 1u);
    wr32(sp0 - 0x41cu, 0u);
    t6 = rd32(sp0 - 8u);
    wr32(sp0 - 0x420u, t6);
    t7 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x424u, t7);
    g->ebp = sp0 - 4u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x404u;
    COW_RET(0x102da97cu);
    t8 = cow_thiscall(g, COW_IMG(0x102ecc67u), sp0 - 0x3f8u, 8, t7, t6, 0u, 1u, arg3, arg4, arg5, arg6);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    COW_AT(102da97c)
    if ((int32_t)eax >= 0)
    {
        esi = 0u;
        goto L_102da982;
    }
L_102da980: ;
    COW_AT(102da980)
    esi = eax;
L_102da982: ;
    COW_AT(102da982)
    g->ebp = sp0 - 4u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x404u;
    COW_RET(0x102da98du);
    t10 = cow_thiscall(g, COW_IMG(0x102ea8a2u), sp0 - 0x3f8u, 0);
    t11 = g->edx;
    eax = t10;
    edx = t11;
    COW_AT(102da98d)
    g->esp = sp0 - 0x404u;
    COW_RET(0x102da995u);
    cow_fastcall(g, COW_IMG(0x102e730au), sp0 - 0x10u, edx, 0);
    t12 = g->edx;
    edx = t12;
    COW_AT(102da995)
    g->ebx = rd32(sp0 - 0x3fcu);
    g->esi = rd32(sp0 - 0x400u);
    g->edi = rd32(sp0 - 0x404u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102da910(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102da924u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x404u);
        in_esi = rd32(sp0 - 0x400u);
        in_ebx = rd32(sp0 - 0x3fcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x404u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102da92fu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x404u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102da938u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t edx;
        edx = g->edx;
        g->esp = sp0 - 0x404u;
        g->eax = arg4;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102da93au:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t edx;
        edx = g->edx;
        g->esp = sp0 - 0x404u;
        g->eax = arg4;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102da941u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t edx;
        edx = g->edx;
        g->esp = sp0 - 0x404u;
        g->eax = arg4;
        g->ebx = arg5;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102da943u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t edx;
        edx = g->edx;
        g->esp = sp0 - 0x404u;
        g->eax = arg4;
        g->ebx = arg5;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102da94au:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t edx;
        edx = g->edx;
        g->esp = sp0 - 0x404u;
        g->eax = arg4;
        g->ebx = arg5;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x102da94cu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t edx;
        edx = g->edx;
        g->esp = sp0 - 0x404u;
        g->eax = arg4;
        g->ebx = arg5;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x102da95cu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x404u;
        g->ebx = arg5;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x102da960u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x404u;
        g->ebx = arg5;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x102da97cu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x404u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102da980u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x404u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102da982u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x404u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102da98du:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x404u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102da995u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x404u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102da910(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102da910(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
