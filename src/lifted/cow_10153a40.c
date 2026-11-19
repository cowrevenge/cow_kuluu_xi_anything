/* f_0x10153a40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_10153a40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 168u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10153a67u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x8cu); in_esi = rd32(sp0 - 0x88u); in_ebx = rd32(sp0 - 0x84u); g->ebx = rd32(sp0 - 0x84u); g->edi = rd32(sp0 - 0x8cu); g->esi = rd32(sp0 - 0x88u); goto E_10153a67;
    case 0x10153a7bu: eax = g->eax; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x8cu); in_esi = rd32(sp0 - 0x88u); in_ebx = rd32(sp0 - 0x84u); g->ebx = rd32(sp0 - 0x84u); g->edi = rd32(sp0 - 0x8cu); g->esi = rd32(sp0 - 0x88u); goto E_10153a7b;
    case 0x10153a89u: eax = g->eax; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x8cu); in_esi = rd32(sp0 - 0x88u); in_ebx = rd32(sp0 - 0x84u); g->ebx = rd32(sp0 - 0x84u); g->edi = rd32(sp0 - 0x8cu); g->esi = rd32(sp0 - 0x88u); goto E_10153a89;
    case 0x10153aa3u: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10153aa3;
    case 0x10153aa6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10153aa6;
    case 0x10153ab5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10153ab5;
    case 0x10153ae3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x8cu); in_esi = rd32(sp0 - 0x88u); in_ebx = rd32(sp0 - 0x84u); g->ebx = rd32(sp0 - 0x84u); g->edi = rd32(sp0 - 0x8cu); g->esi = rd32(sp0 - 0x88u); goto E_10153ae3;
    default: break;
    }
#endif

    COW_AT(10153a40)
    wr32(sp0 - 0x84u, in_ebx);
    wr32(sp0 - 0x88u, in_esi);
    wr32(sp0 - 0x8cu, in_edi);
    wr32(sp0 - 0x90u, arg4);
    wr32(sp0 - 0x94u, arg3);
    g->edx = in_edx;
    g->esp = sp0 - 0x8cu;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, arg3, arg4);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        goto L_10153ae3;
    }
    edx = t2;
    COW_AT(10153a67)
    if ((int32_t)arg5 <= 0)
    {
        esi = arg6;
        goto L_10153a89;
    }
    eax = 0u;
    esi = arg6;
L_10153a7b: ;
    COW_AT(10153a7b)
    t3 = rd32(esi);
    wr32(eax * 4u + sp0 - 0x40u, t3);
    if ((int32_t)(eax + 1u) < (int32_t)arg5)
    {
        eax = eax + 1u;
        esi = esi + 4u;
        goto L_10153a7b;
    }
    edx = t3;
    esi = esi + 4u;
L_10153a89: ;
    COW_AT(10153a89)
    wr32(sp0 - 0x90u, arg4);
    t4 = rd32(COW_IMG(0x10578548u) + arg3 * 4u);
    wr32(sp0 - 0x94u, t4);
    g->eax = t4;
    g->esp = sp0 - 0x8cu;
    t5 = cow_cdecl(g, COW_IMG(0x10153100u), 2, t4, arg4);
    if ((int16_t)t5 > 0)
    {
        edx = (uint32_t)(int16_t)t5;
    COW_AT(10153aa3)
        eax = 0u;
        ecx = esi - 4u;
L_10153aa6: ;
    COW_AT(10153aa6)
        t6 = rd32(ecx + 4u);
        wr32(eax * 4u + sp0 - 0x80u, t6);
        if ((int32_t)(eax + 1u) < (int32_t)edx)
        {
            eax = eax + 1u;
            ecx = ecx + 4u;
            goto L_10153aa6;
        }
    }
    COW_AT(10153ab5)
    wr32(sp0 - 0x90u, sp0 - 0x80u);
    wr32(sp0 - 0x94u, sp0 - 0x40u);
    wr32(sp0 - 0x98u, arg4);
    wr32(sp0 - 0x9cu, arg3);
    wr32(sp0 - 0xa0u, arg2);
    wr32(sp0 - 0xa4u, arg1);
    g->eax = arg2;
    g->edx = sp0 - 0x40u;
    g->esp = sp0 - 0x8cu;
    t7 = cow_cdecl(g, COW_IMG(0x10153310u), 6, arg1, arg2, arg3, arg4, sp0 - 0x40u, sp0 - 0x80u);
    t8 = g->edx;
    g->ebx = rd32(sp0 - 0x84u);
    g->esi = rd32(sp0 - 0x88u);
    g->edi = rd32(sp0 - 0x8cu);
    g->edx = t8;
    return t7;
L_10153ae3: ;
    COW_AT(10153ae3)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10153a40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10153a67u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x8cu);
        in_esi = rd32(sp0 - 0x88u);
        in_ebx = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x8cu;
        g->ebx = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10153a7bu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x8cu);
        in_esi = rd32(sp0 - 0x88u);
        in_ebx = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x8cu;
        g->ecx = arg5;
        g->ebx = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10153a89u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x8cu);
        in_esi = rd32(sp0 - 0x88u);
        in_ebx = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x8cu;
        g->ecx = arg5;
        g->ebx = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10153aa3u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x8cu;
        g->eax = 0u;
        g->ebx = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10153aa6u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x8cu;
        g->ebx = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10153ab5u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x8cu;
        g->ebx = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10153ae3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x8cu);
        in_esi = rd32(sp0 - 0x88u);
        in_ebx = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x8cu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10153a40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10153a40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
