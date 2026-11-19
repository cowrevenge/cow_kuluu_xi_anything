/* f_0x102326b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102326b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102326c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102326c2;
    case 0x102326ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102326ce;
    case 0x102326e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102326e2;
    case 0x102326f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102326f3;
    case 0x10232704u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10232704;
    case 0x1023270cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1023270c;
    case 0x10232711u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10232711;
    case 0x10232719u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10232719;
    default: break;
    }
#endif

    COW_AT(102326b0)
    g->ebx = arg1;
    g->esp = sp0 - 8u;
    t1 = cow_fastcall(g, COW_IMG(0x10222110u), self, in_edx, 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)arg1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_102326ce;
    }
    ecx = t2;
    edx = t3;
    COW_AT(102326c2)
    if (rd8(rd32(COW_IMG(0x10664520u)) + 0x3cu) == 0u) goto L_10232704;
    eax = rd32(COW_IMG(0x10664520u));
    ecx = (ecx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10664520u)) + 0x3cu);
L_102326ce: ;
    COW_AT(102326ce)
    g->ebx = arg1;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x18u, 1u, 0xffffffffu);
    t5 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        eax = t4;
        edx = t5;
        goto L_102326f3;
    }
    eax = t4;
    COW_AT(102326e2)
    if (!(rd32(rd32(COW_IMG(0x104e1d4cu)) + 0x60u) >> 2u & 1u))
    {
        edx = rd32(rd32(COW_IMG(0x104e1d4cu)) + 0x60u) >> 2u;
        goto L_10232704;
    }
    edx = rd32(rd32(COW_IMG(0x104e1d4cu)) + 0x60u) >> 2u;
L_102326f3: ;
    COW_AT(102326f3)
    wr8(self + 0x90u, rd8(self + 0x90u) == 0u);
L_10232704: ;
    COW_AT(10232704)
    if ((int32_t)rd32(self + 0x68u) < 5)
    {
        eax = rd32(self + 0x68u);
    }
    else
    {
        eax = rd32(self + 0x68u);
    COW_AT(1023270c)
        if ((int32_t)eax <= 6)
        {
    COW_AT(10232711)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t6 = cow_thiscall(g, COW_IMG(0x10231a90u), self, 1, arg1);
            t7 = g->edx;
            eax = t6;
            edx = t7;
        }
    }
    COW_AT(10232719)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102326b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102326c2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102326ceu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102326e2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102326f3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10232704u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1023270cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10232711u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10232719u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102326b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102326b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
