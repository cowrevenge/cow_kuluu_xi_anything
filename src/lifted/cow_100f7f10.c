/* f_0x100f7f10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100f7f10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f7f19u: in_eax = g->eax; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f7f19;
    case 0x100f7f2du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f7f2d;
    case 0x100f7f56u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100f7f56;
    case 0x100f7f67u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100f7f67;
    case 0x100f7f77u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100f7f77;
    case 0x100f7f7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100f7f7b;
    case 0x100f7f8au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100f7f8a;
    case 0x100f7f8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f7f8f;
    default: break;
    }
#endif

    COW_AT(100f7f10)
    if (arg1 == 0u)
    {
        eax = in_eax;
        goto L_100f7f8f;
    }
    COW_AT(100f7f19)
    g->eax = in_eax;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100f7bc0u), 4, 0xcu, 0xffffffffu, 0xffffffffu, 0xffffffffu);
    if (t1 == 0u)
    {
        eax = t1;
        goto L_100f7f8f;
    }
    eax = t1;
    COW_AT(100f7f2d)
    wr32(eax + 0x10u, rd32(arg1));
    t2 = rd32(arg1 + 4u);
    wr32(eax + 0x14u, t2);
    t3 = rd32(arg1 + 8u);
    wr32(eax + 0x18u, t3);
    t4 = rd32(arg1 + 0xcu);
    wr32(eax + 0x1cu, t4);
    wr8(eax + 0x1fu, 0u);
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        edi = eax + 0x10u;
    COW_AT(100f7f67)
        eax = rd8(rd8(edi) * 2u + rd32(COW_IMG(0x103d0030u))) & 2u;
        ecx = rd8(edi);
        edx = rd32(COW_IMG(0x103d0030u));
    }
    else
    {
        ecx = eax + 0x10u;
        edx = t4;
        edi = eax + 0x10u;
    COW_AT(100f7f56)
        g->eax = rd8(edi);
        g->edx = edx;
        t5 = rd8(edi);
        g->esp = sp0 - 4u;
        t6 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, t5, 2u, in_edi);
        t7 = g->ecx;
        t8 = g->edx;
        eax = t6;
        ecx = t7;
        edx = t8;
    }
    COW_AT(100f7f77)
    if (eax != 0u)
    {
    COW_AT(100f7f7b)
        g->eax = rd8(edi);
        t9 = rd8(edi);
        g->esp = sp0 - 8u;
        t10 = cow_call_regs(g, COW_IMG(0x10313bb4u), g->eax, ecx, edx, 1, 1, t9);
        wr8(edi, (uint8_t)t10);
        eax = t10;
    }
    COW_AT(100f7f8a)
    g->esi = in_esi;
    g->edi = in_edi;
    return (eax & 0xffffff00u) | 1u;
L_100f7f8f: ;
    COW_AT(100f7f8f)
    g->esi = in_esi;
    g->edi = in_edi;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f7f10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f7f19u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_eax;
        uint32_t in_edi;
        uint32_t in_esi;
        in_eax = g->eax;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f7f2du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f7f56u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f7f67u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f7f77u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f7f7bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f7f8au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f7f8fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100f7f10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f7f10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
