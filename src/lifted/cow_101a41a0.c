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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x20u, in_ebp);
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
        ebx = in_ebx;
        esi = in_esi;
        edi = in_edi;
    }
    else
    {
        eax = rd32(self + 8u);
        wr32(sp0 - 0x24u, in_ebx);
        wr32(sp0 - 0x28u, in_esi);
        wr32(sp0 - 0x2cu, in_edi);
        wr32(sp0 - 0x30u, eax);
        g->edx = in_edx;
        t1 = rd16(eax + 0x4cu);
        g->esp = sp0 - 0x2cu;
        t2 = cow_thiscall(g, COW_IMG(0x1015ed80u), COW_IMG(0x10621838u), 1, eax);
        t3 = g->edx;
        if ((uint8_t)t2 == 0u)
        {
            eax = t2;
            t10 = rd32(self + 8u);
            wr8(t10 + 0x63u, 0u);
            edx = t10;
        }
        else
        {
            edx = t3;
            esi = (in_esi & 0xffff0000u) | t1;
            wr32(sp0 - 0x30u, 2u);
            wr8(rd32(self + 8u) + 0x63u, 1u);
            t4 = (uint32_t)(int16_t)esi + 9u;
            wr32(sp0 - 0x34u, t4);
            g->edx = edx;
            t5 = rd32(self + 8u);
            g->esp = sp0 - 0x30u;
            t6 = cow_thiscall(g, COW_IMG(0x101a1c30u), rd32(self + 0x20u), 1, t4);
            t7 = g->edx;
            wr32(sp0 - 0x34u, t6);
            g->edx = t7;
            g->esp = sp0 - 0x2cu;
            t8 = cow_thiscall(g, COW_IMG(0x10150cd0u), rd32(COW_IMG(0x1057847cu)), 2, t6, 2u);
            t9 = g->edx;
            eax = t8;
            edx = t9;
        }
        if (rd8(self + 0x28u) != 0u)
        {
            wr32(sp0 - 0x30u, 0xffffffffu);
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
        if ((uint32_t)((int32_t)(rd32(rd32(self + 0x20u) + 0x1db8u) - (uint32_t)((int32_t)rd32(rd32(self + 0x20u) + 0x1db8u) >> 0x1fu)) >> 1u) < 0xau)
        {
            eax = (uint32_t)((int32_t)(rd32(rd32(self + 0x20u) + 0x1db8u) - (uint32_t)((int32_t)rd32(rd32(self + 0x20u) + 0x1db8u) >> 0x1fu)) >> 1u);
        }
        else
        {
            eax = 0u;
        }
        wr32(sp0 - 0x1cu, 0u);
        t18 = rd32(COW_IMG(0x1037aa80u) + eax * 4u);
        wr32(sp0 - 0x18u, t18);
        loc_1c = 0u;
        loc_18 = t18;
L_101a4251: ;
        wr32(sp0 - 0x14u, loc_1c + 1u);
        wr32(sp0 - 0x30u, loc_1c + 0xau);
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
                if (rd32(self + 8u) != 0u)
                {
                    edi = rd32(self + 8u);
                    if ((int32_t)rd32(sp0 - 0x1cu) <= (int16_t)rd16(edi + 0x58u))
                    {
                        wr32(sp0 - 0x30u, sp0 - 8u);
                        wr32(sp0 - 0x1cu, 2u);
                        g->esp = sp0 - 0x2cu;
                        cow_thiscall(g, COW_IMG(0x1011a710u), edi, 1, sp0 - 8u);
                        if (1u)
                        {
                            loc_1c = 2u;
                        }
                        else
                        {
                            wr32(sp0 - 0x1cu, 4u);
                            loc_1c = 4u;
                        }
                        wr32(sp0 - 0x30u, 1u);
                        wr32(sp0 - 0x34u, 1u);
                        wr32(sp0 - 0x38u, esi);
                        wr32(sp0 - 0x3cu, sp0 - 0x10u);
                        g->ebx = ebx;
                        g->edi = edi;
                        g->edx = sp0 - 0x10u;
                        g->esp = sp0 - 0x2cu;
                        cow_thiscall(g, COW_IMG(0x10118900u), edi, 4, sp0 - 0x10u, esi, 1u, 1u);
                        t23 = g->edx;
                        wr32(sp0 - 0x30u, ebx);
                        t24 = cow_call_regs(g, COW_IMG(0x101b9840u), 0u, g->ecx, g->edx, 0, 1, ebx);
                        if ((uint8_t)t24 == 0u)
                        {
                            if (0u)
                            {
                                esi = 0u;
                            }
                            else
                            {
                                esi = 0x30u;
                            }
                            wr32(sp0 - 0x30u, 1u);
                            wr32(sp0 - 0x34u, esi);
                            t30 = rd32(sp0 - 0x18u);
                            wr32(sp0 - 0x38u, t30);
                            wr32(sp0 - 0x3cu, ebx);
                            wr32(sp0 - 0x40u, 2u);
                            t31 = rd32(sp0 - 0x1cu);
                            wr32(sp0 - 0x44u, t31);
                            g->eax = t31;
                            g->edx = rd32(sp0 - 0x1cu);
                            t32 = rd32(sp0 - 0x1cu);
                            g->esp = sp0 - 0x2cu;
                            t33 = cow_thiscall_cdecl(g, COW_IMG(0x101906a0u), t30, 6, t31, 2u, ebx, t30, esi, 1u);
                            t34 = g->edx;
                            eax = t33;
                            edx = t34;
                        }
                        else
                        {
                            if (0u)
                            {
                                esi = 0u;
                            }
                            else
                            {
                                esi = 0x26u;
                            }
                            wr32(sp0 - 0x30u, esi);
                            t25 = rd32(sp0 - 0x18u);
                            wr32(sp0 - 0x34u, t25);
                            wr32(sp0 - 0x38u, ebx);
                            wr32(sp0 - 0x3cu, 4u);
                            t26 = rd32(sp0 - 0x1cu);
                            wr32(sp0 - 0x40u, t26);
                            g->edx = rd32(sp0 - 0x1cu);
                            t27 = rd32(sp0 - 0x1cu);
                            g->esp = sp0 - 0x2cu;
                            t28 = cow_thiscall(g, COW_IMG(0x101b9760u), rd32(self + 0x18u), 5, t26, 4u, ebx, t25, esi);
                            t29 = g->edx;
                            eax = t28;
                            edx = t29;
                        }
                        esi = rd32(sp0 - 0x14u);
                    }
                }
            }
        }
        wr32(sp0 - 0x1cu, esi);
        if ((int32_t)esi < 10)
        {
            loc_1c = esi;
            goto L_101a4251;
        }
        ebx = rd32(sp0 - 0x24u);
        esi = rd32(sp0 - 0x28u);
        edi = rd32(sp0 - 0x2cu);
    }
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a41a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a41a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
