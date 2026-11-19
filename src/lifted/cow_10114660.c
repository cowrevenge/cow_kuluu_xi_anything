/* f_0x10114660 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10114660(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10114671u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_10114671;
    case 0x10114681u: ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_10114681;
    case 0x1011468fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1011468f;
    case 0x101146a1u: ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101146a1;
    case 0x101146c5u: ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101146c5;
    case 0x101146f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101146f1;
    case 0x101146fau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101146fa;
    case 0x10114740u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_10114740;
    default: break;
    }
#endif

    COW_AT(10114660)
    if (rd32(COW_IMG(0x10662dccu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662dccu));
    COW_AT(10114671)
        if (rd8(self + 0x450u) == 0u)
        {
            edx = (in_edx & 0xffffff00u) | rd8(self + 0x450u);
            goto L_1011468f;
        }
        edx = (in_edx & 0xffffff00u) | rd8(self + 0x450u);
    COW_AT(10114681)
        g->eax = self + 0x450u;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x101c4aa0u), ecx, 1, self + 0x450u);
        t2 = g->ecx;
        t3 = g->edx;
        if ((uint8_t)t1 != 0u) goto L_10114740;
        ecx = t2;
        edx = t3;
L_1011468f: ;
    COW_AT(1011468f)
        if (self + 0x360u != self + 0x278u)
        {
    COW_AT(101146a1)
            t4 = rd32(self + 0x278u);
            wr32(self + 0x360u, t4);
            t5 = rd16(self + 0x27cu);
            wr16(self + 0x364u, (uint16_t)t5);
            wr16(self + 0x366u, rd16(self + 0x27eu));
            esi = self + 0x280u;
            edi = self + 0x368u;
            ecx = 0x38u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            edx = (edx & 0xffff0000u) | t5;
        }
    COW_AT(101146c5)
        g->eax = self + 0x278u;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t6 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        t7 = g->edx;
        wr32(self + 0x360u, t6);
        wr16(self + 0x366u, 0u);
        g->ecx = self;
        t8 = cow_call_regs(g, COW_IMG(0x10114620u), t6, g->ecx, g->edx, 0, 2, self + 0x360u, 0xe8u);
        t9 = g->ecx;
        wr16(self + 0x366u, (uint16_t)~t8);
        if ((uint16_t)~t8 != 0u)
        {
            eax = ~t8;
            ecx = t9;
        }
        else
        {
            eax = ~t8;
            ecx = t9;
    COW_AT(101146f1)
            wr16(self + 0x366u, 0xffffu);
        }
    COW_AT(101146fa)
        t10 = rd16(self + 0x44au);
        g->ebx = self;
        g->eax = eax;
        g->edx = t10;
        g->esp = sp0 - 4u;
        t11 = cow_cdecl(g, COW_IMG(0x10312031u), 5, self + 0x450u, COW_IMG(0x1036c078u), t10, in_esi, in_ebp);
        t12 = g->edx;
        g->esp = sp0 - 0xcu;
        t13 = cow_thiscall(g, COW_IMG(0x101c4900u), rd32(COW_IMG(0x10662dccu)), 4, self + 0x450u, self + 0x360u, 0xe8u, 0u);
        wr16(self + 0x44au, rd8(self + 0x44au) + 1u & 7u);
    }
L_10114740: ;
    COW_AT(10114740)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10114660(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10114671u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10114681u:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = self + 0x450u;
        (void)sp0;
        return 1;
    }
    case 0x1011468fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101146a1u:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = self + 0x278u;
        g->ebp = self + 0x360u;
        (void)sp0;
        return 1;
    }
    case 0x101146c5u:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = self + 0x278u;
        g->ebp = self + 0x360u;
        (void)sp0;
        return 1;
    }
    case 0x101146f1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = self + 0x360u;
        (void)sp0;
        return 1;
    }
    case 0x101146fau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = self + 0x360u;
        (void)sp0;
        return 1;
    }
    case 0x10114740u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10114660(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10114660(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
