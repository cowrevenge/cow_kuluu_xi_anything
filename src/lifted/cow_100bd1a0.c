/* f_0x100bd1a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100bd1a0(Guest* g)
{
    uint32_t eax;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x188u, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        ecx = t2;
        edx = t3;
        eax = 0u;
    }
    else
    {
        eax = t1;
        edx = t3;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t4 = cow_thiscall(g, COW_IMG(0x100bd180u), eax, 0);
        t5 = g->ecx;
        t6 = g->edx;
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    t7 = rd32(sp0 + 8u);
    wr32(self + 0x25cu, eax);
    wr32(self + 0x260u, eax);
    wr32(self + 4u, arg1);
    wr32(self + 8u, arg1);
    wr16(self, (uint16_t)t7);
    wr32(self + 0x264u, 0u);
    t8 = rd16(arg3 + 4u);
    wr16(self + 0xcu, (uint16_t)t8);
    wr32(self + 0x10u, arg3 + 8u);
    t9 = arg3 + (uint32_t)(int16_t)t8 * 2u + 8u;
    wr32(self + 0x14u, t9);
    t10 = rd16(t9 + (uint32_t)(int16_t)t8 * 2u);
    wr16(self + 0x18u, (uint16_t)t10);
    t11 = t9 + (uint32_t)(int16_t)t8 * 2u + 4u;
    wr32(self + 0x1cu, t11);
    t12 = t10 * 4u + t11 + 4u;
    wr32(self + 0x20u, t12);
    eax = 0u;
    edi = t7;
L_100bd222: ;
    wr32(eax + rd32(self + 0x260u), 0u);
    if ((int32_t)(eax + 4u) < 320)
    {
        eax = eax + 4u;
        goto L_100bd222;
    }
    wr16(self + 0x256u, 0u);
    wr16(self + 0x258u, 0u);
    wr16(self + 0x244u, 0u);
    wr32(self + 0x246u, 0u);
    wr32(self + 0x24au, 0u);
    wr32(self + 0x24eu, 0u);
    wr32(self + 0x252u, 0u);
    eax = self + 0x24u;
    ecx = 0x10u;
L_100bd272: ;
    wr16(eax + 2u, 0u);
    wr16(eax, 0xffu);
    wr32(eax + 0x18u, 0xbf800000u);
    wr32(eax + 0x1cu, 0u);
    wr8(eax + 0x16u, 0u);
    wr8(eax + 0x17u, 0u);
    wr32(eax + 4u, rd32(COW_IMG(0x1035d008u)));
    wr32(eax + 8u, rd32(COW_IMG(0x1035d00cu)));
    wr32(eax + 0xcu, rd32(COW_IMG(0x1035d010u)));
    wr32(eax + 0x10u, rd32(COW_IMG(0x1035d014u)));
    if (ecx != 1u)
    {
        eax = eax + 0x20u;
        ecx = ecx - 1u;
        goto L_100bd272;
    }
    wr32(rd32(self + 0x260u) + 0x168u, 0x40a00000u);
    wr32(rd32(self + 0x260u) + 0x16cu, 0x40a00000u);
    t13 = rd32(self + 0x260u);
    wr16(self + 2u, (uint16_t)edi);
    wr8(self + 0x25bu, 0u);
    wr8(t13 + 0x160u, 0u);
    wr8(rd32(self + 0x260u) + 0x161u, 0u);
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)edi * 4u) == 0u)
    {
        edi = (uint16_t)edi;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10480af0u) + (uint16_t)edi * 4u);
        edi = (uint16_t)edi;
        t14 = rd32(ecx + 0x120u);
        t15 = (t14 >> 0xfu & 0xffffff00u) | ((t14 >> 0xfu | t14 >> 0xeu) & 1u);
        g->esp = sp0 - 0x10u;
        cow_fastcall(g, COW_IMG(0x1008e4b0u), ecx, t15, 1, t15);
        t16 = rd32(rd32(COW_IMG(0x10480af0u) + edi * 4u) + 0x120u) & 0xffdfffffu;
        wr32(rd32(COW_IMG(0x10480af0u) + edi * 4u) + 0x120u, t16);
        t17 = rd32(rd32(COW_IMG(0x10480af0u) + edi * 4u) + 0x120u) & 0xfff7ffffu;
        wr32(rd32(COW_IMG(0x10480af0u) + edi * 4u) + 0x120u, t17);
        t18 = rd32(COW_IMG(0x10480af0u) + edi * 4u);
        wr32(t18 + 0x1ecu, 0u);
        wr32(t18 + 0x1f4u, 0u);
        wr32(rd32(COW_IMG(0x10480af0u) + edi * 4u) + 0x12cu, rd32(rd32(COW_IMG(0x10480af0u) + edi * 4u) + 0x12cu) & 0xfffeffffu);
    }
    wr32(rd32(self + 0x260u) + 0x180u, 0u);
    if ((int16_t)rd16(self + 0xcu) <= 0)
    {
        eax = (uint32_t)(int16_t)rd16(self + 0xcu);
        goto L_100bd3b3;
    }
    eax = (uint32_t)(int16_t)rd16(self + 0xcu);
    t19 = rd32(self + 0x14u);
    wr32(sp0 + 8u, t19);
    ecx = 0u;
L_100bd38f: ;
    if (rd16(rd32(sp0 + 8u)) == rd32(COW_IMG(0x104886dcu)))
    {
        edx = rd16(rd32(sp0 + 8u));
        goto L_100bd3d8;
    }
    t20 = rd32(sp0 + 8u) + 2u;
    wr32(sp0 + 8u, t20);
    if ((int32_t)(ecx + 1u) < (int32_t)eax)
    {
        ecx = ecx + 1u;
        goto L_100bd38f;
    }
L_100bd3b3: ;
    if ((int32_t)eax <= 0) goto L_100bd5a8;
    ecx = 0u;
    edx = rd32(self + 0x14u);
L_100bd3c0: ;
    if (rd16(edx) == 0xfffeu) goto L_100bd529;
    if ((int32_t)(ecx + 1u) < (int32_t)eax)
    {
        ecx = ecx + 1u;
        edx = edx + 2u;
        goto L_100bd3c0;
    }
L_100bd5a8: ;
    if (rd32(COW_IMG(0x10480af0u) + edi * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + edi * 4u);
        t32 = (rd32(eax + 0x120u) & 0xffffff00u) | (rd32(eax + 0x120u) & 0x7fu);
        wr32(eax + 0x120u, t32);
    }
    if (rd32(COW_IMG(0x10480af0u) + edi * 4u) != 0u)
    {
        edi = rd32(COW_IMG(0x10480af0u) + edi * 4u);
        t33 = (rd32(edi + 0x120u) & 0xffff00ffu) | (rd32(edi + 0x120u) >> 8u & 0xfeu) << 8u;
        wr32(edi + 0x120u, t33);
    }
L_100bd5dc: ;
    return self;
L_100bd3d8: ;
    if (rd32(COW_IMG(0x10480af0u) + edi * 4u) == 0u) goto L_100bd5dc;
    eax = rd32(COW_IMG(0x10480af0u) + edi * 4u);
    t21 = rd32(eax + 0x120u) | 0x80u;
    wr32(eax + 0x120u, t21);
    if (rd8(rd32(COW_IMG(0x10480af0u) + edi * 4u) + 0xeeu) == 0u)
    {
        ecx = rd32(COW_IMG(0x10480af0u) + edi * 4u);
        goto L_100bd431;
    }
    eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x10480af0u) + edi * 4u) + 0xeeu);
    ecx = rd32(COW_IMG(0x10480af0u) + edi * 4u);
    if ((uint8_t)eax == 6u) goto L_100bd431;
    if ((uint8_t)eax == 7u) goto L_100bd431;
    if ((uint8_t)eax == 1u) goto L_100bd431;
    if ((uint8_t)eax == 2u) goto L_100bd431;
    if ((rd8(ecx + 0x120u) & 4u) == 0u)
    {
        t22 = rd32(ecx + 0x170u);
        wr32(ecx + 0x174u, t22);
    }
L_100bd48e: ;
    if (edi == (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)))
    {
        wr32(rd32(rd32(COW_IMG(0x10480af0u) + edi * 4u) + 0xa0u) + 0x7d8u, 0x20202020u);
    }
    t25 = rd32(rd32(COW_IMG(0x10480af0u) + edi * 4u) + 0x124u) & 0xdfffffffu;
    wr32(rd32(COW_IMG(0x10480af0u) + edi * 4u) + 0x124u, t25);
    t26 = rd32(rd32(COW_IMG(0x10480af0u) + edi * 4u) + 0x124u) & 0xbfffffffu;
    wr32(rd32(COW_IMG(0x10480af0u) + edi * 4u) + 0x124u, t26);
    t27 = rd32(rd32(COW_IMG(0x10480af0u) + edi * 4u) + 0x124u) & 0x7fffffffu;
    wr32(rd32(COW_IMG(0x10480af0u) + edi * 4u) + 0x124u, t27);
    t28 = rd32(rd32(COW_IMG(0x10480af0u) + edi * 4u) + 0x124u) & 0xfffdffffu;
    t29 = rd32(COW_IMG(0x10480af0u) + edi * 4u);
    wr32(t29 + 0x124u, t28);
    g->esp = sp0 - 0x10u;
    cow_fastcall(g, COW_IMG(0x1008d980u), rd32(COW_IMG(0x10480af0u) + edi * 4u), t27, 0);
    return self;
L_100bd431: ;
    if (rd32(ecx + 0x170u) == 0x2fu) goto L_100bd458;
    g->esp = sp0 - 0x10u;
    t23 = cow_thiscall(g, COW_IMG(0x10095790u), ecx, 1, 0xffu);
    if ((uint8_t)t23 != 0u) goto L_100bd458;
    if (rd32(rd32(COW_IMG(0x10480af0u) + edi * 4u) + 0x170u) != 0x30u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + edi * 4u);
        goto L_100bd47f;
    }
L_100bd458: ;
    if (rd8(rd32(COW_IMG(0x10480af0u) + edi * 4u) + 0xeeu) != 1u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + edi * 4u);
        goto L_100bd47f;
    }
    eax = rd32(COW_IMG(0x10480af0u) + edi * 4u);
    if ((rd8(eax + 0x120u) & 4u) == 0u)
    {
        t24 = rd32(eax + 0x170u);
        wr32(eax + 0x174u, t24);
    }
    goto L_100bd48e;
L_100bd47f: ;
    if ((rd8(eax + 0x120u) & 4u) == 0u)
    {
        wr32(eax + 0x174u, 0u);
    }
    goto L_100bd48e;
L_100bd529: ;
    if (rd32(COW_IMG(0x10480af0u) + edi * 4u) == 0u) goto L_100bd5dc;
    eax = rd32(COW_IMG(0x10480af0u) + edi * 4u);
    t30 = (rd32(eax + 0x120u) & 0xffffff00u) | (uint8_t)(rd32(eax + 0x120u) | 0x80u);
    wr32(eax + 0x120u, t30);
    if ((rd8(rd32(COW_IMG(0x10480af0u) + edi * 4u) + 0x120u) & 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + edi * 4u);
        edx = t30;
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + edi * 4u);
        t31 = rd32(eax + 0x170u);
        wr32(eax + 0x174u, t31);
        edx = t31;
    }
    if (rd8(rd32(COW_IMG(0x10480af0u) + edi * 4u) + 0xeeu) == 0u)
    {
        edi = rd32(COW_IMG(0x10480af0u) + edi * 4u);
        goto L_100bd590;
    }
    eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x10480af0u) + edi * 4u) + 0xeeu);
    edi = rd32(COW_IMG(0x10480af0u) + edi * 4u);
    if ((uint8_t)eax == 6u) goto L_100bd590;
    if ((uint8_t)eax == 1u) goto L_100bd590;
    if ((uint8_t)eax == 2u) goto L_100bd590;
    g->esp = sp0 - 0x10u;
    cow_fastcall(g, COW_IMG(0x1008d980u), edi, edx, 0);
    return self;
L_100bd590: ;
    if ((rd8(edi + 0x120u) & 4u) != 0u) goto L_100bd5dc;
    wr32(edi + 0x174u, 0u);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100bd1a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100bd1a0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
