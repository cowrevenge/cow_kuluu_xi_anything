/* f_0x10134620 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10134620(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10134560u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10134560;
    case 0x10134572u: eax = g->eax; self = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10134572;
    case 0x10134579u: eax = g->eax; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10134579;
    case 0x10134581u: eax = g->eax; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10134581;
    case 0x1013459du: eax = g->eax; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1013459d;
    case 0x101345a8u: eax = g->eax; self = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101345a8;
    case 0x101345b7u: eax = g->eax; self = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101345b7;
    case 0x101345dbu: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101345db;
    case 0x101345e1u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101345e1;
    case 0x101345f5u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101345f5;
    case 0x101345fdu: eax = g->eax; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101345fd;
    case 0x1013463au: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_1013463a;
    case 0x1013463fu: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_1013463f;
    default: break;
    }
#endif

    COW_AT(10134620)
    t1 = rd32(sp0 + 4u);
    t2 = rd32(sp0 + 8u);
    t3 = rd8(self + 0x14fu);
    wr32(sp0 + 4u, t1);
    wr32(sp0 + 8u, t2);
    if ((uint8_t)t3 != 0xffu)
    {
        eax = t2;
        edx = t1;
        goto L_1013463f;
    }
    edx = t1;
    COW_AT(1013463a)
    COW_AT(10134560)
    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 5u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
        goto L_101345fd;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    COW_AT(10134572)
    t4 = rd32(COW_IMG(0x10134604u) + eax * 4u);
    switch (t4 - RD)
    {
    case 0x10134579u: goto L_10134579;
    case 0x1013459du: goto L_1013459d;
    case 0x101345a8u: goto L_101345a8;
    default: rt_fatal(g, COW_IMG(0x10134572u), "switch");
    }
    return 0;
L_10134579: ;
    COW_AT(10134579)
    if (rd16(sp0 + 8u) != 0x11u) goto L_101345fd;
    COW_AT(10134581)
    g->eax = rd32(COW_IMG(0x10663488u));
    t10 = rd32(COW_IMG(0x10663488u));
    g->esp = sp0 - 4u;
    t11 = cow_fastcall(g, COW_IMG(0x102107d0u), rd32(COW_IMG(0x10664508u)), edx, 1, t10);
    t12 = g->edx;
    wr8(COW_IMG(0x105781c1u), 0u);
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t12;
    return t11;
L_1013459d: ;
    COW_AT(1013459d)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t8 = cow_thiscall(g, COW_IMG(0x10134760u), self, 0);
    t9 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t9;
    return t8;
L_101345a8: ;
    COW_AT(101345a8)
    if (rd16(self + 0x148u) != 0x11u)
    {
        edi = rd32(sp0 + 8u);
        goto L_101345db;
    }
    edi = rd32(sp0 + 8u);
    COW_AT(101345b7)
    t5 = edi + ((self & 0xffff0000u) | (uint16_t)((uint32_t)rd16(self + 0x14au) << 2u));
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, t5, 0u);
    t7 = g->edx;
    wr16(self + 0x148u, (uint16_t)edi);
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t7;
    return t6;
L_101345db: ;
    COW_AT(101345db)
    if ((uint16_t)edi != 0x11u)
    {
    COW_AT(101345e1)
        wr16(self + 0x14au, (uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)edi + ((uint32_t)((int32_t)((uint32_t)(int16_t)edi - 1u) >> 0x1fu) & 3u) - 1u) >> 2u));
        eax = (uint32_t)((int32_t)((uint32_t)(int16_t)edi + ((uint32_t)((int32_t)((uint32_t)(int16_t)edi - 1u) >> 0x1fu) & 3u) - 1u) >> 2u);
        edx = (uint32_t)((int32_t)((uint32_t)(int16_t)edi - 1u) >> 0x1fu) & 3u;
    }
    COW_AT(101345f5)
    wr16(self + 0x148u, (uint16_t)edi);
L_101345fd: ;
    COW_AT(101345fd)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_1013463f: ;
    COW_AT(1013463f)
    g->esp = sp0;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x10134250u), eax, self, edx);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10134620(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10134560u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10134572u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10134579u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10134581u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1013459du:
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
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101345a8u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101345b7u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101345dbu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101345e1u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101345f5u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101345fdu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1013463au:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1013463fu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
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
void cow_adapter_10134620(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10134620(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
