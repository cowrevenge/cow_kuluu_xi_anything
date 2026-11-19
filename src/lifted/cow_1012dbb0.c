/* f_0x1012dbb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1012dbb0(Guest* g)
{
    uint32_t eax;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1012dbc2u: in_eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1012dbc2;
    case 0x1012dbceu: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1012dbce;
    case 0x1012dbddu: in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1012dbdd;
    case 0x1012dbe4u: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1012dbe4;
    case 0x1012dc1du: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1012dc1d;
    case 0x1012dc56u: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1012dc56;
    case 0x1012dc8fu: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1012dc8f;
    case 0x1012dcc8u: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1012dcc8;
    case 0x1012dce1u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1012dce1;
    case 0x1012dcecu: self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1012dcec;
    case 0x1012dcf3u: self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1012dcf3;
    case 0x1012dd09u: edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1012dd09;
    case 0x1012dd2du: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1012dd2d;
    default: break;
    }
#endif

    COW_AT(1012dbb0)
    if (rd8(self + 0x14cu) != 0u) goto L_1012dce1;
    COW_AT(1012dbc2)
    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1012dd2d;
    }
    COW_AT(1012dbce)
    if ((uint32_t)(int16_t)arg2 - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_1012dd2d;
    }
    COW_AT(1012dbdd)
    t1 = rd32(COW_IMG(0x1012dd34u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1012dbe4u: goto L_1012dbe4;
    case 0x1012dc1du: goto L_1012dc1d;
    case 0x1012dc56u: goto L_1012dc56;
    case 0x1012dc8fu: goto L_1012dc8f;
    case 0x1012dcc8u: goto L_1012dcc8;
    case 0x1012dd2du: eax = (uint32_t)(int16_t)arg2 - 1u; edx = in_edx; goto L_1012dd2d;
    default: rt_fatal(g, COW_IMG(0x1012dbddu), "switch");
    }
    return 0;
L_1012dbe4: ;
    COW_AT(1012dbe4)
    t23 = rd32(self + 8u);
    wr8(self + 0x14cu, 1u);
    t24 = (uint32_t)(int16_t)rd16(t23 + 0x4cu);
    wr32(self + 0x148u, t24);
    wr8(t23 + 0x62u, 0u);
    g->esp = sp0 - 8u;
    t25 = cow_call_regs(g, COW_IMG(0x101c68a0u), t23, rd32(COW_IMG(0x10662da0u)), in_edx, 1, 0);
    t26 = rd32(self + 0x138u);
    g->edx = t26;
    t27 = cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, t26);
    t28 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t28;
    return t27;
L_1012dc1d: ;
    COW_AT(1012dc1d)
    t17 = rd32(self + 8u);
    wr8(self + 0x14cu, 1u);
    t18 = (uint32_t)(int16_t)rd16(t17 + 0x4cu);
    wr32(self + 0x148u, t18);
    wr8(t17 + 0x62u, 0u);
    g->esp = sp0 - 8u;
    t19 = cow_call_regs(g, COW_IMG(0x101c68a0u), t17, rd32(COW_IMG(0x10662da0u)), in_edx, 1, 0);
    t20 = rd32(self + 0x13cu);
    g->edx = t20;
    t21 = cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, t20);
    t22 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t22;
    return t21;
L_1012dc56: ;
    COW_AT(1012dc56)
    t11 = rd32(self + 8u);
    wr8(self + 0x14cu, 1u);
    t12 = (uint32_t)(int16_t)rd16(t11 + 0x4cu);
    wr32(self + 0x148u, t12);
    wr8(t11 + 0x62u, 0u);
    g->esp = sp0 - 8u;
    t13 = cow_call_regs(g, COW_IMG(0x101c68a0u), t11, rd32(COW_IMG(0x10662da0u)), in_edx, 1, 0);
    t14 = rd32(self + 0x140u);
    g->edx = t14;
    t15 = cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, t14);
    t16 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t16;
    return t15;
L_1012dc8f: ;
    COW_AT(1012dc8f)
    t5 = rd32(self + 8u);
    wr8(self + 0x14cu, 1u);
    t6 = (uint32_t)(int16_t)rd16(t5 + 0x4cu);
    wr32(self + 0x148u, t6);
    wr8(t5 + 0x62u, 0u);
    g->esp = sp0 - 8u;
    t7 = cow_call_regs(g, COW_IMG(0x101c68a0u), t5, rd32(COW_IMG(0x10662da0u)), in_edx, 1, 0);
    t8 = rd32(self + 0x144u);
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, t8);
    t10 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t10;
    return t9;
L_1012dcc8: ;
    COW_AT(1012dcc8)
    t2 = rd32(self + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t3 = cow_call_regs(g, COW_IMG(0x1015e790u), t2, COW_IMG(0x10621838u), g->edx, 0, 2, t2, 1u);
    t4 = g->edx;
    wr8(self + 0x14u, 1u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t4;
    return t3;
L_1012dce1: ;
    COW_AT(1012dce1)
    if ((uint32_t)(int16_t)arg1 - 1u > 5u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_1012dd2d;
    }
    COW_AT(1012dcec)
    t29 = rd32(COW_IMG(0x1012dd58u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t29 - RD)
    {
    case 0x1012dcf3u: goto L_1012dcf3;
    case 0x1012dd09u: goto L_1012dd09;
    default: rt_fatal(g, COW_IMG(0x1012dcecu), "switch");
    }
    return 0;
L_1012dcf3: ;
    COW_AT(1012dcf3)
    t35 = (self & 0xffff0000u) | rd16(self + 0x148u);
    g->ebx = 0u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t36 = cow_call_regs(g, COW_IMG(0x10118db0u), (uint32_t)(int16_t)arg1 - 1u, rd32(self + 8u), g->edx, 0, 2, t35, 0u);
    t37 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t37;
    return t36;
L_1012dd09: ;
    COW_AT(1012dd09)
    t30 = rd32(self + 8u);
    wr8(self + 0x14cu, 0u);
    wr8(t30 + 0x62u, 1u);
    g->esp = sp0 - 8u;
    t31 = cow_call_regs(g, COW_IMG(0x101c68a0u), (uint32_t)(int16_t)arg1 - 1u, rd32(COW_IMG(0x10662da0u)), t30, 1, 0);
    t32 = g->edx;
    g->edx = t32;
    t33 = cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, 0u);
    t34 = g->edx;
    eax = t33;
    edx = t34;
L_1012dd2d: ;
    COW_AT(1012dd2d)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1012dbb0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1012dbc2u:
    {
        uint32_t in_eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1012dbceu:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1012dbddu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1012dbe4u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1012dc1du:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1012dc56u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1012dc8fu:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1012dcc8u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012dce1u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1012dcecu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        g->ebx = 0u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1012dcf3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        g->ebx = 0u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1012dd09u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1012dd2du:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
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
void cow_adapter_1012dbb0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1012dbb0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
