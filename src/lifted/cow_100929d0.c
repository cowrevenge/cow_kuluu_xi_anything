/* f_0x100929d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100929d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x14u, in_esi);
    if ((rd32(self + 0x120u) >> 8u & 2u) != 0u)
    {
        ecx = rd32(self + 0x120u);
        if (rd8(self + 0xeeu) == 0u)
        {
            eax = (in_eax & 0xffffff00u) | rd8(self + 0xeeu);
            goto L_10092a07;
        }
        eax = (in_eax & 0xffffff00u) | rd8(self + 0xeeu);
        if ((uint8_t)eax == 1u) goto L_10092a07;
        if ((uint8_t)eax == 2u) goto L_10092a07;
        if ((uint8_t)eax == 6u) goto L_10092a07;
        if ((uint8_t)eax == 7u) goto L_10092a07;
        if ((uint8_t)eax != 8u) goto L_10092b14;
L_10092a07: ;
        wr32(sp0 - 0x10u, 0u);
        if ((ecx & 0x100000u) != 0u)
        {
            edx = in_edx;
        }
        else
        {
            g->esp = sp0 - 0x14u;
            t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
            if (t1 != self)
            {
                t8 = rd32(self + 0xcu);
                wr32(sp0 - 4u, t8);
                t9 = rd32(self + 8u);
                wr32(sp0 - 8u, t9);
                t10 = rd32(self + 4u);
                wr32(sp0 - 0xcu, t10);
                wr32(sp0 - 0x18u, sp0 - 0x10u);
                wr32(sp0 - 0x1cu, t8);
                wr32(sp0 - 0x20u, t9);
                wr32(sp0 - 0x24u, t10);
                g->eax = t8;
                g->edx = t10;
                g->esp = sp0 - 0x14u;
                t11 = cow_thiscall(g, COW_IMG(0x10181300u), rd32(COW_IMG(0x10631f24u)), 4, t10, t9, t8, sp0 - 0x10u);
                t12 = g->edx;
                if ((uint8_t)t11 != 1u)
                {
                    eax = t11;
                    edx = t12;
                }
                else
                {
                    edx = t12;
                    t13 = rd32(sp0 - 0x10u);
                    wr32(self + 8u, t13);
                    eax = t13;
                }
            }
            else
            {
                t2 = rd32(self + 0xcu);
                wr32(sp0 - 0xcu, t2);
                t3 = rd32(self + 8u);
                wr32(sp0 - 8u, t3);
                t4 = rd32(self + 4u);
                wr32(sp0 - 4u, t4);
                wr32(sp0 - 0x18u, sp0 - 0x10u);
                wr32(sp0 - 0x1cu, 0x42480000u);
                wr32(sp0 - 0x20u, t2);
                wr32(sp0 - 0x24u, t3);
                wr32(sp0 - 0x28u, t4);
                g->eax = t4;
                g->edx = t3;
                g->esp = sp0 - 0x14u;
                t5 = cow_thiscall(g, COW_IMG(0x10181290u), rd32(COW_IMG(0x10631f24u)), 5, t4, t3, t2, 0x42480000u, sp0 - 0x10u);
                t6 = g->edx;
                if ((uint8_t)t5 != 1u)
                {
                    eax = t5;
                    edx = t6;
                }
                else
                {
                    eax = t5;
                    edx = t6;
                    t7 = rd32(sp0 - 0x10u);
                    wr32(self + 8u, t7);
                }
            }
        }
        wr32(sp0 - 0x18u, in_ebx);
        wr32(sp0 - 0x1cu, in_edi);
        wr32(sp0 - 0x20u, self + 4u);
        t14 = rd32(self + 0xa0u) + 0x34u;
        wr32(sp0 - 0x24u, t14);
        g->eax = eax;
        g->ecx = t14;
        g->esp = sp0 - 0x1cu;
        t15 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t14, self + 4u);
        t16 = g->ecx;
        wr32(sp0 - 0x28u, self + 4u);
        t17 = rd32(self + 0xa0u) + 0x5fcu;
        wr32(sp0 - 0x2cu, t17);
        g->ecx = t16;
        g->edx = t17;
        t18 = rd32(self + 0xa0u);
        g->esp = sp0 - 0x24u;
        cow_cdecl(g, COW_IMG(0x10026e90u), 2, t17, self + 4u);
        t19 = g->ecx;
        t20 = g->edx;
        wr32(t18 + 0x608u, 0x3f800000u);
        wr32(sp0 - 0x30u, self + 4u);
        t21 = rd32(self + 0xa0u) + 0x5c4u;
        wr32(sp0 - 0x34u, t21);
        g->eax = t21;
        g->edx = t20;
        g->esp = sp0 - 0x2cu;
        t22 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t21, self + 4u);
        t23 = g->edx;
        wr32(sp0 - 0x20u, self + 4u);
        g->edx = t23;
        g->esp = sp0 - 0x1cu;
        t24 = cow_thiscall(g, COW_IMG(0x100a57c0u), rd32(self + 0xa0u), 1, self + 4u);
        t25 = g->edx;
        wr32(sp0 - 0x20u, self + 4u);
        t26 = rd32(self + 0xa0u) + 0xc4u;
        wr32(sp0 - 0x24u, t26);
        cow_cdecl(g, COW_IMG(0x10026e90u), 2, t26, self + 4u);
    }
L_10092b14: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100929d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100929d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
