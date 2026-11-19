/* f_0x10319c9b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=7 */
uint32_t cow_fn_10319c9b(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_2c;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg7 = rd32(sp0 + 0x1cu);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 56u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10319cb4u: self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); goto E_10319cb4;
    case 0x10319cc0u: self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); goto E_10319cc0;
    case 0x10319cd4u: self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_10319cd4;
    case 0x10319cd9u: self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_10319cd9;
    case 0x10319cdau: self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_10319cda;
    case 0x10319d2du: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_10319d2d;
    case 0x10319d33u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_10319d33;
    case 0x10319d3cu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_10319d3c;
    case 0x10319d4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_10319d4d;
    case 0x10319d53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_10319d53;
    case 0x10319d57u: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); goto E_10319d57;
    case 0x10319d5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_4 = rd32(sp0 - 4u); goto E_10319d5a;
    default: break;
    }
#endif

    COW_AT(10319c9b)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x2cu, in_ebx);
    if ((int32_t)(rd32(sp0 + 4u) - 0x76cu) < 70) goto L_10319d57;
    ebx = rd32(sp0 + 4u) - 0x76cu;
    COW_AT(10319cb4)
    if ((int32_t)ebx > 138) goto L_10319d57;
    COW_AT(10319cc0)
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    if ((ebx & 3u) != 0u)
    {
        esi = arg3 + rd32(COW_IMG(0x103d37d8u) + arg2 * 4u);
    }
    else
    {
        esi = arg3 + rd32(COW_IMG(0x103d37d8u) + arg2 * 4u);
    COW_AT(10319cd4)
        if ((int32_t)arg2 > 2)
        {
    COW_AT(10319cd9)
            esi = esi + 1u;
        }
    }
    COW_AT(10319cda)
    g->ebx = ebx;
    g->esp = sp0 - 0x34u;
    cow_fastcall(g, COW_IMG(0x1031ffb9u), self, in_edx, 0);
    wr32(sp0 - 0xcu, esi);
    wr32(sp0 - 0x14u, ebx);
    wr32(sp0 - 0x20u, arg4);
    wr32(sp0 - 0x18u, arg2 - 1u);
    t1 = (arg4 * 0x3cu + ebx * 0x80520u + esi * 0x5a0u + (uint32_t)((int32_t)(ebx - 1u) >> 2u) * 0x5a0u + arg5) * 0x3cu + rd32(COW_IMG(0x103d2d50u)) + arg6 + 0x7c558180u;
    wr32(sp0 + 4u, t1);
    if (arg7 == 1u)
    {
        ecx = t1;
        edx = arg6;
        goto L_10319d4d;
    }
    ecx = t1;
    COW_AT(10319d2d)
    if (arg7 != 0xffffffffu)
    {
        edx = arg6;
        goto L_10319d53;
    }
    COW_AT(10319d33)
    if (rd32(COW_IMG(0x103d2d54u)) == 0u)
    {
        edx = arg6;
        goto L_10319d53;
    }
    COW_AT(10319d3c)
    wr32(sp0 - 0x30u, sp0 - 0x28u);
    g->ebx = ebx;
    g->eax = sp0 - 0x28u;
    g->esp = sp0 - 0x2cu;
    t2 = cow_call_regs(g, COW_IMG(0x10320284u), g->eax, ecx, arg6, 1, 1, sp0 - 0x28u);
    t3 = g->edx;
    if (t2 == 0u)
    {
        ecx = rd32(sp0 + 4u);
        edx = t3;
        goto L_10319d53;
    }
    ecx = rd32(sp0 + 4u);
    edx = t3;
L_10319d4d: ;
    COW_AT(10319d4d)
    ecx = ecx + rd32(COW_IMG(0x103d2d58u));
L_10319d53: ;
    COW_AT(10319d53)
    eax = ecx;
    loc_4 = rd32(sp0 - 4u);
    loc_2c = rd32(sp0 - 0x2cu);
L_10319d5a: ;
    COW_AT(10319d5a)
    g->ebx = loc_2c;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_10319d57: ;
    COW_AT(10319d57)
    eax = 0xffffffffu;
    edx = in_edx;
    loc_4 = in_ebp;
    loc_2c = in_ebx;
    goto L_10319d5a;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10319c9b(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10319cb4u:
    {
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319cc0u:
    {
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319cd4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10319cd9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10319cdau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10319d2du:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->edx = arg6;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319d33u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->edx = arg6;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319d3cu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->edx = arg6;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319d4du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319d53u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319d57u:
    {
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319d5au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2c;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10319c9b(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10319c9b(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
