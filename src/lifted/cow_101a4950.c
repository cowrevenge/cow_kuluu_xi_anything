/* f_0x101a4950 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101a4950(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t loc_4;
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101a4970u: eax = g->eax; in_edx = g->edx; ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_101a4970;
    case 0x101a4977u: eax = g->eax; in_edx = g->edx; ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_101a4977;
    case 0x101a49a4u: eax = g->eax; in_edx = g->edx; ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_101a49a4;
    case 0x101a49ccu: eax = g->eax; in_edx = g->edx; ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_101a49cc;
    case 0x101a4a06u: eax = g->eax; in_edx = g->edx; ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_101a4a06;
    case 0x101a4a19u: eax = g->eax; ebx = g->ebx; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_101a4a19;
    case 0x101a4a48u: eax = g->eax; ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_101a4a48;
    default: break;
    }
#endif

    COW_AT(101a4950)
    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 7u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
        loc_4 = (self & 0xffffff00u) | (uint8_t)(rd8(rd32(self + 8u) + 0x4cu) - 1u);
        goto L_101a4a48;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    ebx = (in_ebx & 0xffffff00u) | (uint8_t)(rd8(rd32(self + 8u) + 0x4cu) - 1u);
    loc_4 = (self & 0xffffff00u) | (uint8_t)(rd8(rd32(self + 8u) + 0x4cu) - 1u);
    COW_AT(101a4970)
    t1 = rd32(COW_IMG(0x101a4a5cu) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x101a4977u: goto L_101a4977;
    case 0x101a49a4u: goto L_101a49a4;
    case 0x101a49ccu: goto L_101a49cc;
    case 0x101a4a06u: goto L_101a4a06;
    case 0x101a4a19u: goto L_101a4a19;
    case 0x101a4a48u: goto L_101a4a48;
    default: rt_fatal(g, COW_IMG(0x101a4970u), "switch");
    }
    return 0;
L_101a4977: ;
    COW_AT(101a4977)
    g->ebx = ebx;
    g->esp = sp0 - 0xcu;
    t24 = cow_call_regs(g, COW_IMG(0x101a45c0u), eax, rd32(self + 0x24u), in_edx, 0, 1, loc_4);
    g->edx = (uint32_t)(int8_t)ebx;
    g->esp = sp0 - 0x10u;
    t25 = cow_thiscall(g, COW_IMG(0x101a1c30u), rd32(self + 0x20u), 1, (uint32_t)(int8_t)ebx);
    t26 = g->edx;
    g->edx = t26;
    g->esp = sp0 - 0xcu;
    t27 = cow_thiscall(g, COW_IMG(0x10150cd0u), rd32(COW_IMG(0x1057847cu)), 2, t25, 2u);
    t28 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t28;
    return t27;
L_101a49a4: ;
    COW_AT(101a49a4)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t21 = cow_stdcall(g, COW_IMG(0x101a4590u), 0);
    t22 = g->edx;
    t23 = rd32(COW_IMG(0x1057847cu));
    wr32(sp0 + 8u, 2u);
    wr32(sp0 + 4u, 0u);
    g->esp = sp0;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t22;
    return cow_tailcall(g, COW_IMG(0x10150cc0u), t21, t23, t22);
L_101a49cc: ;
    COW_AT(101a49cc)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t12 = cow_thiscall(g, COW_IMG(0x101a2a70u), rd32(self + 0x20u), 1, 2u);
    t13 = g->edx;
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x101a47d0u), rd32(COW_IMG(0x106627acu)), 0);
    t15 = g->edx;
    g->edx = t15;
    t16 = cow_thiscall(g, COW_IMG(0x101a4e80u), rd32(COW_IMG(0x106627b0u)), 0);
    t17 = g->edx;
    g->edx = t17;
    cow_thiscall(g, COW_IMG(0x101a47e0u), self, 0);
    t18 = g->edx;
    g->ebx = ebx;
    g->edx = t18;
    t19 = cow_call_regs(g, COW_IMG(0x101a4540u), loc_4, rd32(self + 0x24u), g->edx, 0, 1, loc_4);
    t20 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t20;
    return t19;
L_101a4a06: ;
    COW_AT(101a4a06)
    g->ebx = ebx;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_call_regs(g, COW_IMG(0x101a4540u), eax, rd32(self + 0x24u), g->edx, 0, 1, loc_4);
    t11 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t11;
    return t10;
L_101a4a19: ;
    COW_AT(101a4a19)
    t2 = rd32(COW_IMG(0x106627b8u));
    wr8(t2 + 0x1cu, 1u);
    wr32(t2 + 0x18u, (uint32_t)(int8_t)ebx);
    t3 = rd32(rd32(COW_IMG(0x106627b8u)) + 8u);
    g->eax = rd32(COW_IMG(0x106627b8u));
    t4 = rd32(COW_IMG(0x106627b8u));
    g->esp = sp0 - 0xcu;
    t5 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), (uint32_t)(int8_t)ebx, 2, t3, 0u);
    t6 = g->ecx;
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x10037e90u), t6, 0);
    t9 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t9;
    return t8;
L_101a4a48: ;
    COW_AT(101a4a48)
    g->esp = sp0 - 0xcu;
    t29 = cow_call_regs(g, COW_IMG(0x101a4480u), eax, rd32(self + 0x24u), loc_4, 0, 1, loc_4);
    t30 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t30;
    return t29;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101a4950(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101a4970u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101a4977u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101a49a4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101a49ccu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101a4a06u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101a4a19u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t in_ebx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101a4a48u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101a4950(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101a4950(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
