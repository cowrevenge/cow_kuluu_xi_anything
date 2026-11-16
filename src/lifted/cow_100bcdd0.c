/* f_0x100bcdd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100bcdd0(Guest* g)
{
    double d11;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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

    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) == 0u)
    {
        wr32(rd32(self + 0x260u) + 0x140u, 0u);
        wr32(rd32(self + 0x260u) + 0x144u, 0u);
        wr32(rd32(self + 0x260u) + 0x148u, 0u);
        wr32(rd32(self + 0x260u) + 0x150u, 0u);
        wr32(rd32(self + 0x260u) + 0x154u, 0u);
        t19 = rd32(self + 0x260u);
        wr32(t19 + 0x158u, 0u);
        ecx = t19;
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        t1 = rd32(eax + 4u);
        wr32(rd32(self + 0x260u) + 0x140u, t1);
        t2 = rd32(eax + 8u);
        wr32(rd32(self + 0x260u) + 0x144u, t2);
        t3 = rd32(eax + 0xcu);
        wr32(rd32(self + 0x260u) + 0x148u, t3);
        t4 = rd32(eax + 0x10u);
        wr32(rd32(self + 0x260u) + 0x14cu, t4);
        t5 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x14u);
        t6 = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        wr32(rd32(self + 0x260u) + 0x150u, t5);
        t7 = rd32(t6 + 0x18u);
        wr32(rd32(self + 0x260u) + 0x154u, t7);
        t8 = rd32(t6 + 0x1cu);
        wr32(rd32(self + 0x260u) + 0x158u, t8);
        t9 = rd32(t6 + 0x20u);
        wr32(rd32(self + 0x260u) + 0x15cu, t9);
        t10 = rd32(self + 0x260u);
        d11 = (double)rdf32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x9cu);
        wrf32(t10 + 0x16cu, (float)d11);
        if (rd32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xa0u) == 0u)
        {
            eax = rd16(self + 2u);
        }
        else
        {
            eax = rd16(self + 2u);
            ecx = rd32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xa0u);
            edx = t10;
            g->eax = eax;
            g->esp = sp0 - 0x10u;
            t12 = cow_fastcall(g, COW_IMG(0x1002c8f0u), ecx, edx, 1, COW_IMG(0x10330ebcu));
            if ((uint8_t)t12 == 0u)
            {
                eax = t12;
            }
            else
            {
                t13 = (rd32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x12cu) & 0xffff00ffu) | (rd32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x12cu) >> 8u & 0xfcu) << 8u;
                wr32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x12cu, t13);
                t14 = rd16(self + 2u);
                wr16(rd32(COW_IMG(0x10480af0u) + t14 * 4u) + 0x148u, 0xffffu);
                eax = t14;
            }
        }
        if (rd8(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xeeu) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xeeu);
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = rd16(self + 2u);
            goto L_100bcf2f;
        }
        eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xeeu);
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        edx = rd16(self + 2u);
        if ((uint8_t)eax == 6u) goto L_100bcf2f;
        if ((uint8_t)eax == 7u) goto L_100bcf2f;
        if ((uint8_t)eax == 1u) goto L_100bcf2f;
        if ((uint8_t)eax == 2u) goto L_100bcf2f;
        if ((rd8(ecx + 0x120u) & 4u) == 0u)
        {
            t15 = rd32(ecx + 0x170u);
            wr32(ecx + 0x174u, t15);
        }
    }
L_100bcfe2: ;
    t20 = rd32(self + 0x260u);
    wr16(self + 0x244u, 0u);
    wr8(self + 0x25au, 0u);
    wr8(t20 + 0x162u, 0u);
    t21 = rd32(self + 0x10u);
    t22 = rd32(self + 8u);
    wr16(self + 0x224u, 0xffu);
    t23 = rd16(self + 0x258u);
    t24 = rd16(t21);
    wr16(self + 0x26u, (uint16_t)t24);
    wr8(self + 0x3au, 0u);
    wr16(self + 0x24u, 0x80u);
    wr32(self + 0x40u, t22);
    wr16(self + 0x256u, rd16(self + t23 * 0x20u + 0x26u));
    g->eax = t23 << 5u;
    g->esp = sp0 - 0x10u;
    t25 = cow_fastcall(g, COW_IMG(0x100bccd0u), self, t22, 1, 0x80u);
    wr16(self + rd16(self + 0x258u) * 0x20u + 0x26u, rd16(self + 0x256u));
    if ((int16_t)rd16(self + 0xcu) <= 0)
    {
        ecx = (uint32_t)(int16_t)rd16(self + 0xcu);
        goto L_100bd07d;
    }
    ecx = (uint32_t)(int16_t)rd16(self + 0xcu);
    eax = 0u;
    edx = rd32(self + 0x14u);
    edi = rd32(COW_IMG(0x104886dcu));
L_100bd06c: ;
    if (rd16(edx) == edi) goto L_100bd0a1;
    if ((int32_t)(eax + 1u) < (int32_t)ecx)
    {
        eax = eax + 1u;
        edx = edx + 2u;
        goto L_100bd06c;
    }
L_100bd07d: ;
    if ((int32_t)ecx <= 0) goto L_100bd0d3;
    eax = 0u;
    edx = rd32(self + 0x14u);
L_100bd086: ;
    if (rd16(edx) == 0xfffeu) goto L_100bd0a1;
    if ((int32_t)(eax + 1u) < (int32_t)ecx)
    {
        eax = eax + 1u;
        edx = edx + 2u;
        goto L_100bd086;
    }
    wr8(self + 0x25bu, 1u);
    return;
L_100bcf2f: ;
    if (rd32(ecx + 0x170u) == 0x2fu) goto L_100bcf5c;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t16 = cow_thiscall(g, COW_IMG(0x10095790u), ecx, 1, 0xffu);
    t17 = g->ecx;
    if ((uint8_t)t16 != 0u)
    {
        ecx = t17;
        goto L_100bcf5c;
    }
    if (rd32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x170u) != 0x30u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        ecx = rd16(self + 2u);
        goto L_100bcf89;
    }
    ecx = rd16(self + 2u);
L_100bcf5c: ;
    if (rd8(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xeeu) != 1u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        goto L_100bcf89;
    }
    eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    if ((rd8(eax + 0x120u) & 4u) == 0u)
    {
        t18 = rd32(eax + 0x170u);
        wr32(eax + 0x174u, t18);
        ecx = t18;
    }
    goto L_100bcfe2;
L_100bcf89: ;
    if ((rd8(eax + 0x120u) & 4u) == 0u)
    {
        wr32(eax + 0x174u, 0u);
    }
    goto L_100bcfe2;
L_100bd0a1: ;
    t26 = rd16(self + 0x258u);
    t27 = rd16(eax * 2u + rd32(self + 0x10u));
    wr8(self + 0x3au, (uint8_t)eax);
    t28 = rd32(self + 8u);
    wr16(self + 0x24u, 0x10u);
    wr32(self + 0x40u, t28);
    wr16(self + 0x26u, (uint16_t)t27);
    wr16(self + 0x256u, rd16(self + t26 * 0x20u + 0x26u));
L_100bd0d3: ;
    wr8(self + 0x25bu, 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100bcdd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100bcdd0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
