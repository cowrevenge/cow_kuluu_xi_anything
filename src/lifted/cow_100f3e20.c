/* f_0x100f3e20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100f3e20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t sf;
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
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f3e30u: self = g->ecx; in_edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f3e30;
    case 0x100f3e37u: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f3e37;
    case 0x100f3e40u: eax = g->eax; self = g->ecx; in_edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f3e40;
    case 0x100f3e4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f3e4e;
    case 0x100f3e60u: eax = g->eax; self = g->ecx; in_edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f3e60;
    case 0x100f3e6au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f3e6a;
    case 0x100f3e7au: eax = g->eax; self = g->ecx; in_edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f3e7a;
    case 0x100f3e80u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f3e80;
    case 0x100f3e87u: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f3e87;
    case 0x100f3e90u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f3e90;
    case 0x100f3e92u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f3e92;
    case 0x100f3ea2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f3ea2;
    case 0x100f3eb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f3eb0;
    case 0x100f3eb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f3eb5;
    case 0x100f3ecbu: eax = g->eax; self = g->ecx; in_edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f3ecb;
    case 0x100f3ed5u: eax = g->eax; self = g->ecx; in_edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f3ed5;
    case 0x100f3edbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f3edb;
    case 0x100f3ee8u: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f3ee8;
    case 0x100f3ef1u: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f3ef1;
    default: break;
    }
#endif

    COW_AT(100f3e20)
    if (arg1 > 3u) goto L_100f3ef1;
    COW_AT(100f3e30)
    t1 = rd32(COW_IMG(0x100f3efcu) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x100f3e37u: goto L_100f3e37;
    case 0x100f3e40u: goto L_100f3e40;
    case 0x100f3e60u: goto L_100f3e60;
    case 0x100f3ecbu: goto L_100f3ecb;
    default: rt_fatal(g, COW_IMG(0x100f3e30u), "switch");
    }
    return 0;
L_100f3e37: ;
    COW_AT(100f3e37)
    g->esi = in_esi;
    return 3u;
L_100f3e40: ;
    COW_AT(100f3e40)
    g->eax = self + 0xe48u;
    g->esp = sp0 - 0xcu;
    t7 = cow_stdcall(g, COW_IMG(0x10310ebfu), 0);
    eax = t7;
    COW_AT(100f3e4e)
    wr32(self + 0x208u, eax);
    g->esi = in_esi;
    return 0x16u;
L_100f3e60: ;
    COW_AT(100f3e60)
    if ((int32_t)rd32(self + 0x208u) >= 0)
    {
        eax = rd32(self + 0x208u);
        goto L_100f3e7a;
    }
    COW_AT(100f3e6a)
    wr8(self + 0xc5u, 1u);
    g->esi = in_esi;
    return 0x17u;
L_100f3e7a: ;
    COW_AT(100f3e7a)
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_stdcall(g, COW_IMG(0x10310ecau), 0);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
    COW_AT(100f3e80)
    if (eax != 0u)
    {
        sf = (int32_t)eax < 0;
        goto L_100f3e90;
    }
    COW_AT(100f3e87)
    g->esi = in_esi;
    return 0x16u;
L_100f3e90: ;
    COW_AT(100f3e90)
    if (!sf)
    {
    COW_AT(100f3ea2)
        wr8(self + 0xc5u, 0u);
        t6 = rd32(self + 0x208u);
        edx = t6;
    }
    else
    {
    COW_AT(100f3e92)
        wr8(self + 0xc5u, 1u);
        t5 = rd32(self + 0x208u);
        ecx = t5;
    }
    COW_AT(100f3eb0)
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x10310ed5u), 0);
    COW_AT(100f3eb5)
    wr32(self + 0x208u, 0xffffffffu);
    g->esi = in_esi;
    return 0x17u;
L_100f3ecb: ;
    COW_AT(100f3ecb)
    if ((int32_t)rd32(self + 0x208u) >= 0)
    {
        eax = rd32(self + 0x208u);
    COW_AT(100f3ed5)
        g->esp = sp0 - 8u;
        cow_stdcall(g, COW_IMG(0x10310ed5u), 0);
    COW_AT(100f3edb)
        wr32(self + 0x208u, 0xffffffffu);
    }
    COW_AT(100f3ee8)
    g->esi = in_esi;
    return 6u;
L_100f3ef1: ;
    COW_AT(100f3ef1)
    g->esi = in_esi;
    return 0x15u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f3e20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f3e30u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        self = g->ecx;
        in_edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg1;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100f3e37u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f3e40u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100f3e4eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100f3e60u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100f3e6au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f3e7au:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100f3e80u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f3e87u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f3e90u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x100f3e92u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f3ea2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f3eb0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f3eb5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f3ecbu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100f3ed5u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100f3edbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f3ee8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f3ef1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
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
void cow_adapter_100f3e20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f3e20(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
