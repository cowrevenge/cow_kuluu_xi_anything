/* f_0x101ea150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101ea150(Guest* g)
{
    double d25;
    double d29;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 92u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101ea162u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x28u); goto E_101ea162;
    case 0x101ea178u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x28u); goto E_101ea178;
    case 0x101ea1afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101ea1af;
    case 0x101ea1b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101ea1b1;
    case 0x101ea2d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_101ea2d0;
    case 0x101ea2e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_101ea2e8;
    default: break;
    }
#endif

    COW_AT(101ea150)
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t1 = cow_stdcall(g, COW_IMG(0x101e8880u), 0);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        goto L_101ea178;
    }
    edx = t2;
    COW_AT(101ea162)
    wr32(sp0 - 0x2cu, 1u);
    t3 = rd32(self + 8u);
    wr32(sp0 - 0x30u, t3);
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t4 = cow_call_regs(g, COW_IMG(0x1015e790u), t3, COW_IMG(0x10621838u), g->edx, 0, 2, t3, 1u);
    t5 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t5;
    return t4;
L_101ea178: ;
    COW_AT(101ea178)
    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_edi);
    wr32(sp0 - 0x34u, sp0 - 0x20u);
    t6 = rd32(self + 8u);
    t7 = rd32(self + 0x30u);
    wr16(sp0 - 0x20u, 0u);
    wr16(sp0 - 0x1eu, 0u);
    wr16(sp0 - 0x1cu, 0u);
    wr16(sp0 - 0x1au, 0u);
    g->esp = sp0 - 0x30u;
    cow_call_regs(g, COW_IMG(0x10118f70u), eax, t6, g->edx, 0, 1, sp0 - 0x20u);
    if ((int32_t)rd32(self + 0x30u) >= 4)
    {
        ecx = 4u;
        edi = eax + t7 * 4u + 4u;
        eax = rd32(self + 0x30u);
    }
    else
    {
        edi = eax + t7 * 4u + 4u;
        eax = rd32(self + 0x30u);
    COW_AT(101ea1af)
        ecx = eax;
    }
    COW_AT(101ea1b1)
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 0x80808080u);
    t8 = (uint32_t)(int16_t)rd16(sp0 - 0x1eu) + 8u;
    wr32(sp0 - 0x40u, t8);
    t9 = (uint32_t)(int16_t)rd16(sp0 - 0x20u) + 4u;
    wr32(sp0 - 0x44u, t9);
    g->edx = t9;
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(ecx * 4u + self + 0x18u), 5, t9, t8, 0x80808080u, 0u, 0u);
    t10 = g->edx;
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 0x80808080u);
    t11 = (uint32_t)(int16_t)rd16(sp0 - 0x1eu) + 6u;
    wr32(sp0 - 0x40u, t11);
    t12 = (uint32_t)(int16_t)rd16(sp0 - 0x20u) + 0x20u;
    wr32(sp0 - 0x44u, t12);
    cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + ((int32_t)eax >= 4) * 4u + 0x38u), 5, t12, t11, 0x80808080u, 0u, 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 0x80808080u);
    t13 = (uint32_t)(int16_t)rd16(sp0 - 0x1eu) + 0x14u;
    wr32(sp0 - 0x40u, t13);
    t14 = (uint32_t)(int16_t)rd16(sp0 - 0x20u) + 0x20u;
    wr32(sp0 - 0x44u, t14);
    g->eax = t14;
    t15 = rd32(self + rd32(self + 0x30u) * 4u + 0x40u);
    t16 = cow_thiscall(g, COW_IMG(0x1011fb60u), t15, 5, t14, t13, 0x80808080u, 0u, 0u);
    t17 = g->ecx;
    t18 = rd32(edi) & 0xfu;
    wr32(sp0 - 0x34u, t18);
    wr32(sp0 - 0x38u, 0x59u);
    wr32(sp0 - 0x3cu, 0xau);
    g->ecx = t17;
    g->edx = t18;
    g->esp = sp0 - 0x34u;
    t19 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x59u);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0x38u, t19);
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    g->ebx = (int32_t)eax >= 4;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, t19, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
    wr32(sp0 - 0x40u, 0x3f800000u);
    wr32(sp0 - 0x44u, 0x3f800000u);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, 0x80808080u);
    wr32(sp0 - 0x50u, sp0 - 0x10u);
    t22 = rd32(sp0 - 0x1eu) + 0x40u;
    wr32(sp0 - 0x54u, t22);
    t23 = rd32(sp0 - 0x1cu) - 0x10u;
    wr32(sp0 - 0x58u, t23);
    g->esp = sp0 - 0x3cu;
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 0x10u, 7, t23, t22, sp0 - 0x10u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    t24 = rd32(edi) >> 0x12u & 0x7fu;
    wr32(sp0 - 0x18u, t24);
    wr32(sp0 - 0x14u, 0u);
    d25 = (double)(float)(double)(int64_t)cow_i64(t24, 0u);
    wrf32(sp0 - 0x34u, (float)d25);
    t26 = rd32(sp0 - 0x1eu) + 0x5eu;
    wr32(sp0 - 0x38u, t26);
    t27 = rd32(sp0 - 0x20u) + 0x1du;
    wr32(sp0 - 0x3cu, t27);
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x101ea030u), self, 3, t27, t26, cow_f2bits(d25));
    wr32(sp0 - 0x14u, 0u);
    t28 = rd32(edi) >> 0x19u;
    wr32(sp0 - 0x18u, t28);
    wr32(sp0 - 0x34u, t28);
    d29 = (double)(float)(double)(int64_t)cow_i64(t28, 0u);
    wrf32(sp0 - 0x34u, (float)d29);
    t30 = rd32(sp0 - 0x1eu) + 0x7eu;
    wr32(sp0 - 0x38u, t30);
    t31 = rd32(sp0 - 0x20u) + 0x1du;
    wr32(sp0 - 0x3cu, t31);
    g->eax = t31;
    g->edx = t30;
    t32 = cow_thiscall(g, COW_IMG(0x101ea030u), self, 3, t31, t30, cow_f2bits(d29));
    t33 = g->edx;
    if (rd32(self + 0x34u) == 0u)
    {
        eax = t32;
        edx = t33;
        ebx = rd32(sp0 - 0x2cu);
        edi = rd32(sp0 - 0x30u);
    }
    else
    {
        ecx = rd32(self + 0x34u);
        ebx = rd32(sp0 - 0x2cu);
        edi = rd32(sp0 - 0x30u);
    COW_AT(101ea2d0)
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x30u, 0u);
        wr32(sp0 - 0x34u, 0x80808080u);
        t34 = (uint32_t)(int16_t)rd16(sp0 - 0x1eu);
        wr32(sp0 - 0x38u, t34);
        t35 = (uint32_t)(int16_t)rd16(sp0 - 0x20u);
        wr32(sp0 - 0x3cu, t35);
        g->eax = t35;
        g->edx = t34;
        g->esp = sp0 - 0x28u;
        t36 = cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, t35, t34, 0x80808080u, 0u, 0u);
        t37 = g->edx;
        eax = t36;
        edx = t37;
    }
    COW_AT(101ea2e8)
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x28u);
    g->edi = edi;
    g->ebp = rd32(sp0 - 0x24u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101ea150(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101ea162u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ea178u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x28u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101ea1afu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101ea1b1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101ea2d0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = 0u;
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101ea2e8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101ea150(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101ea150(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
