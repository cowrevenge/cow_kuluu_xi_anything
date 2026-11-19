/* f_0x1029cd60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1029cd60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
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
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1029cd73u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1029cd73;
    case 0x1029cd78u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1029cd78;
    case 0x1029cd95u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1029cd95;
    case 0x1029cdbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1029cdbb;
    case 0x1029cdcbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1029cdcb;
    case 0x1029cdd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1029cdd3;
    case 0x1029cdeau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1029cdea;
    case 0x1029ce10u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1029ce10;
    case 0x1029ce27u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1029ce27;
    case 0x1029ce4du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1029ce4d;
    default: break;
    }
#endif

    COW_AT(1029cd60)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    t1 = rd8(COW_IMG(0x109a2828u));
    t2 = rd32(sp0 + 4u);
    wr8(sp0 - 1u, (uint8_t)t1);
    if (t2 != 0u)
    {
        eax = (in_eax & 0xffffff00u) | t1;
        esi = t2;
        goto L_1029cd78;
    }
    eax = (in_eax & 0xffffff00u) | t1;
    COW_AT(1029cd73)
    g->esi = in_esi;
    return eax & 0xffffff00u;
L_1029cd78: ;
    COW_AT(1029cd78)
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, esi);
    wr8(COW_IMG(0x109a2828u), 0u);
    wr8(COW_IMG(0x109f8268u), 0u);
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t3 = cow_cdecl(g, COW_IMG(0x1029ce60u), 2, esi, 1u);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        eax = t3;
        edx = t5;
        goto L_1029cdbb;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    COW_AT(1029cd95)
    wr32(sp0 - 0xcu, 0xe5u);
    wr32(sp0 - 0x10u, COW_IMG(0x103bc7fcu));
    wr32(sp0 - 0x14u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc7fcu));
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x18u, COW_IMG(0x103bc83cu));
    g->esp = sp0 - 0x10u;
    t9 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc83cu), COW_IMG(0x103b379cu));
    g->esi = rd32(sp0 - 8u);
    return t9 & 0xffffff00u;
L_1029cdbb: ;
    COW_AT(1029cdbb)
    t10 = rd8(sp0 - 1u);
    wr32(sp0 + 4u, 0u);
    if ((uint8_t)t10 == 0u)
    {
        eax = (eax & 0xffffff00u) | t10;
    }
    else
    {
        eax = (eax & 0xffffff00u) | t10;
    COW_AT(1029cdcb)
        wr32(sp0 + 4u, 1u);
    }
    COW_AT(1029cdd3)
    wr32(sp0 - 0xcu, esi);
    wr32(sp0 - 0x10u, 1u);
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, sp0 + 4u);
    g->eax = eax;
    g->ecx = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t11 = cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 + 4u, 4u, 1u, esi);
    t12 = g->ecx;
    t13 = g->edx;
    if (t11 == 1u)
    {
        eax = t11;
        ecx = t12;
        goto L_1029ce10;
    }
    eax = t11;
    ecx = t12;
    edx = t13;
    COW_AT(1029cdea)
    wr32(sp0 - 0xcu, 0xedu);
    wr32(sp0 - 0x10u, COW_IMG(0x103bc7fcu));
    wr32(sp0 - 0x14u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t14 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc7fcu));
    t15 = g->ecx;
    t16 = g->edx;
    wr32(sp0 - 0x18u, COW_IMG(0x103bc828u));
    g->esp = sp0 - 0x10u;
    t17 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc828u), COW_IMG(0x103b379cu));
    g->esi = rd32(sp0 - 8u);
    return t17 & 0xffffff00u;
L_1029ce10: ;
    COW_AT(1029ce10)
    wr32(sp0 - 0xcu, esi);
    wr32(sp0 - 0x10u, 1u);
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, sp0 + 8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 + 8u;
    g->esp = sp0 - 8u;
    t18 = cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 + 8u, 4u, 1u, esi);
    t19 = g->ecx;
    t20 = g->edx;
    if (t18 == 1u)
    {
        eax = t18;
        goto L_1029ce4d;
    }
    eax = t18;
    ecx = t19;
    edx = t20;
    COW_AT(1029ce27)
    wr32(sp0 - 0xcu, 0xeeu);
    wr32(sp0 - 0x10u, COW_IMG(0x103bc7fcu));
    wr32(sp0 - 0x14u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t21 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc7fcu));
    t22 = g->ecx;
    t23 = g->edx;
    wr32(sp0 - 0x18u, COW_IMG(0x103bc828u));
    g->esp = sp0 - 0x10u;
    t24 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc828u), COW_IMG(0x103b379cu));
    g->esi = rd32(sp0 - 8u);
    return t24 & 0xffffff00u;
L_1029ce4d: ;
    COW_AT(1029ce4d)
    t25 = rd8(sp0 - 1u);
    t26 = rd32(sp0 - 8u);
    wr8(COW_IMG(0x109a2828u), (uint8_t)t25);
    g->esi = t26;
    return ((eax | t25) & 0xffffff00u) | (uint8_t)(t25 | 0xffu);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1029cd60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1029cd73u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1029cd78u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1029cd95u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1029cdbbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1029cdcbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1029cdd3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1029cdeau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1029ce10u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1029ce27u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x18u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1029ce4du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x18u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1029cd60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1029cd60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
