/* f_0x101d0b00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101d0b00(Guest* g)
{
    double d10;
    double d19;
    double d23;
    double d6;
    double d9;
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_8;
    double loc_c_f;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 52u);

    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x60u)
        {
            eax = rd32(COW_IMG(0x10456a28u));
            g->edx = in_edx;
            g->esp = sp0 - 0xcu;
            t1 = cow_call_regs(g, COW_IMG(0x10160700u), eax, COW_IMG(0x10621838u), g->edx, 1, 0);
            t2 = g->edx;
            if ((uint8_t)t1 != 0u)
            {
                edx = t2;
                if (rd32(rd32(COW_IMG(0x10663888u)) + 8u) == 0u)
                {
                    if (rd16(COW_IMG(0x10663178u)) != 0u)
                    {
                        g->eax = rd32(COW_IMG(0x1047bfa8u));
                        g->edx = edx;
                        t3 = rd32(COW_IMG(0x1047bfa8u));
                        g->esp = sp0 - 0xcu;
                        t4 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t3 + 0xdc8u), 0);
                        t5 = g->edx;
                        d6 = (double)(float)fr(g, (double)(int32_t)rd32(t4 + 8u) * (double)rdf32(COW_IMG(0x10337eb0u)));
                        wrf32(sp0 - 8u, (float)d6);
                        g->eax = rd32(COW_IMG(0x1047bfa8u));
                        t7 = rd32(COW_IMG(0x1047bfa8u));
                        t8 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t7 + 0xdc8u), 0);
                        d9 = (double)(float)fr(g, (double)(int32_t)rd32(t8 + 0xcu) * (double)rdf32(COW_IMG(0x10337eb0u)));
                        wrf32(sp0 - 0xcu, (float)d9);
                        d10 = (double)rdf32(sp0 - 8u);
                        if (d10 < (double)rdf32(COW_IMG(0x1032961cu))) goto L_101d0bab;
                        eax = (t8 & 0xffff0000u) | (uint16_t)cow_fsw(g, d10, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
                        loc_c_f = d9;
                        if (!(loc_c_f < (double)rdf32(COW_IMG(0x1032961cu)))) goto L_101d0bbb;
L_101d0bab: ;
                        wr32(sp0 - 8u, 0x3f800000u);
                        wr32(sp0 - 0xcu, 0x3f800000u);
                        loc_8 = 0x3f800000u;
L_101d0bbb: ;
                        wr32(sp0 - 0x10u, in_esi);
                        wr32(sp0 - 0x14u, in_edi);
                        t11 = rd32(sp0 - 0xcu);
                        wr32(sp0 - 0x18u, t11);
                        wr32(sp0 - 0x1cu, loc_8);
                        wr32(sp0 - 0x20u, 1u);
                        wr32(sp0 - 0x24u, 0x80808080u);
                        g->eax = loc_8;
                        g->edx = t11;
                        t12 = rd16(COW_IMG(0x106218bau));
                        t13 = rd16(COW_IMG(0x106218b6u));
                        t14 = rd32(COW_IMG(0x106218b8u));
                        t15 = rd32(COW_IMG(0x106218b4u));
                        g->esp = sp0 - 0x24u;
                        t16 = cow_thiscall(g, COW_IMG(0x101d0c40u), t15, 0);
                        t17 = g->edx;
                        t18 = (uint32_t)(int16_t)(t12 - t13);
                        wr32(sp0 - 4u, t18);
                        wr32(sp0 - 0x28u, t16);
                        g->ecx = t18;
                        d19 = fr(g, (double)(int32_t)t18 - fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(COW_IMG(0x10329fd8u))));
                        fpush(g, d19);
                        g->esp = sp0 - 0x28u;
                        t20 = cow_call_regs(g, COW_IMG(0x10311c6cu), t16, g->ecx, g->edx, 1, 0);
                        t21 = g->ecx;
                        t22 = (uint32_t)(int16_t)(t14 - t15);
                        wr32(sp0 - 4u, t22);
                        wr32(sp0 - 0x2cu, t20);
                        g->ecx = t21;
                        g->edx = t22;
                        d23 = fr(g, (double)(int32_t)t22 - fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(COW_IMG(0x1032a1acu))));
                        fpush(g, d23);
                        g->esp = sp0 - 0x2cu;
                        t24 = cow_call_regs(g, COW_IMG(0x10311c6cu), t20, g->ecx, g->edx, 1, 0);
                        t25 = g->ecx;
                        t26 = g->edx;
                        wr32(sp0 - 0x30u, t24);
                        g->esp = sp0 - 0x14u;
                        cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t25, 7, t24, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), 0x80808080u, 1u, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
                    }
                }
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d0b00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d0b00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
