/* f_0x10200080 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10200080(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 180u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10200092u: eax = g->eax; in_esi = rd32(sp0 - 0x84u); g->esi = rd32(sp0 - 0x84u); goto E_10200092;
    case 0x1020009fu: eax = g->eax; edx = g->edx; goto E_1020009f;
    case 0x102000a9u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x84u); g->esi = rd32(sp0 - 0x84u); goto E_102000a9;
    case 0x102000f1u: eax = g->eax; edx = g->edx; self = g->esi; goto E_102000f1;
    case 0x10200122u: eax = g->eax; edx = g->edx; goto E_10200122;
    case 0x10200129u: eax = g->eax; edx = g->edx; goto E_10200129;
    case 0x10200132u: eax = g->eax; edx = g->edx; goto E_10200132;
    case 0x1020013cu: eax = g->eax; edx = g->edx; goto E_1020013c;
    case 0x10200143u: eax = g->eax; edx = g->edx; goto E_10200143;
    default: break;
    }
#endif

    COW_AT(10200080)
    wr32(sp0 - 0x84u, in_esi);
    if (rd8(COW_IMG(0x10663ac8u)) == 0u) goto L_102000a9;
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10663ac8u));
    COW_AT(10200092)
    wr32(sp0 - 0x88u, 0x7au);
    g->esp = sp0 - 0x84u;
    cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x7au);
    COW_AT(1020009f)
    g->esi = rd32(sp0 - 0x84u);
    return;
L_102000a9: ;
    COW_AT(102000a9)
    wr32(self + 0x1e4u, arg2);
    wr32(self + 0x1e0u, arg1);
    wr32(sp0 - 0x88u, 0x7fu);
    wr32(sp0 - 0x8cu, sp0 - 0x80u);
    wr32(sp0 - 0x90u, 0xau);
    wr16(self + 0x14u, 8u);
    wr32(self + 0x1d0u, arg3);
    wr32(self + 0x1d4u, arg4);
    g->esp = sp0 - 0x84u;
    cow_cdecl(g, COW_IMG(0x1031120eu), 3, 0xau, sp0 - 0x80u, 0x7fu);
    COW_AT(102000f1)
    wr32(sp0 - 0x94u, 0x16u);
    wr32(sp0 - 0x98u, COW_IMG(0x101ff920u));
    wr32(sp0 - 0x9cu, self + 0x53u);
    wr32(sp0 - 0xa0u, sp0 - 0x80u);
    t1 = rd32(self + 0x1d4u);
    wr32(sp0 - 0xa4u, t1);
    t2 = rd32(self + 0x1d0u);
    wr32(sp0 - 0xa8u, t2);
    t3 = rd32(self + 0x1e4u);
    wr32(sp0 - 0xacu, t3);
    t4 = rd32(self + 0x1e0u);
    wr32(sp0 - 0xb0u, t4);
    g->eax = t3;
    g->edx = t2;
    g->esp = sp0 - 0xacu;
    t5 = cow_cdecl(g, COW_IMG(0x100f72b0u), 1, t4);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    COW_AT(10200122)
    if (eax == 0u)
    {
    COW_AT(10200129)
        if (rd32(COW_IMG(0x105781f8u)) != 0u)
        {
            eax = rd32(COW_IMG(0x105781f8u));
    COW_AT(10200132)
            wr32(sp0 - 0x88u, 0x10u);
            g->esp = sp0 - 0x84u;
            cow_thiscall(g, COW_IMG(0x10221270u), eax + 0x20u, 1, 0x10u);
        }
    COW_AT(1020013c)
        wr8(COW_IMG(0x10663ac8u), 1u);
    }
    COW_AT(10200143)
    g->esi = rd32(sp0 - 0x84u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10200080(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10200092u:
    {
        uint32_t eax;
        uint32_t in_esi;
        eax = g->eax;
        in_esi = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x1020009fu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x102000a9u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x102000f1u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x90u;
        wr32(sp0 - 0x8cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10200122u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0xb0u;
        wr32(sp0 - 0xa0u, sp0 - 0x80u);
        wr32(sp0 - 0x8cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10200129u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x84u;
        wr32(sp0 - 0xa0u, sp0 - 0x80u);
        wr32(sp0 - 0x8cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10200132u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x84u;
        wr32(sp0 - 0xa0u, sp0 - 0x80u);
        wr32(sp0 - 0x8cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1020013cu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x84u;
        wr32(sp0 - 0xa0u, sp0 - 0x80u);
        wr32(sp0 - 0x8cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10200143u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x84u;
        wr32(sp0 - 0xa0u, sp0 - 0x80u);
        wr32(sp0 - 0x8cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10200080(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10200080(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
