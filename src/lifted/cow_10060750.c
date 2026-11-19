/* f_0x10060750 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10060750(Guest* g)
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10060761u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10060761;
    case 0x10060766u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10060766;
    case 0x1006076bu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1006076b;
    case 0x10060773u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10060773;
    case 0x10060788u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10060788;
    case 0x10060790u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10060790;
    case 0x100607a5u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100607a5;
    case 0x100607adu: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100607ad;
    case 0x100607c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100607c0;
    case 0x100607c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100607c3;
    case 0x100607d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100607d1;
    case 0x100607dau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100607da;
    default: break;
    }
#endif

    COW_AT(10060750)
    t1 = rd32(self + 0x48u);
    wr32(self, COW_IMG(0x1032b8bcu));
    if (t1 == 0xfu)
    {
        eax = t1;
        goto L_100607a5;
    }
    eax = t1;
    COW_AT(10060761)
    if (eax == 0x51u) goto L_10060788;
    COW_AT(10060766)
    if (eax != 0x72u)
    {
        edx = in_edx;
        goto L_100607c3;
    }
    COW_AT(1006076b)
    if (rd32(COW_IMG(0x1047bf30u)) != self)
    {
        edx = in_edx;
        goto L_100607c3;
    }
    COW_AT(10060773)
    t2 = rd32(self + 0x44u);
    g->eax = t2;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x10015050u), 1, t2);
    t4 = g->edx;
    wr32(COW_IMG(0x1047bf30u), 0u);
    eax = t3;
    edx = t4;
L_100607c0: ;
    COW_AT(100607c0)
L_100607c3: ;
    COW_AT(100607c3)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t11 = cow_fastcall(g, COW_IMG(0x100747c0u), self, edx, 0);
    t12 = g->ecx;
    t13 = g->edx;
    if (!(arg1 & 1u))
    {
        edx = t13;
    }
    else
    {
        eax = t11;
        ecx = t12;
        edx = t13;
    COW_AT(100607d1)
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10028710u), 1, self);
        t14 = g->edx;
        edx = t14;
    }
    COW_AT(100607da)
    g->esi = in_esi;
    g->edx = edx;
    return self;
L_10060788: ;
    COW_AT(10060788)
    if (rd32(COW_IMG(0x1047bf2cu)) != self)
    {
        edx = in_edx;
        goto L_100607c3;
    }
    COW_AT(10060790)
    t5 = rd32(self + 0x44u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t6 = cow_cdecl(g, COW_IMG(0x10014ef0u), 1, t5);
    t7 = g->edx;
    wr32(COW_IMG(0x1047bf2cu), 0u);
    eax = t6;
    edx = t7;
    goto L_100607c0;
L_100607a5: ;
    COW_AT(100607a5)
    if (rd32(COW_IMG(0x1047bf28u)) != self)
    {
        edx = in_edx;
        goto L_100607c3;
    }
    COW_AT(100607ad)
    t8 = rd32(self + 0x44u);
    g->eax = eax;
    g->edx = t8;
    g->esp = sp0 - 4u;
    t9 = cow_cdecl(g, COW_IMG(0x10014f20u), 1, t8);
    t10 = g->edx;
    wr32(COW_IMG(0x1047bf28u), 0u);
    eax = t9;
    edx = t10;
    goto L_100607c0;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10060750(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10060761u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10060766u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1006076bu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10060773u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10060788u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10060790u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100607a5u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100607adu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100607c0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100607c3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100607d1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100607dau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10060750(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10060750(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
