/* f_0x103232f9 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_103232f9(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 144u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1032331du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_1032331d;
    case 0x1032332cu: eax = g->eax; edx = g->edx; in_esi = g->esi; goto E_1032332c;
    case 0x10323332u: eax = g->eax; edx = g->edx; in_esi = g->esi; goto E_10323332;
    case 0x10323352u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; loc_4 = rd32(sp0 - 4u); goto E_10323352;
    case 0x10323356u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_10323356;
    default: break;
    }
#endif

    COW_AT(103232f9)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x80u, 0x78u);
    wr32(sp0 - 0x84u, sp0 - 0x7cu);
    wr32(sp0 - 0x88u, 1u);
    t1 = (uint8_t)arg1 | ((arg1 & 0x3ffu) >> 8u | 4u) << 8u;
    wr32(sp0 - 0x8cu, t1);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0x7cu;
    t2 = cow_thiscall(g, rd32(COW_IMG(0x109b2a3cu)), self, 4, t1, 1u, sp0 - 0x7cu, 0x78u);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0u)
    {
        loc_4 = in_ebp;
        goto L_10323352;
    }
    ecx = t3;
    edx = t4;
    COW_AT(1032331d)
    wr32(sp0 - 0x80u, sp0 - 0x7cu);
    g->eax = sp0 - 0x7cu;
    g->edx = edx;
    g->esp = sp0 - 0x7cu;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x10323477u), ecx, 1, sp0 - 0x7cu);
    t6 = g->edx;
    if (arg1 == t5) goto L_10323356;
    eax = t5;
    edx = t6;
    COW_AT(1032332c)
    if (arg2 == 0u) goto L_10323356;
    COW_AT(10323332)
    wr32(sp0 - 0x80u, in_esi);
    wr32(sp0 - 0x84u, rd32(COW_IMG(0x109b2a2cu)));
    g->eax = eax;
    g->edx = edx;
    t7 = rd32(COW_IMG(0x109b2a2cu));
    g->esp = sp0 - 0x80u;
    t8 = cow_thiscall_cdecl(g, COW_IMG(0x103234b0u), sp0 - 0x7cu, 1, t7);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x88u, rd32(COW_IMG(0x109b2a2cu)));
    t11 = rd32(COW_IMG(0x109b2a2cu));
    g->esp = sp0 - 0x84u;
    t12 = cow_call_regs(g, COW_IMG(0x10317480u), t8, g->ecx, g->edx, 1, 1, t11);
    if (t8 != t12) goto L_10323356;
    loc_4 = rd32(sp0 - 4u);
L_10323352: ;
    COW_AT(10323352)
    g->esi = in_esi;
    g->ebp = loc_4;
    return 0u;
L_10323356: ;
    COW_AT(10323356)
    wr32(sp0 - 0x80u, 1u);
    g->esi = in_esi;
    g->ebp = rd32(sp0 - 4u);
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_103232f9(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1032331du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x84u, sp0 - 0x7cu);
        (void)sp0;
        return 1;
    }
    case 0x1032332cu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x7cu;
        g->ecx = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x84u, sp0 - 0x7cu);
        wr32(sp0 - 0x80u, sp0 - 0x7cu);
        (void)sp0;
        return 1;
    }
    case 0x10323332u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x7cu;
        g->ecx = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x84u, sp0 - 0x7cu);
        wr32(sp0 - 0x80u, sp0 - 0x7cu);
        (void)sp0;
        return 1;
    }
    case 0x10323352u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10323356u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_103232f9(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_103232f9(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
