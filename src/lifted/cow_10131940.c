/* f_0x10131940 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10131940(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
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
    case 0x10131993u: eax = g->eax; ecx = g->ecx; self = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10131993;
    case 0x101319c4u: eax = g->eax; ecx = g->ecx; self = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101319c4;
    case 0x101319cfu: eax = g->eax; ecx = g->ecx; self = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101319cf;
    case 0x10131a00u: eax = g->eax; ecx = g->ecx; self = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10131a00;
    case 0x10131a10u: eax = g->eax; ecx = g->ecx; self = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10131a10;
    case 0x10131a1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10131a1e;
    case 0x10131a2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10131a2c;
    case 0x10131a39u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10131a39;
    default: break;
    }
#endif

    COW_AT(10131940)
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x10131530u), self, 0);
    t2 = g->edx;
    cow_thiscall(g, COW_IMG(0x101312e0u), self + 0x74u, 0);
    wr32(self + 0x78u, 0u);
    wr16(self + 0x7cu, 0u);
    wr16(self + 0x7eu, 0u);
    wr16(self + 0x80u, 0u);
    wr16(self + 0x82u, 0u);
    wr16(self + 0x84u, 0u);
    wr16(self + 0x86u, 0u);
    eax = self + 0x88u;
    ecx = 0xau;
L_10131993: ;
    COW_AT(10131993)
    wr32(eax, 0u);
    wr16(eax + 4u, 0u);
    wr16(eax + 6u, 0u);
    wr16(eax + 8u, 0u);
    wr16(eax + 0xau, 0u);
    wr16(eax + 0xcu, 0u);
    wr16(eax + 0xeu, 0u);
    wr32(eax + 0x10u, 2u);
    wr32(eax + 0x14u, 0u);
    wr8(eax + 0x1cu, 4u);
    wr16(eax + 0x18u, 0u);
    wr16(eax + 0x1au, 0x27u);
    if (ecx != 1u)
    {
        eax = eax + 0x20u;
        ecx = ecx - 1u;
        goto L_10131993;
    }
    COW_AT(101319c4)
    eax = self + 0x1ccu;
    ecx = 0x10u;
L_101319cf: ;
    COW_AT(101319cf)
    wr32(eax, 0u);
    wr16(eax + 4u, 0u);
    wr16(eax + 6u, 0u);
    wr16(eax + 8u, 0u);
    wr16(eax + 0xau, 0u);
    wr16(eax + 0xcu, 0u);
    wr16(eax + 0xeu, 0u);
    wr32(eax + 0x10u, 2u);
    wr32(eax + 0x14u, 0u);
    wr8(eax + 0x1cu, 4u);
    wr16(eax + 0x18u, 0u);
    wr16(eax + 0x1au, 0x27u);
    if (ecx != 1u)
    {
        eax = eax + 0x20u;
        ecx = ecx - 1u;
        goto L_101319cf;
    }
    eax = eax + 0x20u;
    COW_AT(10131a00)
    wr32(self, COW_IMG(0x10333728u));
    if (rd32(COW_IMG(0x105781b0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105781b0u));
        edx = 0x27u;
        goto L_10131a2c;
    }
    ecx = rd32(COW_IMG(0x105781b0u));
    COW_AT(10131a10)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, 0x27u, 1, 3, 0x14u, in_edi, in_esi);
    t4 = g->edx;
    if (t3 == 0u) goto L_10131a39;
    eax = t3;
    edx = t4;
    COW_AT(10131a1e)
    wr32(eax, COW_IMG(0x103336c0u));
    wr32(COW_IMG(0x105781b0u), eax);
    ecx = eax;
L_10131a2c: ;
    COW_AT(10131a2c)
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(rd32(ecx) + 0x58u), ecx, 1, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return self;
L_10131a39: ;
    COW_AT(10131a39)
    wr32(COW_IMG(0x105781b0u), 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return self;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10131940(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10131993u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edx = 0x27u;
        g->ebx = (in_ebx & 0xffffff00u) | 4u;
        g->ebp = 2u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101319c4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edx = 0x27u;
        g->ebx = (in_ebx & 0xffffff00u) | 4u;
        g->ebp = 2u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101319cfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edx = 0x27u;
        g->ebx = (in_ebx & 0xffffff00u) | 4u;
        g->ebp = 2u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10131a00u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edx = 0x27u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10131a10u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edx = 0x27u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10131a1eu:
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
        self = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10131a2cu:
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
        self = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10131a39u:
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
        self = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10131940(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10131940(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
