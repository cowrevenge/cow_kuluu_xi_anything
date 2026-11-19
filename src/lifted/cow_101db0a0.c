/* f_0x101db0a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101db0a0(Guest* g)
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
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101db0aau: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101db0aa;
    case 0x101db0bau: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101db0ba;
    case 0x101db0c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101db0c2;
    case 0x101db0cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101db0cb;
    case 0x101db0d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101db0d2;
    case 0x101db0e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101db0e2;
    case 0x101db0f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101db0f2;
    case 0x101db102u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101db102;
    case 0x101db112u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101db112;
    case 0x101db122u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101db122;
    case 0x101db132u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101db132;
    case 0x101db142u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101db142;
    case 0x101db152u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101db152;
    case 0x101db162u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101db162;
    case 0x101db172u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101db172;
    case 0x101db182u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101db182;
    case 0x101db192u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101db192;
    case 0x101db1a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101db1a2;
    case 0x101db1b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101db1b2;
    case 0x101db1c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101db1c2;
    case 0x101db1d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101db1d2;
    default: break;
    }
#endif

    COW_AT(101db0a0)
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    t2 = cow_thiscall(g, rd32(t1 + 0x64u), self, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 1u)
    {
        ecx = t3;
        edx = t4;
    COW_AT(101db0ba)
        eax = rd32(rd32(COW_IMG(0x10663740u)) + 0x64u);
    }
    else
    {
        eax = t2;
    COW_AT(101db0aa)
        g->eax = eax;
        g->edx = rd32(rd32(rd32(COW_IMG(0x10663468u)) + 0x58u));
        t5 = rd32(rd32(COW_IMG(0x10663468u)) + 0x58u);
        t6 = rd32(rd32(rd32(COW_IMG(0x10663468u)) + 0x58u));
        g->esp = sp0;
        t7 = cow_thiscall(g, rd32(t6 + 0x54u), t5, 0);
        t8 = g->ecx;
        t9 = g->edx;
        eax = t7;
        ecx = t8;
        edx = t9;
    }
    COW_AT(101db0c2)
    if (eax > 0x10u) goto L_101db1d2;
    COW_AT(101db0cb)
    t10 = rd32(COW_IMG(0x101db1d8u) + eax * 4u);
    switch (t10 - RD)
    {
    case 0x101db0d2u: goto L_101db0d2;
    case 0x101db0e2u: goto L_101db0e2;
    case 0x101db0f2u: goto L_101db0f2;
    case 0x101db102u: goto L_101db102;
    case 0x101db112u: goto L_101db112;
    case 0x101db122u: goto L_101db122;
    case 0x101db132u: goto L_101db132;
    case 0x101db142u: goto L_101db142;
    case 0x101db152u: goto L_101db152;
    case 0x101db162u: goto L_101db162;
    case 0x101db172u: goto L_101db172;
    case 0x101db182u: goto L_101db182;
    case 0x101db192u: goto L_101db192;
    case 0x101db1a2u: goto L_101db1a2;
    case 0x101db1b2u: goto L_101db1b2;
    case 0x101db1c2u: goto L_101db1c2;
    case 0x101db1d2u: goto L_101db1d2;
    default: rt_fatal(g, COW_IMG(0x101db0cbu), "switch");
    }
    return 0;
L_101db0d2: ;
    COW_AT(101db0d2)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t41 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x42du);
    t42 = g->edx;
    g->edx = t42;
    return t41;
L_101db0e2: ;
    COW_AT(101db0e2)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t39 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x42eu);
    t40 = g->edx;
    g->edx = t40;
    return t39;
L_101db0f2: ;
    COW_AT(101db0f2)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t37 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x42fu);
    t38 = g->edx;
    g->edx = t38;
    return t37;
L_101db102: ;
    COW_AT(101db102)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t35 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x430u);
    t36 = g->edx;
    g->edx = t36;
    return t35;
L_101db112: ;
    COW_AT(101db112)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t33 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x431u);
    t34 = g->edx;
    g->edx = t34;
    return t33;
L_101db122: ;
    COW_AT(101db122)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t31 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x432u);
    t32 = g->edx;
    g->edx = t32;
    return t31;
L_101db132: ;
    COW_AT(101db132)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t29 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x433u);
    t30 = g->edx;
    g->edx = t30;
    return t29;
L_101db142: ;
    COW_AT(101db142)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t27 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x434u);
    t28 = g->edx;
    g->edx = t28;
    return t27;
L_101db152: ;
    COW_AT(101db152)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t25 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x435u);
    t26 = g->edx;
    g->edx = t26;
    return t25;
L_101db162: ;
    COW_AT(101db162)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t23 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x436u);
    t24 = g->edx;
    g->edx = t24;
    return t23;
L_101db172: ;
    COW_AT(101db172)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t21 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x437u);
    t22 = g->edx;
    g->edx = t22;
    return t21;
L_101db182: ;
    COW_AT(101db182)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t19 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x438u);
    t20 = g->edx;
    g->edx = t20;
    return t19;
L_101db192: ;
    COW_AT(101db192)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t17 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x439u);
    t18 = g->edx;
    g->edx = t18;
    return t17;
L_101db1a2: ;
    COW_AT(101db1a2)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t15 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x43au);
    t16 = g->edx;
    g->edx = t16;
    return t15;
L_101db1b2: ;
    COW_AT(101db1b2)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x43bu);
    t14 = g->edx;
    g->edx = t14;
    return t13;
L_101db1c2: ;
    COW_AT(101db1c2)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t11 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x43cu);
    t12 = g->edx;
    g->edx = t12;
    return t11;
L_101db1d2: ;
    COW_AT(101db1d2)
    g->edx = edx;
    return COW_IMG(0x1034f2b8u);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101db0a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101db0aau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101db0bau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101db0c2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101db0cbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101db0d2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101db0e2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101db0f2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101db102u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101db112u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101db122u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101db132u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101db142u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101db152u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101db162u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101db172u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101db182u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101db192u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101db1a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101db1b2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101db1c2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101db1d2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101db0a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101db0a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
