/* f_0x10151ad0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10151ad0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 232u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10151ae4u: eax = g->eax; ecx = g->ecx; in_edi = g->edi; in_esi = rd32(sp0 - 0xd8u); g->esi = rd32(sp0 - 0xd8u); goto E_10151ae4;
    case 0x10151afeu: ecx = g->ecx; in_edi = g->edi; in_esi = rd32(sp0 - 0xd8u); g->esi = rd32(sp0 - 0xd8u); goto E_10151afe;
    case 0x10151b0bu: eax = g->eax; ecx = g->ecx; in_edi = g->edi; in_esi = rd32(sp0 - 0xd8u); g->esi = rd32(sp0 - 0xd8u); goto E_10151b0b;
    case 0x10151b13u: eax = g->eax; ecx = g->ecx; in_edi = g->edi; in_esi = rd32(sp0 - 0xd8u); g->esi = rd32(sp0 - 0xd8u); goto E_10151b13;
    case 0x10151b2du: in_eax = g->eax; ecx = g->ecx; in_edi = g->edi; in_esi = rd32(sp0 - 0xd8u); g->esi = rd32(sp0 - 0xd8u); goto E_10151b2d;
    default: break;
    }
#endif

    COW_AT(10151ad0)
    wr32(sp0 - 0xd8u, in_esi);
    if (arg1 == 0u) goto L_10151b2d;
    COW_AT(10151ae4)
    wr32(sp0 - 0xdcu, in_edi);
    edi = sp0 - 0xd4u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (arg2 == 0u)
    {
    COW_AT(10151b0b)
        wr32(sp0 - 0xd4u, 0u);
        wr32(sp0 - 0xd0u, 0u);
    }
    else
    {
    COW_AT(10151afe)
        t1 = rd32(arg2 + 4u);
        wr32(sp0 - 0xd4u, t1);
        wr32(sp0 - 0xd0u, t1);
    }
    COW_AT(10151b13)
    wr16(sp0 - 0xccu, (uint16_t)arg1);
    wr32(sp0 - 0xdcu, sp0 - 0xd4u);
    g->esp = sp0 - 0xd8u;
    cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0xd4u);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_10151b2d: ;
    COW_AT(10151b2d)
    wr32(sp0 - 0xdcu, arg3);
    wr32(sp0 - 0xe0u, 0x14u);
    wr32(sp0 - 0xe4u, 0xau);
    g->eax = in_eax;
    g->ecx = arg3;
    g->esp = sp0 - 0xdcu;
    t2 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x14u);
    t3 = g->ecx;
    wr32(sp0 - 0xe0u, t2);
    wr32(sp0 - 0xe4u, sp0 - 0x80u);
    g->edx = sp0 - 0x80u;
    g->esp = sp0 - 0xd0u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, t2, arg3, in_esi, rd32(sp0 - 0xd4u));
    t4 = g->edx;
    wr32(sp0 - 0xdcu, sp0 - 0x80u);
    g->esp = sp0 - 0xd8u;
    cow_thiscall(g, COW_IMG(0x10129e80u), rd32(COW_IMG(0x10578158u)), 1, sp0 - 0x80u);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10151ad0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10151ae4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xd8u);
        g->esp = sp0 - 0xd8u;
        g->edx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10151afeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xd8u);
        g->esp = sp0 - 0xd8u;
        g->eax = arg2;
        g->edx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10151b0bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xd8u);
        g->esp = sp0 - 0xd8u;
        g->edx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10151b13u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xd8u);
        g->esp = sp0 - 0xd8u;
        g->edx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10151b2du:
    {
        uint32_t ecx;
        uint32_t in_eax;
        uint32_t in_edi;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xd8u);
        g->esp = sp0 - 0xd8u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10151ad0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10151ad0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
