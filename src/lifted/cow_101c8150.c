/* f_0x101c8150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c8150(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t18;
    uint32_t t19;
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
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101c8169u: eax = g->eax; in_edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101c8169;
    case 0x101c816eu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101c816e;
    case 0x101c8172u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101c8172;
    case 0x101c817au: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101c817a;
    case 0x101c817eu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101c817e;
    case 0x101c818du: eax = g->eax; edx = g->edx; ebx = g->ebx; goto E_101c818d;
    case 0x101c818fu: edx = g->edx; ebx = g->ebx; goto E_101c818f;
    case 0x101c8196u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101c8196;
    case 0x101c81a0u: eax = g->eax; in_edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101c81a0;
    case 0x101c81a5u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101c81a5;
    case 0x101c81a9u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101c81a9;
    case 0x101c81b2u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101c81b2;
    case 0x101c81b6u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101c81b6;
    case 0x101c81c5u: eax = g->eax; edx = g->edx; ebx = g->ebx; goto E_101c81c5;
    case 0x101c81ceu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101c81ce;
    case 0x101c81dbu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101c81db;
    case 0x101c81efu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101c81ef;
    case 0x101c81f5u: edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101c81f5;
    default: break;
    }
#endif

    COW_AT(101c8150)
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, 0u);
    if (rd32(sp0 + 4u) != rd32(self + 0x50u))
    {
        eax = rd32(self + 0x50u);
        ebx = rd32(sp0 + 4u);
        goto L_101c81a0;
    }
    eax = rd32(self + 0x50u);
    COW_AT(101c8169)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x101c5b90u), self + 0x5cu, 1, 0u);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(101c816e)
    if (eax == 0u) goto L_101c8196;
    COW_AT(101c8172)
    wr32(sp0 - 0x14u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x101c5b30u), self + 0x5cu, 1, 0u);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    COW_AT(101c817a)
    if (eax != 0u)
    {
    COW_AT(101c817e)
        t5 = rd32(self + 0x58u);
        wr32(sp0 - 0x14u, t5);
        t6 = rd32(self + 0x54u);
        wr32(sp0 - 0x18u, t6);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x10257d00u), self, 2, t6, t5);
        t7 = g->edx;
        edx = t7;
    }
L_101c818d: ;
    COW_AT(101c818d)
L_101c818f: ;
    COW_AT(101c818f)
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    g->edx = edx;
    return 0u;
L_101c8196: ;
    COW_AT(101c8196)
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    g->edx = edx;
    return rd32(self + 0x54u);
L_101c81a0: ;
    COW_AT(101c81a0)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t8 = cow_thiscall(g, COW_IMG(0x101c5b90u), self + 0x5cu, 1, 0u);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    COW_AT(101c81a5)
    if (eax == 0u) goto L_101c81ce;
    COW_AT(101c81a9)
    wr32(sp0 - 0x14u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t10 = cow_thiscall(g, COW_IMG(0x101c5b30u), self + 0x5cu, 1, 0u);
    t11 = g->edx;
    eax = t10;
    edx = t11;
    COW_AT(101c81b2)
    if (eax == 0u) goto L_101c818d;
    COW_AT(101c81b6)
    t12 = rd32(self + 0x58u);
    wr32(sp0 - 0x14u, t12);
    t13 = rd32(self + 0x54u);
    wr32(sp0 - 0x18u, t13);
    g->edx = t12;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10257d00u), self, 2, t13, t12);
    t14 = g->edx;
    edx = t14;
    COW_AT(101c81c5)
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    g->edx = edx;
    return 0u;
L_101c81ce: ;
    COW_AT(101c81ce)
    wr32(sp0 - 0x14u, ebx);
    wr32(sp0 - 0x18u, sp0 + 4u);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10257ca0u), self, 2, sp0 + 4u, ebx);
    COW_AT(101c81db)
    t15 = rd32(self + 0x58u);
    wr32(sp0 - 0x14u, t15);
    t16 = rd32(sp0 + 4u);
    wr32(sp0 - 0x18u, t16);
    t17 = rd32(self + 0x54u);
    wr32(sp0 - 0x1cu, t17);
    g->eax = t16;
    g->edx = t15;
    g->esp = sp0 - 0x10u;
    t18 = cow_thiscall(g, COW_IMG(0x101c5a70u), self + 0x5cu, 3, t17, t16, t15);
    t19 = g->edx;
    eax = t18;
    edx = t19;
    COW_AT(101c81ef)
    if ((int32_t)eax < 0) goto L_101c818f;
    COW_AT(101c81f5)
    wr32(self + 0x50u, ebx);
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    g->edx = edx;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101c8150(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101c8169u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ecx = self + 0x5cu;
        g->ebp = 0u;
        g->edi = self + 0x5cu;
        wr32(sp0 - 0x14u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101c816eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        g->edi = self + 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x101c8172u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        g->edi = self + 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x101c817au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c817eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c818du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c818fu:
    {
        uint32_t ebx;
        uint32_t edx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->eax = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c8196u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101c81a0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ecx = self + 0x5cu;
        g->ebp = 0u;
        g->edi = self + 0x5cu;
        wr32(sp0 - 0x14u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101c81a5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        g->edi = self + 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x101c81a9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        g->edi = self + 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x101c81b2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c81b6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c81c5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c81ceu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        g->edi = self + 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x101c81dbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        g->edi = self + 0x5cu;
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101c81efu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c81f5u:
    {
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->eax = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101c8150(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101c8150(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
