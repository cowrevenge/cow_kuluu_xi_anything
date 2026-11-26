/* f_0x102da99e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_102da99e(Guest* g)
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
    case 0x102da9b2u: eax = g->eax; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x404u); in_esi = rd32(sp0 - 0x400u); in_ebx = rd32(sp0 - 0x3fcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x3fcu); g->edi = rd32(sp0 - 0x404u); g->esi = rd32(sp0 - 0x400u); goto E_102da9b2;
    case 0x102da9bdu: eax = g->eax; edx = g->edx; esi = g->esi; goto E_102da9bd;
    case 0x102da9c6u: edx = g->edx; goto E_102da9c6;
    case 0x102da9c8u: edx = g->edx; goto E_102da9c8;
    case 0x102da9cfu: edx = g->edx; goto E_102da9cf;
    case 0x102da9d1u: edx = g->edx; goto E_102da9d1;
    case 0x102da9d8u: edx = g->edx; goto E_102da9d8;
    case 0x102da9dau: edx = g->edx; goto E_102da9da;
    case 0x102da9ebu: eax = g->eax; edx = g->edx; goto E_102da9eb;
    case 0x102da9efu: eax = g->eax; edx = g->edx; goto E_102da9ef;
    case 0x102daa0bu: eax = g->eax; edx = g->edx; goto E_102daa0b;
    case 0x102daa0fu: eax = g->eax; edx = g->edx; esi = g->esi; goto E_102daa0f;
    case 0x102daa11u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_102daa11;
    case 0x102daa1cu: eax = g->eax; edx = g->edx; esi = g->esi; goto E_102daa1c;
    case 0x102daa24u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_102daa24;
    default: break;
    }
#endif

    COW_AT(102da99e)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x3fcu, in_ebx);
    wr32(sp0 - 0x400u, in_esi);
    wr32(sp0 - 0x404u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x404u;
    COW_RET(0x102da9b2u);
    t1 = cow_thiscall(g, COW_IMG(0x102e72fdu), sp0 - 0x10u, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(102da9b2)
    g->ebp = sp0 - 4u;
    g->edx = edx;
    g->esp = sp0 - 0x404u;
    COW_RET(0x102da9bdu);
    cow_thiscall(g, COW_IMG(0x102ea7f9u), sp0 - 0x3f8u, 0);
    t3 = g->edx;
    edx = t3;
    COW_AT(102da9bd)
    if (arg4 != 0u)
    {
    COW_AT(102da9c6)
        wr32(arg4, 0u);
    }
    COW_AT(102da9c8)
    if (arg5 != 0u)
    {
    COW_AT(102da9cf)
        wr32(arg5, 0u);
    }
    COW_AT(102da9d1)
    if (arg6 != 0u)
    {
    COW_AT(102da9d8)
        wr32(arg6, 0u);
    }
    COW_AT(102da9da)
    wr32(sp0 - 0x408u, 1u);
    wr32(sp0 - 0x40cu, 0u);
    wr32(sp0 - 0x410u, arg2);
    wr32(sp0 - 0x414u, arg1);
    g->eax = arg4;
    g->esp = sp0 - 0x404u;
    COW_RET(0x102da9ebu);
    t4 = cow_fastcall(g, COW_IMG(0x102e7337u), sp0 - 0x10u, edx, 4, arg1, arg2, 0u, 1u);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    COW_AT(102da9eb)
    if ((int32_t)eax < 0) goto L_102daa0f;
    COW_AT(102da9ef)
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
    COW_RET(0x102daa0bu);
    t8 = cow_thiscall(g, COW_IMG(0x102ecc67u), sp0 - 0x3f8u, 8, t7, t6, 0u, 1u, arg3, arg4, arg5, arg6);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    COW_AT(102daa0b)
    if ((int32_t)eax >= 0)
    {
        esi = 0u;
        goto L_102daa11;
    }
L_102daa0f: ;
    COW_AT(102daa0f)
    esi = eax;
L_102daa11: ;
    COW_AT(102daa11)
    g->ebp = sp0 - 4u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x404u;
    COW_RET(0x102daa1cu);
    t10 = cow_thiscall(g, COW_IMG(0x102ea8a2u), sp0 - 0x3f8u, 0);
    t11 = g->edx;
    eax = t10;
    edx = t11;
    COW_AT(102daa1c)
    g->esp = sp0 - 0x404u;
    COW_RET(0x102daa24u);
    cow_fastcall(g, COW_IMG(0x102e730au), sp0 - 0x10u, edx, 0);
    t12 = g->edx;
    edx = t12;
    COW_AT(102daa24)
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
int cow_entry_fix_102da99e(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102da9b2u:
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
    case 0x102da9bdu:
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
    case 0x102da9c6u:
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
    case 0x102da9c8u:
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
    case 0x102da9cfu:
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
    case 0x102da9d1u:
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
    case 0x102da9d8u:
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
    case 0x102da9dau:
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
    case 0x102da9ebu:
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
    case 0x102da9efu:
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
    case 0x102daa0bu:
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
    case 0x102daa0fu:
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
    case 0x102daa11u:
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
    case 0x102daa1cu:
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
    case 0x102daa24u:
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
void cow_adapter_102da99e(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102da99e(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
