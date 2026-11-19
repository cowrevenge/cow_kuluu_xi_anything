/* f_0x101dde60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101dde60(Guest* g)
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
    case 0x101dde72u: in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101dde72;
    case 0x101dde81u: in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101dde81;
    case 0x101dde94u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101dde94;
    case 0x101dde98u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101dde98;
    case 0x101ddea8u: in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101ddea8;
    case 0x101ddebfu: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101ddebf;
    case 0x101ddec3u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101ddec3;
    case 0x101dded3u: in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101dded3;
    case 0x101ddef0u: in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101ddef0;
    case 0x101ddf01u: in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101ddf01;
    case 0x101ddf12u: in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101ddf12;
    case 0x101ddf23u: in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101ddf23;
    case 0x101ddf34u: edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101ddf34;
    case 0x101ddf45u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101ddf45;
    default: break;
    }
#endif

    COW_AT(101dde60)
    if ((uint32_t)(int16_t)arg1 - 1u > 0x11u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_101ddf45;
    }
    COW_AT(101dde72)
    t1 = rd32(COW_IMG(0x101ddf4cu) + rd8(COW_IMG(0x101ddf70u) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t1 - RD)
    {
    case 0x101dde81u: goto L_101dde81;
    case 0x101ddea8u: goto L_101ddea8;
    case 0x101dded3u: goto L_101dded3;
    case 0x101ddef0u: goto L_101ddef0;
    case 0x101ddf01u: goto L_101ddf01;
    case 0x101ddf12u: goto L_101ddf12;
    case 0x101ddf23u: goto L_101ddf23;
    case 0x101ddf34u: goto L_101ddf34;
    case 0x101ddf45u: eax = (uint32_t)(int16_t)arg1 - 1u; edx = in_edx; goto L_101ddf45;
    default: rt_fatal(g, COW_IMG(0x101dde7au), "switch");
    }
    return 0;
L_101dde81: ;
    COW_AT(101dde81)
    g->esp = sp0 - 4u;
    t25 = cow_call_regs(g, COW_IMG(0x101dd1c0u), (uint32_t)(int16_t)arg1 - 1u, self, g->edx, 0, 1, 1u);
    t26 = rd8(self + 0x15u);
    wr8(self + 0x15u, (uint8_t)(t26 - 1u));
    if ((int8_t)(t26 - 1u) >= 0)
    {
        eax = (t25 & 0xffffff00u) | (uint8_t)(t26 - 1u);
    }
    else
    {
        eax = (t25 & 0xffffff00u) | (uint8_t)(t26 - 1u);
    COW_AT(101dde94)
        wr8(self + 0x15u, 0u);
    }
    COW_AT(101dde98)
    t27 = (uint32_t)(int8_t)rd8(self + 0x15u);
    g->eax = eax;
    g->edx = t27;
    g->esp = sp0 - 4u;
    t28 = cow_thiscall(g, COW_IMG(0x101dd0b0u), self, 1, t27);
    t29 = g->edx;
    g->esi = in_esi;
    g->edx = t29;
    return t28;
L_101ddea8: ;
    COW_AT(101ddea8)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t18 = cow_call_regs(g, COW_IMG(0x101dd1c0u), (uint32_t)(int16_t)arg1 - 1u, self, g->edx, 0, 1, 1u);
    t19 = g->ecx;
    t20 = g->edx;
    t21 = rd8(self + 0x15u);
    wr8(self + 0x15u, (uint8_t)(t21 + 1u));
    if ((int8_t)(t21 + 1u) < 3)
    {
        edx = t20;
    }
    else
    {
        edx = t20;
    COW_AT(101ddebf)
        wr8(self + 0x15u, 2u);
    }
    COW_AT(101ddec3)
    t22 = (uint32_t)(int8_t)rd8(self + 0x15u);
    g->eax = t22;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t23 = cow_thiscall(g, COW_IMG(0x101dd0b0u), self, 1, t22);
    t24 = g->edx;
    g->esi = in_esi;
    g->edx = t24;
    return t23;
L_101dded3: ;
    COW_AT(101dded3)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t13 = cow_call_regs(g, COW_IMG(0x101dd1c0u), (uint32_t)(int16_t)arg1 - 1u, self, g->edx, 0, 1, 1u);
    t14 = g->edx;
    t15 = rd32(self + 8u);
    g->edx = t14;
    t16 = cow_call_regs(g, COW_IMG(0x1015e790u), t13, COW_IMG(0x10621838u), g->edx, 0, 2, t15, 1u);
    t17 = g->edx;
    g->esi = in_esi;
    g->edx = t17;
    return t16;
L_101ddef0: ;
    COW_AT(101ddef0)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t11 = cow_call_regs(g, COW_IMG(0x101c6920u), (uint32_t)(int16_t)arg1 - 1u, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 1u);
    t12 = g->edx;
    g->esi = in_esi;
    g->edx = t12;
    return t11;
L_101ddf01: ;
    COW_AT(101ddf01)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t9 = cow_call_regs(g, COW_IMG(0x101c6920u), (uint32_t)(int16_t)arg1 - 1u, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 4u);
    t10 = g->edx;
    g->esi = in_esi;
    g->edx = t10;
    return t9;
L_101ddf12: ;
    COW_AT(101ddf12)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x101c6920u), (uint32_t)(int16_t)arg1 - 1u, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 5u);
    t8 = g->edx;
    g->esi = in_esi;
    g->edx = t8;
    return t7;
L_101ddf23: ;
    COW_AT(101ddf23)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t5 = cow_call_regs(g, COW_IMG(0x101c6920u), (uint32_t)(int16_t)arg1 - 1u, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 3u);
    t6 = g->edx;
    g->esi = in_esi;
    g->edx = t6;
    return t5;
L_101ddf34: ;
    COW_AT(101ddf34)
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = rd32(rd32(COW_IMG(0x10662d40u)));
    t2 = rd32(rd32(COW_IMG(0x10662d40u)));
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, rd32(t2 + 8u), rd32(COW_IMG(0x10662d40u)), 3, 2u, 0u, 0u);
    t4 = g->edx;
    eax = t3;
    edx = t4;
L_101ddf45: ;
    COW_AT(101ddf45)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101dde60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101dde72u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101dde81u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101dde94u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101dde98u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101ddea8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101ddebfu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101ddec3u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101dded3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101ddef0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101ddf01u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101ddf12u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101ddf23u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101ddf34u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t in_esi;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101ddf45u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
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
void cow_adapter_101dde60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101dde60(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
