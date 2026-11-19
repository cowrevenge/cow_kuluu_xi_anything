/* f_0x101a41a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101a41a0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 72u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101a41b1u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x20u); goto E_101a41b1;
    case 0x101a41c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a41c7;
    case 0x101a41edu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a41ed;
    case 0x101a41f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a41f4;
    case 0x101a41fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a41fb;
    case 0x101a4229u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a4229;
    case 0x101a423cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a423c;
    case 0x101a423eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a423e;
    case 0x101a4251u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_101a4251;
    case 0x101a4272u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a4272;
    case 0x101a4284u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a4284;
    case 0x101a428fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a428f;
    case 0x101a429du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a429d;
    case 0x101a42dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); goto E_101a42db;
    case 0x101a42e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); goto E_101a42e3;
    case 0x101a4324u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a4324;
    case 0x101a4329u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a4329;
    case 0x101a432eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a432e;
    case 0x101a4354u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a4354;
    case 0x101a4359u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a4359;
    case 0x101a435eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a435e;
    case 0x101a4384u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a4384;
    case 0x101a4388u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a4388;
    case 0x101a4395u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); goto E_101a4395;
    case 0x101a4398u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_101a4398;
    default: break;
    }
#endif

    COW_AT(101a41a0)
    wr32(sp0 - 0x20u, in_ebp);
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
        ebx = in_ebx;
        esi = in_esi;
        edi = in_edi;
        loc_20 = in_ebp;
    }
    else
    {
        eax = rd32(self + 8u);
    COW_AT(101a41b1)
        wr32(sp0 - 0x24u, in_ebx);
        wr32(sp0 - 0x28u, in_esi);
        wr32(sp0 - 0x2cu, in_edi);
        wr32(sp0 - 0x30u, eax);
        g->eax = eax;
        g->edx = in_edx;
        t1 = rd16(eax + 0x4cu);
        g->esp = sp0 - 0x2cu;
        t2 = cow_thiscall(g, COW_IMG(0x1015ed80u), COW_IMG(0x10621838u), 1, eax);
        t3 = g->edx;
        if ((uint8_t)t2 == 0u)
        {
            eax = t2;
    COW_AT(101a41ed)
            t10 = rd32(self + 8u);
            wr8(t10 + 0x63u, 0u);
            edx = t10;
        }
        else
        {
            edx = t3;
            esi = (in_esi & 0xffff0000u) | t1;
    COW_AT(101a41c7)
            wr32(sp0 - 0x30u, 2u);
            t4 = rd32(self + 8u);
            wr8(t4 + 0x63u, 1u);
            t5 = (uint32_t)(int16_t)esi + 9u;
            wr32(sp0 - 0x34u, t5);
            g->eax = t4;
            g->edx = edx;
            g->esp = sp0 - 0x30u;
            t6 = cow_thiscall(g, COW_IMG(0x101a1c30u), rd32(self + 0x20u), 1, t5);
            t7 = g->edx;
            wr32(sp0 - 0x34u, t6);
            g->edx = t7;
            g->esp = sp0 - 0x2cu;
            t8 = cow_thiscall(g, COW_IMG(0x10150cd0u), rd32(COW_IMG(0x1057847cu)), 2, t6, 2u);
            t9 = g->edx;
            eax = t8;
            edx = t9;
        }
    COW_AT(101a41f4)
        if (rd8(self + 0x28u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x28u);
    COW_AT(101a41fb)
            wr32(sp0 - 0x30u, 0xffffffffu);
            g->eax = eax;
            t11 = rd32(self + 0x20u);
            t12 = rd32(rd32(self + 0x20u) + 0x1db8u);
            g->esp = sp0 - 0x2cu;
            t13 = cow_thiscall(g, COW_IMG(0x101a29f0u), t11, 1, 0xffffffffu);
            t14 = g->ecx;
            wr32(sp0 - 0x30u, t13);
            t15 = (uint32_t)((int32_t)(t12 - (uint32_t)((int32_t)t12 >> 0x1fu)) >> 1u);
            wr32(sp0 - 0x34u, t15);
            wr32(sp0 - 0x38u, self + 0x2au);
            g->eax = t15;
            g->edx = (uint32_t)((int32_t)t12 >> 0x1fu);
            g->esp = sp0 - 0x24u;
            t16 = cow_cdecl(g, COW_IMG(0x101a3d60u), 5, self + 0x2au, t15, t13, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
            t17 = g->edx;
            wr32(sp0 - 0x30u, self + 0x2au);
            g->edi = t12;
            g->esp = sp0 - 0x2cu;
            cow_thiscall(g, COW_IMG(0x1011ae10u), rd32(self + 8u), 1, self + 0x2au);
        }
    COW_AT(101a4229)
        if ((uint32_t)((int32_t)(rd32(rd32(self + 0x20u) + 0x1db8u) - (uint32_t)((int32_t)rd32(rd32(self + 0x20u) + 0x1db8u) >> 0x1fu)) >> 1u) < 0xau)
        {
            eax = (uint32_t)((int32_t)(rd32(rd32(self + 0x20u) + 0x1db8u) - (uint32_t)((int32_t)rd32(rd32(self + 0x20u) + 0x1db8u) >> 0x1fu)) >> 1u);
        }
        else
        {
    COW_AT(101a423c)
            eax = 0u;
        }
    COW_AT(101a423e)
        wr32(sp0 - 0x1cu, 0u);
        t18 = rd32(COW_IMG(0x1037aa80u) + eax * 4u);
        wr32(sp0 - 0x18u, t18);
        loc_1c = 0u;
        loc_18 = t18;
L_101a4251: ;
    COW_AT(101a4251)
        wr32(sp0 - 0x14u, loc_1c + 1u);
        wr32(sp0 - 0x30u, loc_1c + 0xau);
        g->eax = loc_1c + 0xau;
        g->edx = loc_1c;
        t19 = rd32(self + 0x20u);
        g->esp = sp0 - 0x2cu;
        t20 = cow_thiscall(g, COW_IMG(0x101a1c30u), t19, 1, loc_1c + 0xau);
        t21 = g->ecx;
        t22 = g->edx;
        if (t20 == 0u)
        {
            eax = t20;
            edx = t22;
            esi = loc_1c + 1u;
        }
        else
        {
            ecx = t21;
            edx = t22;
            ebx = t20;
            esi = loc_1c + 1u;
    COW_AT(101a4272)
            edi = ebx;
            eax = 0u;
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            if (~ecx != 1u)
            {
    COW_AT(101a4284)
                if (rd32(self + 8u) != 0u)
                {
                    edi = rd32(self + 8u);
    COW_AT(101a428f)
                    if ((int32_t)rd32(sp0 - 0x1cu) <= (int16_t)rd16(edi + 0x58u))
                    {
    COW_AT(101a429d)
                        wr32(sp0 - 0x30u, sp0 - 8u);
                        wr32(sp0 - 0x1cu, 2u);
                        wr16(sp0 - 8u, 0u);
                        wr16(sp0 - 6u, 0u);
                        wr16(sp0 - 4u, 0u);
                        wr16(sp0 - 2u, 0u);
                        g->esp = sp0 - 0x2cu;
                        cow_thiscall(g, COW_IMG(0x1011a710u), edi, 1, sp0 - 8u);
                        if ((int32_t)((uint32_t)(int16_t)rd16(sp0 - 4u) - (uint32_t)(int16_t)rd16(sp0 - 8u)) < 800)
                        {
                            loc_1c = 2u;
                        }
                        else
                        {
    COW_AT(101a42db)
                            wr32(sp0 - 0x1cu, 4u);
                            loc_1c = 4u;
                        }
    COW_AT(101a42e3)
                        wr32(sp0 - 0x30u, 1u);
                        wr32(sp0 - 0x34u, 1u);
                        wr32(sp0 - 0x38u, esi);
                        wr32(sp0 - 0x3cu, sp0 - 0x10u);
                        wr16(sp0 - 0x10u, 0u);
                        wr16(sp0 - 0xeu, 0u);
                        wr16(sp0 - 0xcu, 0u);
                        wr16(sp0 - 0xau, 0u);
                        g->ebx = ebx;
                        g->edi = edi;
                        g->edx = sp0 - 0x10u;
                        g->esp = sp0 - 0x2cu;
                        cow_thiscall(g, COW_IMG(0x10118900u), edi, 4, sp0 - 0x10u, esi, 1u, 1u);
                        t23 = g->edx;
                        wr32(sp0 - 0x30u, ebx);
                        t24 = rd32(sp0 - 0xcu);
                        t25 = rd32(sp0 - 0x10u);
                        t26 = cow_call_regs(g, COW_IMG(0x101b9840u), t24 - t25, g->ecx, g->edx, 0, 1, ebx);
                        if ((uint8_t)t26 == 0u)
                        {
                            esi = (uint32_t)(int16_t)(t24 - t25);
    COW_AT(101a4354)
                            if ((int32_t)esi < 48)
                            {
    COW_AT(101a4359)
                                esi = 0x30u;
                            }
    COW_AT(101a435e)
                            wr32(sp0 - 0x30u, 1u);
                            wr32(sp0 - 0x34u, esi);
                            t33 = rd32(sp0 - 0x18u);
                            wr32(sp0 - 0x38u, t33);
                            wr32(sp0 - 0x3cu, ebx);
                            t34 = (uint32_t)(int16_t)rd16(sp0 - 0xeu) + 2u;
                            wr32(sp0 - 0x40u, t34);
                            t35 = rd32(sp0 - 0x1cu) + (uint32_t)(int16_t)rd16(sp0 - 0x10u);
                            wr32(sp0 - 0x44u, t35);
                            g->eax = t35;
                            g->edx = rd32(sp0 - 0x1cu);
                            t36 = rd32(sp0 - 0x1cu);
                            g->esp = sp0 - 0x2cu;
                            t37 = cow_thiscall_cdecl(g, COW_IMG(0x101906a0u), t33, 6, t35, t34, ebx, t33, esi, 1u);
                            t38 = g->edx;
                            eax = t37;
                            edx = t38;
                        }
                        else
                        {
                            esi = (uint32_t)(int16_t)(t24 - t25);
    COW_AT(101a4324)
                            if ((int32_t)esi < 38)
                            {
    COW_AT(101a4329)
                                esi = 0x26u;
                            }
    COW_AT(101a432e)
                            wr32(sp0 - 0x30u, esi);
                            t27 = rd32(sp0 - 0x18u);
                            wr32(sp0 - 0x34u, t27);
                            wr32(sp0 - 0x38u, ebx);
                            t28 = (uint32_t)(int16_t)rd16(sp0 - 0xeu) + 4u;
                            wr32(sp0 - 0x3cu, t28);
                            t29 = rd32(sp0 - 0x1cu) + (uint32_t)(int16_t)rd16(sp0 - 0x10u);
                            wr32(sp0 - 0x40u, t29);
                            g->eax = t29;
                            g->edx = rd32(sp0 - 0x1cu);
                            t30 = rd32(sp0 - 0x1cu);
                            g->esp = sp0 - 0x2cu;
                            t31 = cow_thiscall(g, COW_IMG(0x101b9760u), rd32(self + 0x18u), 5, t29, t28, ebx, t27, esi);
                            t32 = g->edx;
                            eax = t31;
                            edx = t32;
                        }
    COW_AT(101a4384)
                        esi = rd32(sp0 - 0x14u);
                    }
                }
            }
        }
    COW_AT(101a4388)
        wr32(sp0 - 0x1cu, esi);
        if ((int32_t)esi < 10)
        {
            loc_1c = esi;
            loc_18 = rd32(sp0 - 0x18u);
            goto L_101a4251;
        }
    COW_AT(101a4395)
        ebx = rd32(sp0 - 0x24u);
        esi = rd32(sp0 - 0x28u);
        edi = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
    }
    COW_AT(101a4398)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = loc_20;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101a41a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101a41b1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebp = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101a41c7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x101a41edu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x101a41f4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x101a41fbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x101a4229u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x101a423cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x101a423eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x101a4251u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_1c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x101a4272u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x101a4284u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x101a428fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x101a429du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x101a42dbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101a42e3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101a4324u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101a4329u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101a432eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101a4354u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101a4359u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101a435eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101a4384u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x101a4388u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x101a4395u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x101a4398u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101a41a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101a41a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
