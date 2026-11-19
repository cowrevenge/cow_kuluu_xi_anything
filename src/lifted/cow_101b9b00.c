/* f_0x101b9b00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_101b9b00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101b9b16u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_101b9b16;
    case 0x101b9b24u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_101b9b24;
    case 0x101b9b2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_101b9b2e;
    case 0x101b9b4au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_101b9b4a;
    case 0x101b9b6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101b9b6b;
    case 0x101b9b76u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101b9b76;
    case 0x101b9ba7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_101b9ba7;
    default: break;
    }
#endif

    COW_AT(101b9b00)
    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    if (rd32(self + 0x114u) != 0u)
    {
        eax = rd32(self + 0x114u);
        edx = in_edx;
        loc_1c = in_ebx;
        loc_20 = in_esi;
        loc_24 = in_edi;
        goto L_101b9ba7;
    }
    COW_AT(101b9b16)
    if (rd32(self + 0x110u) != 0u)
    {
        eax = rd32(self + 0x110u);
        edx = in_edx;
        loc_1c = in_ebx;
        loc_20 = in_esi;
        loc_24 = in_edi;
        goto L_101b9ba7;
    }
    eax = rd32(self + 0x110u);
    COW_AT(101b9b24)
    if (rd8(self + 0x11cu) == 0u)
    {
        edx = in_edx;
    }
    else
    {
    COW_AT(101b9b2e)
        t1 = rd32(self + 0x10cu);
        t2 = rd32(self + 0x108u);
        edi = t2;
        eax = 0u;
        ecx = t1 >> 2u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t1 & 3u;
        while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        edx = t1;
    }
    COW_AT(101b9b4a)
    wr32(sp0 - 0x28u, arg2);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0x18u);
    wr32(sp0 - 0x34u, sp0 - 0x18u);
    wr32(sp0 - 0x38u, self + 8u);
    g->eax = sp0 - 0x18u;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t3 = cow_thiscall(g, COW_IMG(0x101c4790u), rd32(COW_IMG(0x10662dccu)), 5, self + 8u, sp0 - 0x18u, 0x18u, 0u, arg2);
    t4 = g->edx;
    if ((int32_t)t3 < 0)
    {
        eax = t3;
        edx = t4;
        loc_1c = in_ebx;
        loc_20 = in_esi;
        loc_24 = in_edi;
        goto L_101b9ba7;
    }
    edx = t4;
    COW_AT(101b9b6b)
    if (rd32(sp0 - 0x18u) != rd32(self + 4u))
    {
        eax = rd32(self + 4u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        goto L_101b9ba7;
    }
    COW_AT(101b9b76)
    wr32(sp0 - 0x28u, arg2);
    wr32(sp0 - 0x2cu, arg1 + 0x18u);
    t5 = rd32(self + 0x10cu);
    wr32(sp0 - 0x30u, t5);
    t6 = rd32(self + 0x108u);
    wr32(sp0 - 0x34u, t6);
    wr32(sp0 - 0x38u, self + 8u);
    g->eax = t5;
    g->edx = arg1 + 0x18u;
    g->esp = sp0 - 0x24u;
    t7 = cow_thiscall(g, COW_IMG(0x101c4790u), rd32(COW_IMG(0x10662dccu)), 5, self + 8u, t6, t5, arg1 + 0x18u, arg2);
    t8 = g->edx;
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->edx = t8;
    return (t7 & 0xffffff00u) | (int32_t)t7 >= 0;
L_101b9ba7: ;
    COW_AT(101b9ba7)
    g->ebx = loc_1c;
    g->esi = loc_20;
    g->edi = loc_24;
    g->edx = edx;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101b9b00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101b9b16u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101b9b24u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101b9b2eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101b9b4au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101b9b6bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x24u;
        g->ebx = arg2;
        g->edi = self + 8u;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x101b9b76u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x24u;
        g->ebx = arg2;
        g->edi = self + 8u;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x101b9ba7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101b9b00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101b9b00(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
