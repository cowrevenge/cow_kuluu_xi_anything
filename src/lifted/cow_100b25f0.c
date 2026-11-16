/* f_0x100b25f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100b25f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_5e4;
    uint32_t loc_5e8;
    uint32_t loc_5ec;
    uint32_t loc_5f0;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 1552u);

    wr32(sp0 - 0x5f8u, in_ebp);
    wr32(sp0 - 0x5fcu, in_esi);
    if (rd8(COW_IMG(0x104898f8u)) != 0u) goto L_100b2668;
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x104898f8u));
    if (rd8(COW_IMG(0x104897f4u)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104897f4u));
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104897f4u));
        g->edx = in_edx;
        g->esp = sp0 - 0x5fcu;
        t1 = cow_call_regs(g, COW_IMG(0x100ae3a0u), eax, g->ecx, g->edx, 1, 0);
        t2 = g->edx;
        wr32(sp0 - 0x600u, 1u);
        g->edx = t2;
        t3 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
        t4 = g->ecx;
        t5 = g->edx;
        wr32(sp0 - 0x600u, t3);
        wr32(sp0 - 0x604u, 1u);
        t6 = cow_call_regs(g, COW_IMG(0x100964a0u), g->eax, g->ecx, t5, 1, 2, 1u, t3);
        t7 = g->edx;
        wr16(COW_IMG(0x10482f40u), 0u);
        wr16(COW_IMG(0x104855aau), 0u);
        wr32(sp0 - 0x608u, sp0 - 0x5f4u);
        wr32(sp0 - 0x60cu, t6);
        g->esp = sp0 - 0x604u;
        t8 = cow_call_regs(g, COW_IMG(0x100ad750u), t6, sp0 - 0x5f4u, t7, 1, 2, t6, sp0 - 0x5f4u);
        eax = t8;
    }
    wr8(COW_IMG(0x104897f4u), 1u);
    wr8(self + 0x25au, 1u);
    return eax & 0xffffff00u;
L_100b2668: ;
    g->edx = in_edx;
    g->esp = sp0 - 0x5fcu;
    t9 = cow_thiscall(g, COW_IMG(0x1015eaa0u), COW_IMG(0x10621838u), 0);
    t10 = g->edx;
    wr32(COW_IMG(0x1047d3e8u), t9);
    if (t9 != 0u)
    {
        eax = t9;
        edx = t10;
        goto L_100b268f;
    }
    eax = t9;
    wr8(self + 0x25au, 1u);
    g->esi = rd32(sp0 - 0x5fcu);
    g->ebp = rd32(sp0 - 0x5f8u);
    return eax & 0xffffff00u;
L_100b268f: ;
    wr32(sp0 - 0x600u, in_ebx);
    wr32(sp0 - 0x604u, in_edi);
    t11 = (edx & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)rd8(COW_IMG(0x104886f4u));
    wr32(sp0 - 0x608u, t11);
    g->edx = t11;
    g->esp = sp0 - 0x604u;
    t12 = cow_call_regs(g, COW_IMG(0x1014e210u), eax, eax, g->edx, 0, 1, t11);
    t13 = g->edx;
    wr32(sp0 - 0x608u, 3u);
    wr32(sp0 - 0x5ecu, 0u);
    wr32(sp0 - 0x5f0u, 0u);
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t15 = g->edx;
    wr32(sp0 - 0x608u, 5u);
    wr32(sp0 - 0x5e0u, t14);
    t16 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 5u);
    wr32(sp0 - 0x5e4u, t16);
    wr32(sp0 - 0x5e8u, 1u);
    eax = t16;
    ebx = in_ebx & 0xffffff00u;
    esi = COW_IMG(0x10489108u);
    edi = sp0 - 0x5dcu;
    loc_5e4 = t16;
    loc_5e8 = 1u;
    loc_5ec = 0u;
    loc_5f0 = 0u;
L_100b26d6: ;
    if ((int8_t)rd8(esi) >= 0)
    {
        eax = (eax & 0xffffff00u) | rd8(esi);
        goto L_100b26f1;
    }
    eax = (eax & 0xffffff00u) | rd8(esi);
    wr8(edi, (uint8_t)eax);
    eax = (eax & 0xffffff00u) | rd8(esi + 1u);
    esi = esi + 1u;
    edi = edi + 1u;
L_100b26e3: ;
    wr8(edi, (uint8_t)eax);
    edi = edi + 1u;
L_100b26e6: ;
    esi = esi + 1u;
L_100b26e7: ;
    if ((uint8_t)ebx != 0xffu) goto L_100b26d6;
L_100b281c: ;
    t27 = rd32(sp0 - 0x604u);
    wr8(COW_IMG(0x1047d3ecu), 1u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 7u));
    g->ebx = rd32(sp0 - 0x600u);
    g->esi = rd32(sp0 - 0x5fcu);
    g->edi = t27;
    g->ebp = rd32(sp0 - 0x5f8u);
    return (eax & 0xffffff00u) | 1u;
L_100b26f1: ;
    if ((uint8_t)eax > 0x7fu) goto L_100b26e3;
    ecx = (uint8_t)eax;
    t17 = rd32(COW_IMG(0x100b2838u) + rd8(COW_IMG(0x100b284cu) + ecx) * 4u);
    switch (t17 - RD)
    {
    case 0x100b26e3u: goto L_100b26e3;
    case 0x100b270du: edx = rd8(COW_IMG(0x100b284cu) + ecx); goto L_100b270d;
    case 0x100b278du: goto L_100b278d;
    case 0x100b2795u: goto L_100b2795;
    case 0x100b27c9u: edx = rd8(COW_IMG(0x100b284cu) + ecx); goto L_100b27c9;
    default: rt_fatal(g, COW_IMG(0x100b2706u), "switch");
    }
    return 0;
L_100b270d: ;
    wr8(edi, 0u);
    if ((uint8_t)ebx != 0u)
    {
        if (!(loc_5e4 & 1u))
        {
            wr32(sp0 - 0x608u, loc_5e8);
            wr32(sp0 - 0x60cu, sp0 - 0x5dcu);
            g->ebp = self;
            g->edx = sp0 - 0x5dcu;
            g->esp = sp0 - 0x604u;
            cow_thiscall(g, COW_IMG(0x1014df90u), rd32(COW_IMG(0x1047d3e8u)), 2, sp0 - 0x5dcu, loc_5e8);
            t24 = g->edx;
            if (rd32(sp0 - 0x5e0u) == rd32(sp0 - 0x5f0u))
            {
                edx = t24;
                wr32(sp0 - 0x608u, 0u);
                t25 = rd32(sp0 - 0x5ecu);
                wr32(sp0 - 0x60cu, t25);
                g->esp = sp0 - 0x604u;
                cow_fastcall(g, COW_IMG(0x1014e0f0u), rd32(COW_IMG(0x1047d3e8u)), edx, 2, t25, 0u);
            }
            t26 = rd32(sp0 - 0x5ecu) + 1u;
            wr32(sp0 - 0x5ecu, t26);
            loc_5ec = t26;
        }
        wr32(sp0 - 0x5f0u, loc_5f0 + 1u);
        wr32(sp0 - 0x5e4u, (uint32_t)((int32_t)loc_5e4 >> 1u));
        wr32(sp0 - 0x5e8u, loc_5e8 + 1u);
        eax = loc_5e8 + 1u;
        edi = sp0 - 0x5dcu;
        loc_5e4 = (uint32_t)((int32_t)loc_5e4 >> 1u);
        loc_5e8 = loc_5e8 + 1u;
        loc_5f0 = loc_5f0 + 1u;
    }
    else
    {
        wr32(sp0 - 0x608u, sp0 - 0x5dcu);
        g->eax = sp0 - 0x5dcu;
        g->esp = sp0 - 0x604u;
        t23 = cow_thiscall(g, COW_IMG(0x1014df50u), rd32(COW_IMG(0x1047d3e8u)), 1, sp0 - 0x5dcu);
        eax = t23;
        edi = sp0 - 0x5dcu;
    }
    goto L_100b26e6;
L_100b278d: ;
    ebx = (ebx & 0xffffff00u) | 1u;
    esi = esi + 1u;
    goto L_100b26d6;
L_100b2795: ;
    if (rd8(esi + 1u) - 0x34u > 0x5eu)
    {
        eax = rd8(esi + 1u) - 0x34u;
        goto L_100b27c1;
    }
    eax = rd8(esi + 1u) - 0x34u;
    t22 = rd32(COW_IMG(0x100b28ccu) + rd8(COW_IMG(0x100b28d8u) + eax) * 4u);
    switch (t22 - RD)
    {
    case 0x100b27b1u: goto L_100b27b1;
    case 0x100b27b9u: goto L_100b27b9;
    case 0x100b27c1u: goto L_100b27c1;
    default: rt_fatal(g, COW_IMG(0x100b27aau), "switch");
    }
    return 0;
L_100b27b1: ;
    esi = esi + 4u;
    goto L_100b26e7;
L_100b27b9: ;
    esi = esi + 3u;
    goto L_100b26e7;
L_100b27c1: ;
    esi = esi + 2u;
    goto L_100b26e7;
L_100b27c9: ;
    wr8(edi, 0u);
    if ((uint8_t)ebx != 0u)
    {
        if (!(loc_5e4 & 1u))
        {
            wr32(sp0 - 0x608u, loc_5e8);
            wr32(sp0 - 0x60cu, sp0 - 0x5dcu);
            g->ebp = self;
            g->edx = sp0 - 0x5dcu;
            g->esp = sp0 - 0x604u;
            cow_thiscall(g, COW_IMG(0x1014df90u), rd32(COW_IMG(0x1047d3e8u)), 2, sp0 - 0x5dcu, loc_5e8);
            t19 = g->edx;
            if (rd32(sp0 - 0x5e0u) != rd32(sp0 - 0x5f0u))
            {
                eax = rd32(sp0 - 0x5f0u);
            }
            else
            {
                edx = t19;
                wr32(sp0 - 0x608u, 0u);
                t20 = rd32(sp0 - 0x5ecu);
                wr32(sp0 - 0x60cu, t20);
                g->esp = sp0 - 0x604u;
                t21 = cow_fastcall(g, COW_IMG(0x1014e0f0u), rd32(COW_IMG(0x1047d3e8u)), edx, 2, t20, 0u);
                eax = t21;
            }
        }
    }
    else
    {
        wr32(sp0 - 0x608u, sp0 - 0x5dcu);
        g->eax = sp0 - 0x5dcu;
        g->esp = sp0 - 0x604u;
        t18 = cow_thiscall(g, COW_IMG(0x1014df50u), rd32(COW_IMG(0x1047d3e8u)), 1, sp0 - 0x5dcu);
        eax = t18;
    }
    goto L_100b281c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b25f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100b25f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
