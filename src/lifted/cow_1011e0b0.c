/* f_0x1011e0b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1011e0b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
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
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1011e0c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1011e0c7;
    case 0x1011e0d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011e0d4;
    case 0x1011e0e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011e0e7;
    case 0x1011e0eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011e0ee;
    case 0x1011e0f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011e0f7;
    case 0x1011e0feu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011e0fe;
    case 0x1011e137u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011e137;
    case 0x1011e14eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011e14e;
    case 0x1011e15au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1011e15a;
    case 0x1011e16cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1011e16c;
    case 0x1011e176u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011e176;
    case 0x1011e180u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1011e180;
    case 0x1011e187u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011e187;
    case 0x1011e18eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011e18e;
    case 0x1011e195u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011e195;
    case 0x1011e19cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011e19c;
    case 0x1011e19eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011e19e;
    case 0x1011e1a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011e1a0;
    case 0x1011e1aau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011e1aa;
    case 0x1011e1b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011e1b6;
    case 0x1011e1bau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011e1ba;
    case 0x1011e1c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011e1c4;
    case 0x1011e1cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011e1cb;
    case 0x1011e1d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011e1d1;
    case 0x1011e1deu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011e1de;
    case 0x1011e1e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011e1e9;
    default: break;
    }
#endif

    COW_AT(1011e0b0)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, 0x10u);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0x1cu, t1);
    wr32(sp0 - 0x20u, self + 0x24u);
    g->eax = self + 0x24u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x1011e200u), 7, self + 0x24u, t1, 0x10u, in_edi, in_esi, in_ebp, in_ebx);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    ebp = t1;
    loc_1c = rd32(sp0 - 0x1cu);
    COW_AT(1011e0c7)
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, ebp);
    wr32(sp0 - 0x2cu, sp0 - 4u);
    g->eax = eax;
    g->ecx = sp0 - 4u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x1011e200u), 7, sp0 - 4u, ebp, 1u, self + 0x24u, loc_1c, 0x10u, in_edi);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(1011e0d4)
    t7 = rd8(sp0 - 4u);
    wr32(sp0 + 4u, 0u);
    if ((uint8_t)t7 == 0u)
    {
        eax = (eax & 0xffffff00u) | t7;
        goto L_1011e14e;
    }
    eax = (eax & 0xffffff00u) | t7;
L_1011e0e7: ;
    COW_AT(1011e0e7)
    wr32(sp0 - 0x18u, 0x1cu);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t8 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1cu, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t9 = g->edx;
    eax = t8;
    edx = t9;
    COW_AT(1011e0ee)
    if (eax == 0u) goto L_1011e176;
    esi = eax;
    COW_AT(1011e0f7)
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10126320u), esi, 0);
    COW_AT(1011e0fe)
    edi = esi + 4u;
    eax = 0u;
    ecx = 6u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x18u, esi);
    t10 = rd32(ebp);
    wr32(esi + 4u, rd32(t10));
    t11 = rd32(t10 + 4u);
    wr32(esi + 8u, t11);
    t12 = rd32(t10 + 8u);
    wr32(esi + 0xcu, t12);
    t13 = rd32(t10 + 0xcu);
    wr32(esi + 0x10u, t13);
    t14 = rd32(ebp) + 0x10u;
    wr32(ebp, t14);
    g->edx = esi + 4u;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10126480u), self + 4u, 1, esi);
    t15 = g->edx;
    edx = t15;
    COW_AT(1011e137)
    t16 = rd32(sp0 + 4u) + 1u;
    t17 = rd32(sp0 - 4u);
    t18 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t16);
    if ((int32_t)(t18 + 1u) < (int32_t)(uint8_t)t17)
    {
        eax = t16;
        ecx = (uint8_t)t17;
        goto L_1011e0e7;
    }
    eax = t16;
    ecx = (uint8_t)t17;
L_1011e14e: ;
    COW_AT(1011e14e)
    wr32(sp0 - 0x18u, 2u);
    wr32(sp0 - 0x1cu, ebp);
    wr32(sp0 - 0x20u, self + 0x3cu);
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x1011e200u), 7, self + 0x3cu, ebp, 2u, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t19 = g->ecx;
    ecx = t19;
    COW_AT(1011e15a)
    t20 = rd16(self + 0x3cu) * 4u + 4u;
    wr32(sp0 - 0x24u, t20);
    g->eax = t20;
    t21 = rd16(self + 0x3cu);
    g->esp = sp0 - 0x18u;
    t22 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, t21, 1, 3, t20, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t23 = g->ecx;
    t24 = g->edx;
    eax = t22;
    ecx = t23;
    edx = t24;
    COW_AT(1011e16c)
    wr32(self + 0x20u, eax);
    if (eax != 0u) goto L_1011e180;
L_1011e176: ;
    COW_AT(1011e176)
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0xcu);
    return eax & 0xffffff00u;
L_1011e180: ;
    COW_AT(1011e180)
    if (rd16(self + 0x3cu) == 0u)
    {
        esi = 0u;
        goto L_1011e1e9;
    }
    esi = 0u;
L_1011e187: ;
    COW_AT(1011e187)
    wr32(sp0 - 0x18u, 0x28u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t25 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x28u, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t26 = g->edx;
    eax = t25;
    edx = t26;
    COW_AT(1011e18e)
    if (eax == 0u)
    {
    COW_AT(1011e19e)
        eax = 0u;
    }
    else
    {
    COW_AT(1011e195)
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t27 = cow_thiscall(g, COW_IMG(0x1011e2d0u), eax, 0);
        eax = t27;
    COW_AT(1011e19c)
    }
    COW_AT(1011e1a0)
    wr32(esi * 4u + rd32(self + 0x20u), eax);
    if (eax == 0u) goto L_1011e176;
    COW_AT(1011e1aa)
    wr32(sp0 - 0x18u, ebp);
    g->eax = eax;
    g->edx = rd32(self + 0x20u);
    t28 = rd32(esi * 4u + rd32(self + 0x20u));
    t29 = rd32(self + 0x20u);
    g->esp = sp0 - 0x14u;
    t30 = cow_thiscall(g, COW_IMG(0x1011e360u), t28, 1, ebp);
    t31 = g->ecx;
    t32 = g->edx;
    eax = t30;
    ecx = t31;
    edx = t32;
    COW_AT(1011e1b6)
    if ((uint8_t)eax == 0u)
    {
    COW_AT(1011e1ba)
        if (rd32(esi * 4u + rd32(self + 0x20u)) == 0u)
        {
            eax = rd32(self + 0x20u);
        }
        else
        {
            eax = rd32(self + 0x20u);
            edi = rd32(esi * 4u + rd32(self + 0x20u));
    COW_AT(1011e1c4)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t33 = cow_thiscall(g, COW_IMG(0x1011e2f0u), edi, 0);
            t34 = g->ecx;
            t35 = g->edx;
            eax = t33;
            ecx = t34;
            edx = t35;
    COW_AT(1011e1cb)
            wr32(sp0 - 0x18u, edi);
            g->eax = eax;
            g->esp = sp0 - 0x14u;
            t36 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, edi);
            eax = t36;
    COW_AT(1011e1d1)
            t37 = rd32(self + 0x20u);
            wr32(esi * 4u + t37, 0u);
            ecx = t37;
        }
    }
    COW_AT(1011e1de)
    if ((int32_t)(esi + 1u) < (int32_t)rd16(self + 0x3cu))
    {
        edx = rd16(self + 0x3cu);
        esi = esi + 1u;
        goto L_1011e187;
    }
    esi = esi + 1u;
L_1011e1e9: ;
    COW_AT(1011e1e9)
    t38 = rd32(self + 0x20u);
    t39 = rd32(sp0 - 0x14u);
    wr32(esi * 4u + t38, 0u);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = t39;
    g->ebp = rd32(sp0 - 0xcu);
    return (t38 & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1011e0b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1011e0c7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x20u, self + 0x24u);
        wr32(sp0 - 0x18u, 0x10u);
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1011e0d4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011e0e7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011e0eeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011e0f7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011e0feu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011e137u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011e14eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011e15au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        g->edi = self + 0x3cu;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011e16cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x24u;
        g->edi = self + 0x3cu;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011e176u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011e180u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->edi = self + 0x3cu;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011e187u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011e18eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011e195u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011e19cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011e19eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011e1a0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011e1aau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011e1b6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011e1bau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011e1c4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011e1cbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011e1d1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011e1deu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011e1e9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1011e0b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1011e0b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
