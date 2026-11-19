/* f_0x101fff30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_101fff30(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 172u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101fff47u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x84u); g->esi = rd32(sp0 - 0x84u); goto E_101fff47;
    case 0x101fff53u: eax = g->eax; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x84u); g->esi = rd32(sp0 - 0x84u); goto E_101fff53;
    case 0x101fff60u: eax = g->eax; edx = g->edx; in_edi = g->edi; goto E_101fff60;
    case 0x101fff6au: eax = g->eax; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x84u); g->esi = rd32(sp0 - 0x84u); goto E_101fff6a;
    case 0x101fffbeu: eax = g->eax; edx = g->edx; edi = g->edi; goto E_101fffbe;
    case 0x101fffc6u: eax = g->eax; edx = g->edx; edi = g->edi; goto E_101fffc6;
    case 0x101fffcfu: eax = g->eax; edx = g->edx; edi = g->edi; goto E_101fffcf;
    case 0x101fffd9u: eax = g->eax; edx = g->edx; edi = g->edi; goto E_101fffd9;
    case 0x101fffe0u: eax = g->eax; edx = g->edx; edi = g->edi; goto E_101fffe0;
    default: break;
    }
#endif

    COW_AT(101fff30)
    wr32(sp0 - 0x84u, in_esi);
    wr32(sp0 - 0x88u, 0x7fu);
    wr32(sp0 - 0x8cu, sp0 - 0x80u);
    wr32(sp0 - 0x90u, 9u);
    g->eax = sp0 - 0x80u;
    g->edx = in_edx;
    g->esp = sp0 - 0x84u;
    t1 = cow_cdecl(g, COW_IMG(0x1031120eu), 3, 9u, sp0 - 0x80u, 0x7fu);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(101fff47)
    if (rd8(COW_IMG(0x10663ac8u)) == 0u) goto L_101fff6a;
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10663ac8u));
    COW_AT(101fff53)
    wr32(sp0 - 0x88u, 0x7au);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x84u;
    t3 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x7au);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    COW_AT(101fff60)
    g->esi = rd32(sp0 - 0x84u);
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_101fff6a: ;
    COW_AT(101fff6a)
    wr32(sp0 - 0x88u, in_edi);
    wr16(self + 0x14u, 6u);
    wr32(self + 0x1e0u, arg1);
    wr32(self + 0x1e4u, arg2);
    wr32(self + 0x1d0u, arg3);
    wr32(self + 0x1d4u, arg4);
    wr32(sp0 - 0x8cu, 0x15u);
    wr32(sp0 - 0x90u, COW_IMG(0x101ff920u));
    wr32(sp0 - 0x94u, self + 0x53u);
    wr32(sp0 - 0x98u, sp0 - 0x80u);
    wr32(sp0 - 0x9cu, arg4);
    wr32(sp0 - 0xa0u, arg3);
    wr32(sp0 - 0xa4u, arg2);
    wr32(sp0 - 0xa8u, arg1);
    g->eax = arg1;
    g->edx = arg3;
    g->esp = sp0 - 0x88u;
    t5 = cow_cdecl(g, COW_IMG(0x100f7230u), 8, arg1, arg2, arg3, arg4, sp0 - 0x80u, self + 0x53u, COW_IMG(0x101ff920u), 0x15u);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    COW_AT(101fffbe)
    if (eax != 0u)
    {
        edi = rd32(sp0 - 0x88u);
    }
    else
    {
        edi = rd32(sp0 - 0x88u);
    COW_AT(101fffc6)
        if (rd32(COW_IMG(0x105781f8u)) == 0u)
        {
            eax = rd32(COW_IMG(0x105781f8u));
        }
        else
        {
            eax = rd32(COW_IMG(0x105781f8u));
    COW_AT(101fffcf)
            wr32(sp0 - 0x88u, 0x10u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x84u;
            t7 = cow_thiscall(g, COW_IMG(0x10221270u), eax + 0x20u, 1, 0x10u);
            t8 = g->edx;
            eax = t7;
            edx = t8;
        }
    COW_AT(101fffd9)
        wr8(COW_IMG(0x10663ac8u), 1u);
    }
    COW_AT(101fffe0)
    g->esi = rd32(sp0 - 0x84u);
    g->edi = edi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101fff30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101fff47u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x90u;
        wr32(sp0 - 0x8cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x101fff53u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x84u;
        wr32(sp0 - 0x8cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x101fff60u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x84u;
        wr32(sp0 - 0x8cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x101fff6au:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x84u;
        wr32(sp0 - 0x8cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x101fffbeu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xa8u;
        g->esi = sp0 - 0x80u;
        wr32(sp0 - 0x98u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x101fffc6u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x84u;
        g->esi = sp0 - 0x80u;
        wr32(sp0 - 0x98u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x101fffcfu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x84u;
        g->esi = sp0 - 0x80u;
        wr32(sp0 - 0x98u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x101fffd9u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x84u;
        g->esi = sp0 - 0x80u;
        wr32(sp0 - 0x98u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x101fffe0u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x84u;
        g->esi = sp0 - 0x80u;
        wr32(sp0 - 0x98u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101fff30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101fff30(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
