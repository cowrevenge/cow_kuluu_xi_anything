/* f_0x101fc070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101fc070(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_c;
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
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101fc082u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fc082;
    case 0x101fc090u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fc090;
    case 0x101fc0a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fc0a1;
    case 0x101fc0b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101fc0b0;
    case 0x101fc0bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101fc0bb;
    case 0x101fc0cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101fc0cb;
    case 0x101fc0d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101fc0d1;
    case 0x101fc0e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101fc0e1;
    case 0x101fc0ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101fc0ec;
    case 0x101fc109u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101fc109;
    case 0x101fc110u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101fc110;
    case 0x101fc120u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101fc120;
    case 0x101fc12fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101fc12f;
    case 0x101fc13cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101fc13c;
    case 0x101fc159u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101fc159;
    case 0x101fc169u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101fc169;
    case 0x101fc18au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101fc18a;
    case 0x101fc1a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101fc1a0;
    case 0x101fc1bau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101fc1ba;
    case 0x101fc1c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101fc1c4;
    case 0x101fc1d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fc1d6;
    case 0x101fc1ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101fc1dd;
    case 0x101fc1efu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fc1ef;
    case 0x101fc1f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; loc_c = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fc1f6;
    case 0x101fc20bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fc20b;
    case 0x101fc212u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101fc212;
    case 0x101fc224u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fc224;
    case 0x101fc22du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101fc22d;
    case 0x101fc234u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101fc234;
    case 0x101fc264u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101fc264;
    case 0x101fc26bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101fc26b;
    case 0x101fc274u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101fc274;
    default: break;
    }
#endif

    COW_AT(101fc070)
    if (rd32(COW_IMG(0x10663888u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_101fc274;
    }
    ecx = rd32(COW_IMG(0x10663888u));
    COW_AT(101fc082)
    if (rd8(ecx + 0x10au) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(ecx + 0x10au);
        edx = in_edx;
        goto L_101fc274;
    }
    COW_AT(101fc090)
    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 3u > 0xeu)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 3u;
        edx = in_edx;
        goto L_101fc274;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 3u;
    COW_AT(101fc0a1)
    t1 = rd32(COW_IMG(0x101fc27cu) + rd8(COW_IMG(0x101fc294u) + eax) * 4u);
    edx = rd8(COW_IMG(0x101fc294u) + eax);
    switch (t1 - RD)
    {
    case 0x101fc0b0u: goto L_101fc0b0;
    case 0x101fc1d6u: goto L_101fc1d6;
    case 0x101fc20bu: goto L_101fc20b;
    case 0x101fc22du: goto L_101fc22d;
    case 0x101fc264u: goto L_101fc264;
    case 0x101fc274u: goto L_101fc274;
    default: rt_fatal(g, COW_IMG(0x101fc0a9u), "switch");
    }
    return 0;
L_101fc0b0: ;
    COW_AT(101fc0b0)
    if (rd16(sp0 + 8u) != 0xbu)
    {
        eax = (eax & 0xffff0000u) | rd16(sp0 + 8u);
        goto L_101fc0cb;
    }
    COW_AT(101fc0bb)
    g->eax = rd32(self);
    g->edx = edx;
    t20 = rd32(self);
    g->esp = sp0 - 8u;
    t21 = cow_thiscall(g, rd32(t20 + 0x18u), self, 2, 4u, 0xbu);
    t22 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t22;
    return t21;
L_101fc0cb: ;
    COW_AT(101fc0cb)
    if ((uint16_t)eax != 0xcu) goto L_101fc0e1;
    COW_AT(101fc0d1)
    g->eax = eax;
    g->edx = rd32(self);
    t23 = rd32(self);
    g->esp = sp0 - 8u;
    t24 = cow_thiscall(g, rd32(t23 + 0x18u), self, 2, 3u, 0xcu);
    t25 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t25;
    return t24;
L_101fc0e1: ;
    COW_AT(101fc0e1)
    if (rd32(self + 0x38u) != 0u) goto L_101fc1c4;
    COW_AT(101fc0ec)
    t26 = (uint32_t)(int16_t)eax - 1u;
    wr32(self + 0x14u, t26);
    if ((uint32_t)(int16_t)rd16(rd32(COW_IMG(0x10663888u)) + 0x106u) > 3u)
    {
        eax = t26;
        goto L_101fc274;
    }
    eax = t26;
    ecx = rd32(COW_IMG(0x10663888u));
    edi = (uint32_t)(int16_t)rd16(rd32(COW_IMG(0x10663888u)) + 0x106u);
    COW_AT(101fc109)
    t27 = rd32(COW_IMG(0x101fc2a4u) + edi * 4u);
    switch (t27 - RD)
    {
    case 0x101fc110u: goto L_101fc110;
    case 0x101fc159u: goto L_101fc159;
    case 0x101fc18au: goto L_101fc18a;
    default: rt_fatal(g, COW_IMG(0x101fc109u), "switch");
    }
    return 0;
L_101fc110: ;
    COW_AT(101fc110)
    if (rd8(eax * 0x16u + ecx + 0x6e8u) != 1u)
    {
        eax = eax * 0xbu;
    COW_AT(101fc12f)
        t39 = rd32(COW_IMG(0x10663890u));
        wr32(t39 + 0x14u, 0u);
        edx = t39;
    }
    else
    {
        edx = eax * 5u;
        eax = eax * 0xbu;
    COW_AT(101fc120)
        wr32(rd32(COW_IMG(0x10663890u)) + 0x14u, 1u);
    }
    COW_AT(101fc13c)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t40 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385068u), 1u, 0u);
    t41 = g->ecx;
    t42 = g->edx;
    g->edx = t42;
    t43 = cow_thiscall(g, COW_IMG(0x10037b90u), t41, 0);
    t44 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t44;
    return t43;
L_101fc159: ;
    COW_AT(101fc159)
    if (rd8(eax * 0x16u + ecx + 0x7c4u) != 1u)
    {
        edx = eax * 5u;
        eax = eax * 0xbu;
        goto L_101fc1ba;
    }
    edx = eax * 5u;
    eax = eax * 0xbu;
    COW_AT(101fc169)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t33 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t34 = g->edx;
    t35 = rd32(self + 0x14u);
    wr32(sp0 + 8u, t35);
    t36 = rd32(COW_IMG(0x10663888u));
    wr32(sp0 + 4u, 1u);
    g->esp = sp0;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t34;
    return cow_tailcall(g, COW_IMG(0x101f8de0u), t33, t36, t34);
L_101fc18a: ;
    COW_AT(101fc18a)
    if (rd8(eax * 0x16u + ecx + edi * 0xdcu + 0x6e8u) != 1u)
    {
        edx = eax * 5u + edi * 0x32u;
        eax = eax * 0xbu + edi * 0x6eu;
        goto L_101fc1ba;
    }
    edx = eax * 5u + edi * 0x32u;
    eax = eax * 0xbu + edi * 0x6eu;
    COW_AT(101fc1a0)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t28 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t29 = g->edx;
    t30 = rd32(self + 0x14u);
    g->edx = t29;
    t31 = cow_thiscall(g, COW_IMG(0x101f90c0u), rd32(COW_IMG(0x10663888u)), 2, edi, t30);
    t32 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t32;
    return t31;
L_101fc1ba: ;
    COW_AT(101fc1ba)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t37 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t38 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t38;
    return t37;
L_101fc1c4: ;
    COW_AT(101fc1c4)
    g->edx = edx;
    g->esp = sp0 - 8u;
    t45 = cow_call_regs(g, COW_IMG(0x101c6920u), eax, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 1u);
    t46 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t46;
    return t45;
L_101fc1d6: ;
    COW_AT(101fc1d6)
    if (rd32(self + 0x38u) == 0u)
    {
        eax = rd32(self + 0x38u);
        goto L_101fc1ef;
    }
    eax = rd32(self + 0x38u);
    COW_AT(101fc1dd)
    g->edx = edx;
    g->esp = sp0 - 8u;
    t10 = cow_call_regs(g, COW_IMG(0x101c6920u), eax, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 5u);
    t11 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t11;
    return t10;
L_101fc1ef: ;
    COW_AT(101fc1ef)
    g->edx = edx;
    g->esp = sp0 - 8u;
    t12 = cow_call_regs(g, COW_IMG(0x101f9070u), eax, ecx, g->edx, 1, 0);
    t13 = g->edx;
    eax = t12;
    edx = t13;
    loc_c = 1u;
L_101fc1f6: ;
    COW_AT(101fc1f6)
    t14 = rd32(COW_IMG(0x10663888u));
    g->esp = sp0 - 8u;
    t15 = cow_call_regs(g, COW_IMG(0x101fad70u), eax, t14, edx, 0, 1, loc_c);
    t16 = g->ecx;
    t17 = g->edx;
    g->edx = t17;
    t18 = cow_thiscall(g, COW_IMG(0x10037b30u), t16, 0);
    t19 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t19;
    return t18;
L_101fc20b: ;
    COW_AT(101fc20b)
    if (rd32(self + 0x38u) == 0u)
    {
        eax = rd32(self + 0x38u);
        goto L_101fc224;
    }
    eax = rd32(self + 0x38u);
    COW_AT(101fc212)
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_call_regs(g, COW_IMG(0x101c6920u), eax, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 4u);
    t7 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t7;
    return t6;
L_101fc224: ;
    COW_AT(101fc224)
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_call_regs(g, COW_IMG(0x101f9070u), eax, ecx, g->edx, 1, 0);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    loc_c = 0xffffffffu;
    goto L_101fc1f6;
L_101fc22d: ;
    COW_AT(101fc22d)
    if (rd32(self + 0x38u) != 0u)
    {
        eax = rd32(self + 0x38u);
        goto L_101fc26b;
    }
    eax = rd32(self + 0x38u);
    COW_AT(101fc234)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10384ff4u));
    t2 = rd32(COW_IMG(0x10663884u));
    wr32(sp0 + 8u, 0u);
    t3 = rd32(t2 + 8u);
    wr32(sp0 + 4u, t3);
    g->esp = sp0;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t2;
    return cow_tailcall(g, COW_IMG(0x1015db80u), t3, COW_IMG(0x10621838u), t2);
L_101fc264: ;
    COW_AT(101fc264)
    if (rd32(self + 0x38u) == 0u)
    {
        eax = rd32(self + 0x38u);
        goto L_101fc274;
    }
    eax = rd32(self + 0x38u);
L_101fc26b: ;
    COW_AT(101fc26b)
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x101fbe40u), eax, self, edx, 0, 1, 1u);
    t5 = g->edx;
    eax = t4;
    edx = t5;
L_101fc274: ;
    COW_AT(101fc274)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101fc070(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101fc082u:
    {
        uint32_t ecx;
        uint32_t in_eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 8u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x101fc090u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 8u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x101fc0a1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 8u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x101fc0b0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101fc0bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101fc0cbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101fc0d1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101fc0e1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101fc0ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101fc109u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101fc110u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101fc120u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101fc12fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101fc13cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101fc159u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101fc169u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101fc18au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101fc1a0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101fc1bau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101fc1c4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101fc1d6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 8u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x101fc1ddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101fc1efu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 8u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x101fc1f6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x101fc20bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 8u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x101fc212u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101fc224u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 8u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x101fc22du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101fc234u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101fc264u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101fc26bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101fc274u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101fc070(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101fc070(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
