/* f_0x100ac390 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100ac390(Guest* g)
{
    double d39;
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
    uint32_t t38;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 232u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100ac493u: eax = g->eax; edx = g->edx; in_esi = g->esi; goto E_100ac493;
    case 0x100ac4b8u: eax = g->eax; edx = g->edx; in_esi = g->esi; goto E_100ac4b8;
    default: break;
    }
#endif

    COW_AT(100ac390)
    wr32(sp0 - 0xc4u, in_esi);
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 0xc4u;
    t2 = cow_thiscall(g, rd32(t1 + 0x1bcu), self, 0);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 - 0xc8u, t2);
    wr32(sp0 - 0xccu, arg1);
    g->edx = t4;
    t5 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, arg1, t2);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x80u, 0);
    t10 = g->edx;
    g->edx = t10;
    t11 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0xc0u, 0);
    t12 = g->edx;
    wr32(sp0 - 0xc8u, sp0 - 0x80u);
    wr32(sp0 - 0xccu, 2u);
    t13 = cow_thiscall(g, COW_IMG(0x1000bdb0u), rd32(COW_IMG(0x1045666cu)), 2, 2u, sp0 - 0x80u);
    wr32(sp0 - 0xc8u, sp0 - 0x40u);
    wr32(sp0 - 0xccu, 0x100u);
    g->edx = sp0 - 0x40u;
    t14 = cow_thiscall(g, COW_IMG(0x1000bdb0u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, sp0 - 0x40u);
    t15 = g->edx;
    g->edx = t15;
    t16 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0xc0u, 0);
    t17 = g->edx;
    wr32(sp0 - 0xc8u, arg1);
    g->edx = t17;
    t18 = cow_thiscall(g, COW_IMG(0x10027cf0u), sp0 - 0xc0u, 1, arg1);
    t19 = g->ecx;
    t20 = g->edx;
    g->edx = t20;
    t21 = cow_stdcall(g, COW_IMG(0x10015220u), 0);
    t22 = g->edx;
    wr32(sp0 - 0xc8u, t21);
    wr32(sp0 - 0xccu, 2u);
    g->edx = t22;
    cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 2u, t21);
    t23 = g->edx;
    wr32(sp0 - 0xc8u, sp0 - 0xc0u);
    wr32(sp0 - 0xccu, 0x100u);
    g->eax = sp0 - 0xc0u;
    g->edx = t23;
    t24 = rd32(COW_IMG(0x1045666cu));
    t25 = cow_thiscall(g, COW_IMG(0x1000bd50u), t24, 2, 0x100u, sp0 - 0xc0u);
    t26 = g->ecx;
    t27 = g->edx;
    wr32(sp0 - 0xc8u, 0x3f800000u);
    wr32(sp0 - 0xccu, 0u);
    wr32(sp0 - 0xd0u, 0u);
    wr32(sp0 - 0xd4u, 0u);
    wr32(sp0 - 0xd8u, arg1);
    g->ecx = t26;
    g->edx = t27;
    t28 = cow_cdecl(g, COW_IMG(0x10026e30u), 5, arg1, 0u, 0u, 0u, 0x3f800000u);
    t29 = g->ecx;
    t30 = g->edx;
    wr32(sp0 - 0xdcu, arg1);
    wr32(sp0 - 0xe0u, arg1);
    g->ecx = t29;
    g->edx = t30;
    g->esp = sp0 - 0xd8u;
    t31 = cow_cdecl(g, COW_IMG(0x100276f0u), 2, arg1, arg1);
    t32 = g->ecx;
    t33 = g->edx;
    wr32(sp0 - 0xe4u, arg1);
    g->edx = t33;
    g->esp = sp0 - 0xe0u;
    t34 = cow_cdecl(g, COW_IMG(0x100278e0u), 1, arg1);
    t35 = g->edx;
    wr32(sp0 - 0xc8u, sp0 - 0x80u);
    wr32(sp0 - 0xccu, 2u);
    g->esp = sp0 - 0xc4u;
    t36 = cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 2u, sp0 - 0x80u);
    wr32(sp0 - 0xc8u, sp0 - 0x40u);
    wr32(sp0 - 0xccu, 0x100u);
    g->edx = sp0 - 0x40u;
    t37 = cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, sp0 - 0x40u);
    t38 = g->edx;
    d39 = (double)rdf32(arg1 + 0xcu);
    if (!(d39 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t37 & 0xffff0000u) | (uint16_t)cow_fsw(g, d39, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t38;
        goto L_100ac4b8;
    }
    eax = (t37 & 0xffff0000u) | (uint16_t)cow_fsw(g, d39, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    edx = t38;
    COW_AT(100ac493)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xc0u;
    t40 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t41 = g->edx;
    g->edx = t41;
    t42 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t43 = g->edx;
    g->edx = t43;
    t44 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t45 = g->edx;
    g->esi = in_esi;
    g->edx = t45;
    return t44 & 0xffffff00u;
L_100ac4b8: ;
    COW_AT(100ac4b8)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xc0u;
    t46 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t47 = g->edx;
    g->edx = t47;
    t48 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t49 = g->edx;
    g->edx = t49;
    t50 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t51 = g->edx;
    g->esi = in_esi;
    g->edx = t51;
    return (t50 & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100ac390(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100ac493u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0xc0u;
        g->ecx = sp0 - 0xc0u;
        wr32(sp0 - 0xc8u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100ac4b8u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0xc0u;
        g->ecx = sp0 - 0xc0u;
        wr32(sp0 - 0xc8u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100ac390(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100ac390(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
