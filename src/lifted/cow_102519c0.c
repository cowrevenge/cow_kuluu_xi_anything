/* f_0x102519c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_102519c0(Guest* g)
{
    double d4;
    double d5;
    double d6;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 40u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102519ceu: eax = g->eax; ecx = g->ecx; goto E_102519ce;
    case 0x102519edu: eax = g->eax; ecx = g->ecx; goto E_102519ed;
    case 0x102519f8u: eax = g->eax; ecx = g->ecx; goto E_102519f8;
    case 0x10251a00u: eax = g->eax; ecx = g->ecx; goto E_10251a00;
    case 0x10251a07u: eax = g->eax; ecx = g->ecx; goto E_10251a07;
    case 0x10251a0fu: eax = g->eax; ecx = g->ecx; goto E_10251a0f;
    case 0x10251a20u: eax = g->eax; ecx = g->ecx; goto E_10251a20;
    case 0x10251a33u: eax = g->eax; ecx = g->ecx; goto E_10251a33;
    case 0x10251a7du: eax = g->eax; ecx = g->ecx; goto E_10251a7d;
    case 0x10251a8au: eax = g->eax; ecx = g->ecx; goto E_10251a8a;
    case 0x10251a92u: eax = g->eax; ecx = g->ecx; goto E_10251a92;
    default: break;
    }
#endif

    COW_AT(102519c0)
    if ((rd8(self + 4u) & 2u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 4u);
        goto L_10251a92;
    }
    COW_AT(102519ce)
    wr32(sp0 - 0x14u, sp0 - 0x10u);
    wr32(sp0 - 0x18u, sp0 + 8u);
    t1 = rd32(sp0 + 8u) - 1u;
    wr32(sp0 - 0x1cu, t1);
    wr32(sp0 - 0x20u, arg1);
    wr32(sp0 - 0x24u, COW_IMG(0x10669158u));
    g->eax = arg1;
    g->esp = sp0 - 0x10u;
    t2 = cow_cdecl(g, COW_IMG(0x10250c40u), 5, COW_IMG(0x10669158u), arg1, t1, sp0 + 8u, sp0 - 0x10u);
    eax = t2;
    COW_AT(102519ed)
    if (eax != 0u) goto L_10251a92;
    COW_AT(102519f8)
    if (rd32(sp0 + 0xcu) == 0u)
    {
        eax = rd32(sp0 + 0xcu);
    }
    else
    {
        eax = rd32(sp0 + 0xcu);
    COW_AT(10251a00)
        t3 = rd32(sp0 + 8u) + 1u;
        wr32(eax, t3);
    }
    COW_AT(10251a07)
    if (rd32(sp0 + 0x10u) == 0u) goto L_10251a8a;
    ecx = rd32(sp0 + 0x10u);
    COW_AT(10251a0f)
    d4 = (double)rdf32(sp0 - 8u);
    if (d4 < (double)rdf32(COW_IMG(0x103295d8u))) goto L_10251a7d;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10251a20)
    d5 = (double)rdf32(sp0 - 8u);
    if ((cow_fsw(g, d5, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u) == 0u) goto L_10251a7d;
    COW_AT(10251a33)
    d6 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x10u) / (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x750u)) + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(COW_IMG(0x1032a344u)));
    wrf32(ecx, (float)d6);
    d7 = fr(g, (double)rdf32(COW_IMG(0x10335314u)) - fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xcu) / (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x750u)) + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(COW_IMG(0x1033cddcu))));
    wrf32(ecx + 4u, (float)d7);
    return 0u;
L_10251a7d: ;
    COW_AT(10251a7d)
    wr32(ecx, 0xbf800000u);
    wr32(ecx + 4u, 0xbf800000u);
L_10251a8a: ;
    COW_AT(10251a8a)
    return 0u;
L_10251a92: ;
    COW_AT(10251a92)
    return 0xffffffffu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102519c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102519ceu:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102519edu:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x18u, sp0 + 8u);
        wr32(sp0 - 0x14u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102519f8u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x18u, sp0 + 8u);
        wr32(sp0 - 0x14u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10251a00u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x18u, sp0 + 8u);
        wr32(sp0 - 0x14u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10251a07u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x18u, sp0 + 8u);
        wr32(sp0 - 0x14u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10251a0fu:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x18u, sp0 + 8u);
        wr32(sp0 - 0x14u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10251a20u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x18u, sp0 + 8u);
        wr32(sp0 - 0x14u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10251a33u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x18u, sp0 + 8u);
        wr32(sp0 - 0x14u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10251a7du:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x18u, sp0 + 8u);
        wr32(sp0 - 0x14u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10251a8au:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x18u, sp0 + 8u);
        wr32(sp0 - 0x14u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10251a92u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102519c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102519c0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
