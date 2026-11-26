/* f_0x102da7bb - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_102da7bb(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 1068u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102da7cfu: eax = g->eax; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x408u); in_esi = rd32(sp0 - 0x404u); in_ebx = rd32(sp0 - 0x400u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x400u); g->edi = rd32(sp0 - 0x408u); g->esi = rd32(sp0 - 0x404u); goto E_102da7cf;
    case 0x102da7dau: eax = g->eax; edx = g->edx; edi = g->edi; goto E_102da7da;
    case 0x102da7e3u: edx = g->edx; goto E_102da7e3;
    case 0x102da7e5u: edx = g->edx; goto E_102da7e5;
    case 0x102da7ecu: edx = g->edx; goto E_102da7ec;
    case 0x102da7eeu: edx = g->edx; goto E_102da7ee;
    case 0x102da7f5u: edx = g->edx; goto E_102da7f5;
    case 0x102da7f7u: edx = g->edx; goto E_102da7f7;
    case 0x102da803u: eax = g->eax; edx = g->edx; goto E_102da803;
    case 0x102da807u: eax = g->eax; edx = g->edx; goto E_102da807;
    case 0x102da825u: eax = g->eax; edx = g->edx; goto E_102da825;
    case 0x102da829u: eax = g->eax; edx = g->edx; edi = g->edi; goto E_102da829;
    case 0x102da82bu: eax = g->eax; edx = g->edx; edi = g->edi; goto E_102da82b;
    case 0x102da836u: eax = g->eax; edx = g->edx; edi = g->edi; goto E_102da836;
    case 0x102da83eu: eax = g->eax; edx = g->edx; edi = g->edi; goto E_102da83e;
    default: break;
    }
#endif

    COW_AT(102da7bb)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x400u, in_ebx);
    wr32(sp0 - 0x404u, in_esi);
    wr32(sp0 - 0x408u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x408u;
    COW_RET(0x102da7cfu);
    t1 = cow_thiscall(g, COW_IMG(0x102e70c5u), sp0 - 0x14u, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(102da7cf)
    g->ebp = sp0 - 4u;
    g->edx = edx;
    g->esp = sp0 - 0x408u;
    COW_RET(0x102da7dau);
    cow_thiscall(g, COW_IMG(0x102ea7f9u), sp0 - 0x3fcu, 0);
    t3 = g->edx;
    edx = t3;
    COW_AT(102da7da)
    if (arg3 != 0u)
    {
    COW_AT(102da7e3)
        wr32(arg3, 0u);
    }
    COW_AT(102da7e5)
    if (arg4 != 0u)
    {
    COW_AT(102da7ec)
        wr32(arg4, 0u);
    }
    COW_AT(102da7ee)
    if (arg5 != 0u)
    {
    COW_AT(102da7f5)
        wr32(arg5, 0u);
    }
    COW_AT(102da7f7)
    wr32(sp0 - 0x40cu, 0u);
    wr32(sp0 - 0x410u, arg1);
    g->eax = arg3;
    g->esp = sp0 - 0x408u;
    COW_RET(0x102da803u);
    t4 = cow_fastcall(g, COW_IMG(0x102e70d7u), sp0 - 0x14u, edx, 2, arg1, 0u);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    COW_AT(102da803)
    if ((int32_t)eax < 0) goto L_102da829;
    COW_AT(102da807)
    wr32(sp0 - 0x40cu, arg5);
    wr32(sp0 - 0x410u, arg4);
    wr32(sp0 - 0x414u, arg3);
    wr32(sp0 - 0x418u, arg2);
    wr32(sp0 - 0x41cu, 1u);
    wr32(sp0 - 0x420u, arg1);
    t6 = rd32(sp0 - 8u);
    wr32(sp0 - 0x424u, t6);
    t7 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x428u, t7);
    g->ebp = sp0 - 4u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x408u;
    COW_RET(0x102da825u);
    t8 = cow_thiscall(g, COW_IMG(0x102ecc67u), sp0 - 0x3fcu, 8, t7, t6, arg1, 1u, arg2, arg3, arg4, arg5);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    COW_AT(102da825)
    if ((int32_t)eax >= 0)
    {
        edi = 0u;
        goto L_102da82b;
    }
L_102da829: ;
    COW_AT(102da829)
    edi = eax;
L_102da82b: ;
    COW_AT(102da82b)
    g->ebp = sp0 - 4u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x408u;
    COW_RET(0x102da836u);
    t10 = cow_thiscall(g, COW_IMG(0x102ea8a2u), sp0 - 0x3fcu, 0);
    t11 = g->edx;
    eax = t10;
    edx = t11;
    COW_AT(102da836)
    g->esp = sp0 - 0x408u;
    COW_RET(0x102da83eu);
    cow_fastcall(g, COW_IMG(0x102e72f2u), sp0 - 0x14u, edx, 0);
    COW_AT(102da83e)
    g->ebx = rd32(sp0 - 0x400u);
    g->esi = rd32(sp0 - 0x404u);
    g->edi = rd32(sp0 - 0x408u);
    g->ebp = rd32(sp0 - 4u);
    return edi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102da7bb(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102da7cfu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x408u);
        in_esi = rd32(sp0 - 0x404u);
        in_ebx = rd32(sp0 - 0x400u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x408u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102da7dau:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x408u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102da7e3u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t edx;
        edx = g->edx;
        g->esp = sp0 - 0x408u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102da7e5u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t edx;
        edx = g->edx;
        g->esp = sp0 - 0x408u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102da7ecu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t edx;
        edx = g->edx;
        g->esp = sp0 - 0x408u;
        g->eax = arg3;
        g->ebx = arg4;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102da7eeu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t edx;
        edx = g->edx;
        g->esp = sp0 - 0x408u;
        g->eax = arg3;
        g->ebx = arg4;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102da7f5u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t edx;
        edx = g->edx;
        g->esp = sp0 - 0x408u;
        g->eax = arg3;
        g->ebx = arg4;
        g->ebp = sp0 - 4u;
        g->esi = arg5;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102da7f7u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t edx;
        edx = g->edx;
        g->esp = sp0 - 0x408u;
        g->eax = arg3;
        g->ebx = arg4;
        g->ebp = sp0 - 4u;
        g->esi = arg5;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102da803u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x408u;
        g->ebx = arg4;
        g->ebp = sp0 - 4u;
        g->esi = arg5;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102da807u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x408u;
        g->ebx = arg4;
        g->ebp = sp0 - 4u;
        g->esi = arg5;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102da825u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x408u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102da829u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x408u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102da82bu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x408u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102da836u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x408u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102da83eu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x408u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102da7bb(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102da7bb(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
