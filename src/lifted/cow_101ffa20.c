/* f_0x101ffa20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101ffa20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101ffa29u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_101ffa29;
    case 0x101ffa39u: eax = g->eax; self = g->ecx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_101ffa39;
    case 0x101ffaa3u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_101ffaa3;
    case 0x101ffaaau: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_101ffaaa;
    default: break;
    }
#endif

    COW_AT(101ffa20)
    if (rd8(COW_IMG(0x10663ac8u)) == 0u) goto L_101ffa39;
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10663ac8u));
    COW_AT(101ffa29)
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x7au);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_101ffa39: ;
    COW_AT(101ffa39)
    esi = arg1;
    edi = self + 0x184u;
    ecx = 0x12u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t1 = rd32(rd32(COW_IMG(0x103601bcu)) + 0x80u);
    g->eax = t1;
    t2 = rd32(arg1 + 0x18u);
    g->esp = sp0 - 0x18u;
    t3 = cow_stdcall(g, COW_IMG(0x100db780u), 1, t1);
    t4 = ((uint32_t)(uint8_t)t3 << 8u | (t2 & 0xf0000u)) << 8u | (uint16_t)t2;
    t5 = rd32(arg1 + 0x14u);
    g->eax = t5;
    g->esp = sp0 - 0xcu;
    t6 = cow_cdecl(g, COW_IMG(0x100f7680u), 5, t5, t4, 0u, COW_IMG(0x101ffab0u), (uint8_t)arg2);
    if (t6 == 0u)
    {
    COW_AT(101ffaa3)
        wr8(COW_IMG(0x10663ac8u), 1u);
    }
    COW_AT(101ffaaa)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101ffa20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101ffa29u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ffa39u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ffaa3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ffaaau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101ffa20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101ffa20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
