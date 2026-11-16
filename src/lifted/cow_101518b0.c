/* f_0x101518b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101518b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t3;
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
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0xcu, in_esi);
    if (rd32(self + 0x70u) == 0u)
    {
        ecx = self;
        edx = in_edx;
        goto L_101518e6;
    }
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, self + 0x6cu);
    g->eax = self + 0x6cu;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x10152490u), 3, self + 0x6cu, 0u, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        goto L_101518e6;
    }
    eax = t1;
    edx = t3;
    wr32(sp0 - 0x10u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, COW_IMG(0x10151340u), self, 1, 0u);
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_stdcall(g, COW_IMG(0x10151d90u), 0);
    t7 = g->edx;
    g->esi = rd32(sp0 - 0xcu);
    g->edx = t7;
    return t6;
L_101518e6: ;
    wr32(sp0 - 0x10u, in_edi);
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
    }
    else
    {
        eax = rd32(self + 8u);
        if (rd16(eax + 0x4cu) != rd16(self + 0xbcu))
        {
            edi = (in_edi & 0xffff0000u) | rd16(eax + 0x4cu);
            wr32(sp0 - 0x14u, 1u);
            wr32(sp0 - 0x18u, 0u);
            if ((uint16_t)edi != 0xbu)
            {
                wr32(sp0 - 0x1cu, 0xbu);
                loc_1c = 0xbu;
            }
            else
            {
                wr32(sp0 - 0x1cu, 7u);
                loc_1c = 7u;
            }
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t8 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, loc_1c);
            t9 = g->edx;
            wr32(sp0 - 0x1cu, t8);
            g->edx = t9;
            g->esp = sp0 - 0x10u;
            t10 = cow_thiscall(g, COW_IMG(0x1011aaf0u), rd32(self + 8u), 3, t8, 0u, 1u);
            t11 = g->edx;
            wr16(self + 0xbcu, (uint16_t)edi);
            eax = t10;
            edx = t11;
        }
    }
    if (rd8(sp0 + 4u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 + 4u);
        if (rd32(self + 0xc0u) != 4u)
        {
            t13 = rd32(self + 8u);
            wr8(t13 + 0x61u, 1u);
            edx = t13;
        }
        else
        {
            if (rd16(rd32(self + 8u) + 0x4cu) != 9u)
            {
                eax = (eax & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
                ecx = rd32(self + 8u);
                if ((uint16_t)eax != 0xau)
                {
                    wr32(sp0 - 0x10u, 1u);
                    wr32(sp0 - 0x14u, 9u);
                    g->edx = edx;
                    g->esp = sp0 - 0xcu;
                    cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, 9u, 1u);
                    t12 = g->edx;
                    edx = t12;
                }
            }
            wr8(rd32(self + 8u) + 0x61u, 0u);
        }
        t14 = rd32(self + 8u);
        t15 = rd16(rd32(self + 8u) + 0x4cu);
        t16 = rd8(COW_IMG(0x10371d60u) + (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu));
        wr8(sp0 + 4u, (uint8_t)t16);
        if ((uint8_t)t16 == 0xffu)
        {
            eax = t14;
            goto L_101519bc;
        }
        ecx = ((uint32_t)(int16_t)t15 & 0xffffff00u) | t16;
        if (rd32(COW_IMG(0x104dfd98u)) == 0u)
        {
            eax = rd32(COW_IMG(0x104dfd98u));
            goto L_101519bc;
        }
        eax = rd32(COW_IMG(0x104dfd98u));
        if ((uint8_t)ecx == 0u)
        {
            eax = eax + (uint8_t)rd32(sp0 + 4u) * 8u + 0x194c0u;
            edx = (uint8_t)rd32(sp0 + 4u);
            goto L_101519bc;
        }
        eax = eax + (uint8_t)rd32(sp0 + 4u) * 8u + 0x194c0u;
        edx = (uint8_t)rd32(sp0 + 4u);
        if (rd16(eax + 4u) == 0u) goto L_101519bc;
        ecx = (ecx & 0xffff0000u) | rd16(eax + 4u);
        if (rd8(eax + 6u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(eax + 6u);
            goto L_101519bc;
        }
        eax = (eax & 0xffffff00u) | rd8(eax + 6u);
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x18u, eax);
        wr32(sp0 - 0x1cu, ecx);
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x1013e260u), eax, rd32(COW_IMG(0x10578204u)), g->edx, 0, 4, ecx, eax, 0u, 0u);
        t17 = g->edx;
        edx = t17;
L_101519cb: ;
        if (rd32(rd32(COW_IMG(0x105781e8u)) + 8u) != 0u)
        {
            eax = rd32(COW_IMG(0x105781e8u));
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t19 = cow_call_regs(g, COW_IMG(0x101262e0u), eax, rd32(COW_IMG(0x104e1d4cu)), g->edx, 1, 0);
            t20 = g->edx;
            if ((uint8_t)t19 == 0u)
            {
                edx = t20;
            }
            else
            {
                edx = t20;
                wr32(sp0 - 8u, 0u);
                wr32(sp0 - 4u, 0u);
                if (rd32(COW_IMG(0x104e1d4cu)) != 0u)
                {
                    eax = rd32(COW_IMG(0x104e1d4cu));
                    t21 = rd32(eax + 4u);
                    wr32(sp0 - 8u, t21);
                    t22 = rd32(eax + 8u);
                    wr32(sp0 - 4u, t22);
                    edx = t22;
                }
                wr32(sp0 - 0x10u, sp0 - 8u);
                g->eax = sp0 - 8u;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                t23 = cow_thiscall(g, COW_IMG(0x10118c10u), rd32(rd32(COW_IMG(0x105781e8u)) + 8u), 1, sp0 - 8u);
                t24 = g->edx;
                if ((uint8_t)t23 == 0u)
                {
                    edx = t24;
                }
                else
                {
                    eax = t23;
                    wr32(sp0 - 0x10u, 0u);
                    wr32(sp0 - 0x14u, 8u);
                    g->edx = rd32(self);
                    t25 = rd32(self);
                    g->esp = sp0 - 0xcu;
                    cow_thiscall(g, rd32(t25 + 0x18u), self, 2, 8u, 0u);
                    t26 = g->edx;
                    edx = t26;
                }
            }
        }
    }
    if (rd32(self + 0xc0u) == 6u)
    {
        eax = rd32(self + 0xc0u);
        goto L_10151a3f;
    }
    eax = rd32(self + 0xc0u);
    if (eax != 5u) goto L_10151a46;
L_10151a3f: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t27 = cow_stdcall(g, COW_IMG(0x10151d90u), 0);
    t28 = g->edx;
    eax = t27;
    edx = t28;
L_10151a46: ;
    g->edx = edx;
    return eax;
L_101519bc: ;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x1013e2f0u), eax, rd32(COW_IMG(0x10578204u)), g->edx, 0, 2, 0u, 0u);
    t18 = g->edx;
    edx = t18;
    goto L_101519cb;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101518b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101518b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
