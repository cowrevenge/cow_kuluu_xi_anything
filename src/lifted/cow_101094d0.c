/* f_0x101094d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101094d0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101094dbu: in_eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101094db;
    case 0x101094e5u: eax = g->eax; in_edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101094e5;
    case 0x101094eau: eax = g->eax; in_edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101094ea;
    case 0x101094f1u: eax = g->eax; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101094f1;
    case 0x101094f6u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101094f6;
    case 0x101094fau: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101094fa;
    case 0x10109502u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10109502;
    case 0x10109506u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10109506;
    case 0x10109524u: eax = g->eax; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10109524;
    case 0x1010952bu: eax = g->eax; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1010952b;
    default: break;
    }
#endif

    COW_AT(101094d0)
    if (rd32(self + 4u) == 0u)
    {
        eax = in_eax;
        goto L_101094ea;
    }
    esi = rd32(self + 4u);
    COW_AT(101094db)
    if (rd16(esi + 2u) <= 1u)
    {
        eax = (in_eax & 0xffff0000u) | rd16(esi + 2u);
        goto L_101094f6;
    }
    eax = (in_eax & 0xffff0000u) | rd16(esi + 2u);
    COW_AT(101094e5)
    wr16(esi + 2u, (uint16_t)(eax - 1u));
    eax = eax - 1u;
L_101094ea: ;
    COW_AT(101094ea)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, COW_IMG(0x10109100u), self, 0);
    t10 = g->edx;
    eax = t9;
    edx = t10;
L_101094f1: ;
    COW_AT(101094f1)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_101094f6: ;
    COW_AT(101094f6)
    if (esi == 0u) goto L_101094ea;
    COW_AT(101094fa)
    if ((uint8_t)arg1 == 0u) goto L_10109524;
    eax = (eax & 0xffffff00u) | (uint8_t)arg1;
    COW_AT(10109502)
    if (esi == 0u) goto L_101094ea;
    COW_AT(10109506)
    t1 = rd32(esi + 4u);
    g->eax = t1;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    g->edx = t4;
    g->esp = sp0 - 0xcu;
    t5 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, esi);
    t6 = g->edx;
    g->edx = t6;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, COW_IMG(0x10109100u), self, 0);
    t8 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t8;
    return t7;
L_10109524: ;
    COW_AT(10109524)
    if (rd32(esi + 4u) == 0u)
    {
        eax = rd32(esi + 4u);
        edx = in_edx;
        goto L_101094f1;
    }
    eax = rd32(esi + 4u);
    COW_AT(1010952b)
    wr8(eax, 0u);
    g->esi = in_esi;
    g->edi = in_edi;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101094d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101094dbu:
    {
        uint32_t esi;
        uint32_t in_eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x101094e5u:
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
    case 0x101094eau:
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
    case 0x101094f1u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101094f6u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x101094fau:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x10109502u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x10109506u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x10109524u:
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
    case 0x1010952bu:
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
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101094d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101094d0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
