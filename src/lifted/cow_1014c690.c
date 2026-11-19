/* f_0x1014c690 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1014c690(Guest* g)
{
    uint32_t eax;
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
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1014c6a5u: eax = g->eax; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1014c6a5;
    case 0x1014c6afu: eax = g->eax; in_edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1014c6af;
    case 0x1014c6c4u: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; goto E_1014c6c4;
    case 0x1014c6c8u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_1014c6c8;
    case 0x1014c6d2u: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; goto E_1014c6d2;
    case 0x1014c6e5u: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; goto E_1014c6e5;
    case 0x1014c6ecu: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; goto E_1014c6ec;
    case 0x1014c6f7u: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; goto E_1014c6f7;
    case 0x1014c6feu: eax = g->eax; edx = g->edx; esi = g->esi; goto E_1014c6fe;
    case 0x1014c711u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_1014c711;
    case 0x1014c716u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_1014c716;
    default: break;
    }
#endif

    COW_AT(1014c690)
    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    if ((rd32(rd32(rd32(sp0 + 8u) + 0x14bcu)) >> 8u & 0x20u) == 0u)
    {
        eax = rd32(rd32(rd32(sp0 + 8u) + 0x14bcu));
        goto L_1014c6af;
    }
    COW_AT(1014c6a5)
    g->esi = in_esi;
    g->edi = in_edi;
    return 0x80404040u;
L_1014c6af: ;
    COW_AT(1014c6af)
    wr32(sp0 - 0xcu, 0u);
    t1 = (in_edx & 0xffffff00u) | rd8(rd32(sp0 + 4u) + 2u);
    wr32(sp0 - 0x10u, t1);
    g->eax = eax;
    t2 = rd32(sp0 + 4u);
    g->esp = sp0 - 8u;
    t3 = cow_fastcall(g, COW_IMG(0x10131f10u), rd32(COW_IMG(0x105781a8u)), t1, 2, t1, 0u);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    esi = t2;
    COW_AT(1014c6c4)
    if ((uint8_t)eax == 0u) goto L_1014c6d2;
    COW_AT(1014c6c8)
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    g->edx = edx;
    return 0x80404040u;
L_1014c6d2: ;
    COW_AT(1014c6d2)
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, sp0 + 4u);
    wr32(sp0 - 0x14u, sp0 + 8u);
    wr32(sp0 - 0x18u, 0u);
    g->eax = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), sp0 + 8u, 4, 0u, sp0 + 8u, sp0 + 4u, 1u);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    COW_AT(1014c6e5)
    if ((uint8_t)eax == 0u) goto L_1014c711;
    COW_AT(1014c6ec)
    if (rd8(sp0 + 8u) != rd8(esi + 2u))
    {
        edx = (edx & 0xffffff00u) | rd8(sp0 + 8u);
        goto L_1014c711;
    }
    edx = (edx & 0xffffff00u) | rd8(sp0 + 8u);
    COW_AT(1014c6f7)
    g->eax = rd32(self);
    g->edx = edx;
    t7 = rd32(self);
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, rd32(t7 + 0x54u), self, 0);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    COW_AT(1014c6fe)
    if ((uint8_t)rd32(sp0 + 4u) == eax)
    {
        eax = 0x80404040u;
        goto L_1014c716;
    }
L_1014c711: ;
    COW_AT(1014c711)
    eax = 0x80808080u;
L_1014c716: ;
    COW_AT(1014c716)
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1014c690(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1014c6a5u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1014c6afu:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1014c6c4u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1014c6c8u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1014c6d2u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1014c6e5u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x14u, sp0 + 8u);
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1014c6ecu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x14u, sp0 + 8u);
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1014c6f7u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x14u, sp0 + 8u);
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1014c6feu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x14u, sp0 + 8u);
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1014c711u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x14u, sp0 + 8u);
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1014c716u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x14u, sp0 + 8u);
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1014c690(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1014c690(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
