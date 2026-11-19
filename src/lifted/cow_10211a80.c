/* f_0x10211a80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10211a80(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_84;
    uint32_t loc_ac;
    uint32_t loc_b0;
    uint32_t loc_b4;
    uint32_t loc_b8;
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
    uint32_t t52;
    uint32_t t53;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 232u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10211a9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_84 = rd32(sp0 - 0x84u); goto E_10211a9d;
    case 0x10211acau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10211aca;
    case 0x10211b72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10211b72;
    case 0x10211b76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10211b76;
    case 0x10211b83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10211b83;
    case 0x10211ba3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10211ba3;
    case 0x10211babu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10211bab;
    case 0x10211bafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10211baf;
    case 0x10211bb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10211bb9;
    case 0x10211bc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10211bc3;
    case 0x10211bc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10211bc7;
    case 0x10211bccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10211bcc;
    case 0x10211bd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10211bd0;
    case 0x10211beau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_84 = rd32(sp0 - 0x84u); goto E_10211bea;
    case 0x10211bf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10211bf9;
    case 0x10211c04u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; cf = g->cf; goto E_10211c04;
    case 0x10211c0fu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10211c0f;
    case 0x10211c1eu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; cf = g->cf; goto E_10211c1e;
    case 0x10211c3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10211c3c;
    case 0x10211c4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10211c4b;
    case 0x10211c4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10211c4d;
    default: break;
    }
#endif

    COW_AT(10211a80)
    wr32(sp0 - 0xacu, in_ebx);
    wr32(sp0 - 0xb0u, in_ebp);
    wr32(sp0 - 0xb4u, in_esi);
    wr32(sp0 - 0xb8u, in_edi);
    wr32(sp0 - 0x84u, 0u);
    if ((int32_t)rd32(self + 0x10u) <= 0)
    {
        edx = in_edx;
        loc_ac = in_ebx;
        loc_b0 = in_ebp;
        loc_b4 = in_esi;
        loc_b8 = in_edi;
        goto L_10211bea;
    }
    edx = in_edx;
    edi = 0u;
    loc_ac = in_ebx;
    loc_b0 = in_ebp;
    loc_b4 = in_esi;
    loc_b8 = in_edi;
    loc_84 = 0u;
L_10211a9d: ;
    COW_AT(10211a9d)
    wr32(sp0 - 0xbcu, 0xeu);
    wr32(sp0 - 0xc0u, edi);
    wr32(sp0 - 0xc4u, sp0 - 0xa8u);
    g->eax = sp0 - 0xa8u;
    g->edx = edx;
    g->esp = sp0 - 0xb8u;
    t1 = cow_thiscall(g, COW_IMG(0x10211490u), self, 3, sp0 - 0xa8u, edi, 0xeu);
    t2 = g->edx;
    wr32(sp0 - 0xbcu, 0x10u);
    wr32(sp0 - 0xc0u, edi + t1);
    wr32(sp0 - 0xc4u, sp0 - 0x98u);
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x10211490u), self, 3, sp0 - 0x98u, edi + t1, 0x10u);
    t4 = g->ecx;
    t5 = g->edx;
    if (rd8(self + 0x15u) == 0u)
    {
        edx = t5;
        edi = edi + t1 + t3;
    COW_AT(10211b72)
        ebx = rd32(sp0 - 0x90u);
    }
    else
    {
        eax = (t3 & 0xffffff00u) | rd8(self + 0x15u);
        ecx = t4;
        edi = edi + t1 + t3;
    COW_AT(10211aca)
        t6 = rd32(sp0 - 0xa8u);
        wr32(sp0 - 0xbcu, t6);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = t6;
        g->esp = sp0 - 0xb8u;
        t7 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, t6);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(sp0 - 0xa8u, t7);
        t10 = rd32(sp0 - 0xa4u);
        wr32(sp0 - 0xc0u, t10);
        g->eax = t10;
        g->edx = t9;
        g->esp = sp0 - 0xbcu;
        t11 = cow_cdecl(g, COW_IMG(0x1000d0f0u), 1, t10);
        t12 = g->edx;
        t13 = rd32(sp0 - 0xa2u);
        wr16(sp0 - 0xa4u, (uint16_t)t11);
        wr32(sp0 - 0xc4u, t13);
        g->ecx = t13;
        g->esp = sp0 - 0xc0u;
        t14 = cow_cdecl(g, COW_IMG(0x1000d0f0u), 1, t13);
        t15 = g->ecx;
        t16 = rd32(sp0 - 0xa0u);
        wr16(sp0 - 0xa2u, (uint16_t)t14);
        wr32(sp0 - 0xc8u, t16);
        g->ecx = t15;
        g->edx = t16;
        g->esp = sp0 - 0xc4u;
        t17 = cow_cdecl(g, COW_IMG(0x1000d0f0u), 1, t16);
        t18 = g->ecx;
        t19 = g->edx;
        wr16(sp0 - 0xa0u, (uint16_t)t17);
        t20 = rd32(sp0 - 0x9eu);
        wr32(sp0 - 0xccu, t20);
        g->eax = t20;
        g->edx = t19;
        g->esp = sp0 - 0xc8u;
        t21 = cow_cdecl(g, COW_IMG(0x1000d0f0u), 1, t20);
        t22 = g->edx;
        t23 = rd32(sp0 - 0x9cu);
        wr16(sp0 - 0x9eu, (uint16_t)t21);
        wr32(sp0 - 0xd0u, t23);
        g->ecx = t23;
        g->esp = sp0 - 0xccu;
        t24 = cow_cdecl(g, COW_IMG(0x1000d0f0u), 1, t23);
        t25 = g->ecx;
        t26 = rd32(sp0 - 0x98u);
        wr16(sp0 - 0x9cu, (uint16_t)t24);
        wr32(sp0 - 0xd4u, t26);
        g->ecx = t25;
        g->edx = t26;
        g->esp = sp0 - 0xd0u;
        t27 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, t26);
        t28 = g->ecx;
        t29 = g->edx;
        wr32(sp0 - 0x98u, t27);
        t30 = rd32(sp0 - 0x94u);
        wr32(sp0 - 0xd8u, t30);
        g->eax = t30;
        g->edx = t29;
        g->esp = sp0 - 0xd4u;
        t31 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, t30);
        t32 = g->edx;
        wr32(sp0 - 0x94u, t31);
        t33 = rd32(sp0 - 0x90u);
        wr32(sp0 - 0xdcu, t33);
        g->ecx = t33;
        g->esp = sp0 - 0xd8u;
        t34 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, t33);
        t35 = g->ecx;
        t36 = rd32(sp0 - 0x8cu);
        wr32(sp0 - 0xe0u, t36);
        wr32(sp0 - 0x90u, t34);
        g->ecx = t35;
        g->edx = t36;
        g->esp = sp0 - 0xdcu;
        t37 = cow_cdecl(g, COW_IMG(0x1000d0f0u), 1, t36);
        t38 = g->ecx;
        t39 = g->edx;
        wr16(sp0 - 0x8cu, (uint16_t)t37);
        t40 = rd32(sp0 - 0x8au);
        wr32(sp0 - 0xe4u, t40);
        g->eax = t40;
        g->edx = t39;
        g->esp = sp0 - 0xe0u;
        t41 = cow_cdecl(g, COW_IMG(0x1000d0f0u), 1, t40);
        t42 = g->edx;
        wr16(sp0 - 0x8au, (uint16_t)t41);
        edx = t42;
        ebx = t34;
    }
    COW_AT(10211b76)
    if (rd32(sp0 - 0xa8u) != rd32(COW_IMG(0x10385be4u)))
    {
        loc_ac = rd32(sp0 - 0xacu);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b8 = rd32(sp0 - 0xb8u);
        goto L_10211bea;
    }
    COW_AT(10211b83)
    t43 = (uint32_t)(int16_t)rd16(sp0 - 0x8cu);
    wr32(sp0 - 0xbcu, t43);
    wr32(sp0 - 0xc0u, edi);
    wr32(sp0 - 0xc4u, sp0 - 0x80u);
    g->eax = sp0 - 0x80u;
    g->edx = t43;
    g->esp = sp0 - 0xb8u;
    t44 = cow_thiscall(g, COW_IMG(0x10211490u), self, 3, sp0 - 0x80u, edi, t43);
    t45 = g->ecx;
    t46 = g->edx;
    eax = sp0 - 0x80u;
    ecx = t45;
    edx = t46;
    esi = arg3;
    edi = edi + t44;
L_10211ba3: ;
    COW_AT(10211ba3)
    if (rd8(eax) != rd8(esi))
    {
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_10211bc7;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    COW_AT(10211bab)
    if ((uint8_t)ecx == 0u) goto L_10211bc3;
    COW_AT(10211baf)
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_10211bc7;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    COW_AT(10211bb9)
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_10211ba3;
    }
L_10211bc3: ;
    COW_AT(10211bc3)
    eax = 0u;
L_10211bcc: ;
    COW_AT(10211bcc)
    if (eax == 0u) goto L_10211bf9;
    COW_AT(10211bd0)
    t47 = rd32(sp0 - 0x84u) + 1u;
    t48 = rd32(sp0 - 0x84u);
    wr32(sp0 - 0x84u, t47);
    if ((int32_t)(t48 + 1u) < (int32_t)rd32(self + 0x10u))
    {
        edi = edi + rd32(sp0 - 0x94u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_84 = t47;
        goto L_10211a9d;
    }
    loc_ac = rd32(sp0 - 0xacu);
    loc_b0 = rd32(sp0 - 0xb0u);
    loc_b4 = rd32(sp0 - 0xb4u);
    loc_b8 = rd32(sp0 - 0xb8u);
L_10211bea: ;
    COW_AT(10211bea)
    g->ebx = loc_ac;
    g->esi = loc_b4;
    g->edi = loc_b8;
    g->ebp = loc_b0;
    g->edx = edx;
    return 0u;
L_10211bc7: ;
    COW_AT(10211bc7)
    eax = -cf + 1u - cf;
    goto L_10211bcc;
L_10211bf9: ;
    COW_AT(10211bf9)
    if (arg1 == 0u) goto L_10211c4b;
    COW_AT(10211c04)
    if (ebx <= arg2) goto L_10211c1e;
    COW_AT(10211c0f)
    g->ebx = rd32(sp0 - 0xacu);
    g->esi = rd32(sp0 - 0xb4u);
    g->edi = rd32(sp0 - 0xb8u);
    g->ebp = rd32(sp0 - 0xb0u);
    g->edx = edx;
    return arg2 - ebx;
L_10211c1e: ;
    COW_AT(10211c1e)
    wr32(sp0 - 0xbcu, ebx);
    wr32(sp0 - 0xc0u, edi);
    wr32(sp0 - 0xc4u, arg1);
    g->eax = arg2;
    g->edx = edx;
    g->esp = sp0 - 0xb8u;
    t49 = cow_thiscall(g, COW_IMG(0x10211630u), self, 3, arg1, edi, ebx);
    t50 = g->ecx;
    t51 = g->edx;
    wr32(sp0 - 0xbcu, ebx);
    wr32(sp0 - 0xc0u, arg1);
    g->edx = t51;
    g->esp = sp0 - 0xb0u;
    t52 = cow_call_regs(g, COW_IMG(0x101c8c50u), t49, g->ecx, g->edx, 1, 4, arg1, ebx, rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u));
    t53 = g->edx;
    if (rd32(sp0 - 0x98u) == t52)
    {
        edx = t53;
        edi = t49;
        goto L_10211c4d;
    }
    edx = t53;
    COW_AT(10211c3c)
    g->ebx = rd32(sp0 - 0xacu);
    g->esi = rd32(sp0 - 0xb4u);
    g->edi = rd32(sp0 - 0xb8u);
    g->ebp = rd32(sp0 - 0xb0u);
    g->edx = edx;
    return 0u;
L_10211c4b: ;
    COW_AT(10211c4b)
    edi = ebx;
L_10211c4d: ;
    COW_AT(10211c4d)
    g->ebx = rd32(sp0 - 0xacu);
    g->esi = rd32(sp0 - 0xb4u);
    g->edi = rd32(sp0 - 0xb8u);
    g->ebp = rd32(sp0 - 0xb0u);
    g->edx = edx;
    return edi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10211a80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10211a9du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_84;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x10211acau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0xb8u;
        wr32(sp0 - 0xc4u, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x10211b72u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0xb8u;
        wr32(sp0 - 0xc4u, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x10211b76u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x10211b83u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x10211ba3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0xb8u;
        wr32(sp0 - 0xc4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10211babu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0xb8u;
        wr32(sp0 - 0xc4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10211bafu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0xb8u;
        wr32(sp0 - 0xc4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10211bb9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0xb8u;
        wr32(sp0 - 0xc4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10211bc3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0xb8u;
        wr32(sp0 - 0xc4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10211bc7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0xb8u;
        wr32(sp0 - 0xc4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10211bccu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0xb8u;
        wr32(sp0 - 0xc4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10211bd0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0xb8u;
        wr32(sp0 - 0xc4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10211beau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x10211bf9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0xb8u;
        wr32(sp0 - 0xc4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10211c04u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
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
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0xb8u;
        g->esi = arg1;
        wr32(sp0 - 0xc4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10211c0fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0xb8u;
        g->eax = arg2;
        wr32(sp0 - 0xc4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10211c1eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0xb8u;
        g->eax = arg2;
        g->esi = arg1;
        wr32(sp0 - 0xc4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10211c3cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x10211c4bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0xb8u;
        wr32(sp0 - 0xc4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10211c4du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10211a80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10211a80(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
