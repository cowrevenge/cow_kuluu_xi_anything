/* f_0x1010b200 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1010b200(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10b8;
    uint32_t loc_10bc;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 4304u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1010b2cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_10bc = rd32(sp0 - 0x10bcu); loc_10b8 = rd32(sp0 - 0x10b8u); goto E_1010b2cd;
    case 0x1010b2e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1010b2e7;
    case 0x1010b317u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1010b317;
    case 0x1010b347u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1010b347;
    case 0x1010b35bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1010b35b;
    case 0x1010b35du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1010b35d;
    case 0x1010b3a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_10bc = rd32(sp0 - 0x10bcu); loc_10b8 = rd32(sp0 - 0x10b8u); goto E_1010b3a3;
    default: break;
    }
#endif

    COW_AT(1010b200)
    wr32(sp0 - 0x10b8u, in_ebx);
    wr32(sp0 - 0x10bcu, in_esi);
    wr32(sp0 - 0x10c0u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10bcu;
    cow_thiscall(g, COW_IMG(0x10112550u), self, 1, 0u);
    t1 = g->edx;
    wr32(self + 0x10u, 0u);
    wr32(self + 0x18u, 0u);
    wr32(self + 0x14u, 0u);
    wr32(self + 0x1cu, 0u);
    wr32(self + 0x24u, 0u);
    wr32(self + 0x20u, 0u);
    wr32(self + 0x20u, self + 0x10u);
    wr32(self + 0x18u, self + 0x1cu);
    wr32(self + 8u, COW_IMG(0x10332e50u));
    wr8(self + 0xcu, 1u);
    wr16(self + 0xeu, 0u);
    wr32(self + 0x34u, 0u);
    wr32(self + 0x3cu, 0u);
    wr32(self + 0x38u, 0u);
    wr32(self + 0x40u, 0u);
    wr32(self + 0x48u, 0u);
    wr32(self + 0x44u, 0u);
    wr32(self + 0x44u, self + 0x34u);
    wr32(self + 0x3cu, self + 0x40u);
    wr32(self + 0x2cu, COW_IMG(0x10332e54u));
    wr8(self + 0x30u, 1u);
    wr16(self + 0x32u, 0u);
    wr32(self + 0x58u, 0u);
    wr32(self + 0x60u, 0u);
    wr32(self + 0x5cu, 0u);
    wr32(self + 0x64u, 0u);
    wr32(self + 0x6cu, 0u);
    wr32(self + 0x68u, 0u);
    wr32(self + 0x68u, self + 0x58u);
    wr32(self + 0x60u, self + 0x64u);
    wr32(self + 0x50u, COW_IMG(0x10332e58u));
    wr8(self + 0x54u, 1u);
    wr16(self + 0x56u, 0u);
    wr32(sp0 - 0x10c0u, arg1);
    wr32(self, COW_IMG(0x10332e5cu));
    g->eax = arg1;
    g->edx = (t1 & 0xffffff00u) | 1u;
    t2 = cow_thiscall(g, COW_IMG(0x1010c550u), sp0 - 0x1018u, 1, arg1);
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x10a8u, 0);
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_call_regs(g, COW_IMG(0x1010c590u), t4, sp0 - 0x1018u, g->edx, 1, 0);
    t7 = g->edx;
    if (t6 == 0u)
    {
        eax = t6;
        edx = t7;
        loc_10b8 = in_ebx;
        loc_10bc = in_esi;
        goto L_1010b3a3;
    }
    eax = t6;
    loc_10b8 = in_ebx;
    loc_10bc = in_esi;
L_1010b2cd: ;
    COW_AT(1010b2cd)
    wr32(sp0 - 0x10c0u, 0u);
    wr32(sp0 - 0x10c4u, sp0 - 0x10a8u);
    wr32(sp0 - 0x10c8u, 0x20u);
    wr32(sp0 - 0x10ccu, sp0 - 0x1098u);
    g->ebx = 0u;
    g->eax = eax;
    g->edx = sp0 - 0x1098u;
    g->esp = sp0 - 0x10bcu;
    t8 = cow_thiscall(g, COW_IMG(0x10109c60u), eax, 4, sp0 - 0x1098u, 0x20u, sp0 - 0x10a8u, 0u);
    t9 = g->edx;
    if ((uint16_t)t8 <= 2u)
    {
        eax = t8;
        edx = t9;
        goto L_1010b347;
    }
    edx = t9;
    COW_AT(1010b2e7)
    t10 = rd32(sp0 - 0x1098u);
    wr32(sp0 - 0x10c0u, t10);
    g->eax = t10;
    g->edx = edx;
    g->esp = sp0 - 0x10bcu;
    t11 = cow_thiscall(g, COW_IMG(0x10109120u), sp0 - 0x10a0u, 1, t10);
    t12 = g->edx;
    wr32(sp0 - 0x10c0u, COW_IMG(0x1036bf24u));
    g->ebx = 0u;
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x10109570u), t11, 1, COW_IMG(0x1036bf24u));
    t14 = g->edx;
    wr8(sp0 - 0x10b1u, t13 == 0u);
    g->edx = t14;
    t15 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x10a0u, 0);
    t16 = g->edx;
    if (rd8(sp0 - 0x10b1u) == 0u)
    {
        eax = t15;
        edx = t16;
        goto L_1010b347;
    }
    eax = t15;
    edx = t16;
    COW_AT(1010b317)
    t17 = rd32(sp0 - 0x1094u);
    wr32(sp0 - 0x10c0u, t17);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10bcu;
    t18 = cow_thiscall(g, COW_IMG(0x10109120u), sp0 - 0x10b0u, 1, t17);
    t19 = g->edx;
    wr32(sp0 - 0x10c0u, COW_IMG(0x1036bf1cu));
    g->ebx = 0u;
    g->edx = t19;
    t20 = cow_thiscall(g, COW_IMG(0x10109570u), t18, 1, COW_IMG(0x1036bf1cu));
    t21 = g->edx;
    wr8(sp0 - 0x10b1u, t20 == 0u);
    g->edx = t21;
    t22 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x10b0u, 0);
    t23 = g->ecx;
    t24 = g->edx;
    if (rd8(sp0 - 0x10b1u) != 0u)
    {
        eax = t22;
        ecx = t23;
        goto L_1010b35d;
    }
    eax = t22;
    edx = t24;
L_1010b347: ;
    COW_AT(1010b347)
    g->edx = edx;
    g->esp = sp0 - 0x10bcu;
    t36 = cow_call_regs(g, COW_IMG(0x1010c590u), eax, sp0 - 0x1018u, g->edx, 1, 0);
    t37 = g->edx;
    if (t36 != 0u)
    {
        eax = t36;
        loc_10b8 = rd32(sp0 - 0x10b8u);
        loc_10bc = rd32(sp0 - 0x10bcu);
        goto L_1010b2cd;
    }
    eax = t36;
    edx = t37;
    COW_AT(1010b35b)
    loc_10b8 = rd32(sp0 - 0x10b8u);
    loc_10bc = rd32(sp0 - 0x10bcu);
L_1010b3a3: ;
    COW_AT(1010b3a3)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10bcu;
    t38 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x10a8u, 0);
    t39 = g->edx;
    cow_fastcall(g, COW_IMG(0x1010c520u), sp0 - 0x1018u, t39, 0);
    g->ebx = rd32(sp0 - 0x10b8u);
    g->esi = rd32(sp0 - 0x10bcu);
    return self;
L_1010b35d: ;
    COW_AT(1010b35d)
    t25 = rd32(sp0 - 0x1090u);
    wr32(sp0 - 0x10c0u, t25);
    g->eax = eax;
    g->edx = t25;
    g->esp = sp0 - 0x10bcu;
    t26 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, t25);
    t27 = g->edx;
    wr32(self + 4u, t26);
    wr32(sp0 - 0x10c0u, COW_IMG(0x1036bf1cu));
    g->edx = t27;
    t28 = cow_thiscall(g, COW_IMG(0x10109140u), sp0 - 0x10b0u, 1, COW_IMG(0x1036bf1cu));
    t29 = g->edx;
    wr32(sp0 - 0x10c0u, t28);
    wr32(sp0 - 0x10c4u, sp0 - 0x1018u);
    wr32(sp0 - 0x10c8u, arg2);
    g->eax = sp0 - 0x1018u;
    g->edx = t29;
    t30 = cow_thiscall(g, COW_IMG(0x101125b0u), self, 3, arg2, sp0 - 0x1018u, t28);
    t31 = g->edx;
    g->edx = t31;
    t32 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x10b0u, 0);
    t33 = g->edx;
    g->edx = t33;
    t34 = cow_thiscall(g, COW_IMG(0x1010b6d0u), self, 0);
    t35 = g->edx;
    eax = t34;
    edx = t35;
    loc_10b8 = rd32(sp0 - 0x10b8u);
    loc_10bc = rd32(sp0 - 0x10bcu);
    goto L_1010b3a3;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1010b200(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1010b2cdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10b8;
        uint32_t loc_10bc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_10bc = rd32(sp0 - 0x10bcu);
        loc_10b8 = rd32(sp0 - 0x10b8u);
        g->esp = sp0 - 0x10bcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1010b2e7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x10bcu;
        g->ebx = 0u;
        wr32(sp0 - 0x10ccu, sp0 - 0x1098u);
        wr32(sp0 - 0x10c4u, sp0 - 0x10a8u);
        (void)sp0;
        return 1;
    }
    case 0x1010b317u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x10bcu;
        g->ebx = 0u;
        wr32(sp0 - 0x10ccu, sp0 - 0x1098u);
        wr32(sp0 - 0x10c4u, sp0 - 0x10a8u);
        (void)sp0;
        return 1;
    }
    case 0x1010b347u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x10bcu;
        g->ebx = 0u;
        wr32(sp0 - 0x10ccu, sp0 - 0x1098u);
        wr32(sp0 - 0x10c4u, sp0 - 0x10a8u);
        (void)sp0;
        return 1;
    }
    case 0x1010b35bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x10bcu;
        wr32(sp0 - 0x10ccu, sp0 - 0x1098u);
        wr32(sp0 - 0x10c4u, sp0 - 0x10a8u);
        (void)sp0;
        return 1;
    }
    case 0x1010b35du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x10bcu;
        wr32(sp0 - 0x10ccu, sp0 - 0x1098u);
        wr32(sp0 - 0x10c4u, sp0 - 0x10a8u);
        (void)sp0;
        return 1;
    }
    case 0x1010b3a3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10b8;
        uint32_t loc_10bc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_10bc = rd32(sp0 - 0x10bcu);
        loc_10b8 = rd32(sp0 - 0x10b8u);
        g->esp = sp0 - 0x10bcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1010b200(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1010b200(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
