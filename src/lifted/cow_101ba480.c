/* f_0x101ba480 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101ba480(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101ba48eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101ba48e;
    case 0x101ba494u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101ba494;
    case 0x101ba4adu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101ba4ad;
    case 0x101ba4b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101ba4b3;
    case 0x101ba4e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101ba4e1;
    case 0x101ba4eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101ba4ee;
    case 0x101ba504u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101ba504;
    case 0x101ba511u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101ba511;
    default: break;
    }
#endif

    COW_AT(101ba480)
    if (rd32(self + 0x18u) == 0u)
    {
        eax = rd32(self + 0x18u);
        goto L_101ba494;
    }
    eax = rd32(self + 0x18u);
    COW_AT(101ba48e)
    g->esi = in_esi;
    g->edi = in_edi;
    return 0xffffffffu;
L_101ba494: ;
    COW_AT(101ba494)
    g->eax = eax;
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x101c4b80u), t1, 2, COW_IMG(0x1037c950u), 0x13u);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(self + 0x1cu, t2);
    if ((int32_t)t2 >= 0)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        goto L_101ba4b3;
    }
    eax = t2;
    COW_AT(101ba4ad)
    g->esi = in_esi;
    g->edi = in_edi;
    return 0xffffffffu;
L_101ba4b3: ;
    COW_AT(101ba4b3)
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x101907a0u), 4, self + 0x18u, eax, COW_IMG(0x1037c944u), in_edi);
    t5 = g->edx;
    t6 = rd32(self + 0x1cu);
    t7 = rd32(self + 0x18u);
    g->eax = t6;
    g->edx = t5;
    t8 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, COW_IMG(0x101c47d0u), t8, 5, COW_IMG(0x1037c950u), 0x13u, t7, t6, 0u);
    t10 = g->ecx;
    t11 = g->edx;
    if ((int32_t)t9 >= 0)
    {
        ecx = t10;
        goto L_101ba4ee;
    }
    eax = t9;
    edx = t11;
    COW_AT(101ba4e1)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t12 = cow_thiscall(g, COW_IMG(0x101ba300u), self, 0);
    g->esi = in_esi;
    g->edi = in_edi;
    return 0xffffffffu;
L_101ba4ee: ;
    COW_AT(101ba4ee)
    t13 = rd32(self + 0x1cu);
    t14 = rd32(self + 0x18u);
    g->eax = t14;
    g->edx = t13;
    g->esp = sp0 - 8u;
    t15 = cow_cdecl(g, COW_IMG(0x1031132cu), 2, t14, t13);
    t16 = g->edx;
    wr32(self + 0x14u, t15);
    if (t15 != 0u) goto L_101ba511;
    eax = t15;
    edx = t16;
    COW_AT(101ba504)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t17 = cow_thiscall(g, COW_IMG(0x101ba300u), self, 0);
    g->esi = in_esi;
    g->edi = in_edi;
    return 0xffffffffu;
L_101ba511: ;
    COW_AT(101ba511)
    g->esi = in_esi;
    g->edi = in_edi;
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101ba480(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101ba48eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101ba494u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = self + 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101ba4adu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101ba4b3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = self + 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101ba4e1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101ba4eeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = self + 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101ba504u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101ba511u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101ba480(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101ba480(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
