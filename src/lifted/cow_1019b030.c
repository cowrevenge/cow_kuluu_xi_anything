/* f_0x1019b030 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1019b030(Guest* g)
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, 3u);
    wr32(sp0 - 0x1cu, 2u);
    t1 = rd32(self + 0x34u);
    wr32(sp0 - 0x20u, t1);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->ebx = 0u;
    g->eax = t1;
    g->esp = sp0 - 0x14u;
    t2 = cow_thiscall(g, COW_IMG(0x10196a20u), self, 3, t1, 2u, 3u);
    wr32(sp0 - 0x18u, 0x19u);
    t3 = rd32(self + 0x24u);
    wr32(sp0 - 0x1cu, t3);
    t4 = rd32(self + 0x30u);
    wr32(sp0 - 0x20u, t4);
    t5 = (t2 & 0xffffff00u) | rd8(self + 0x20u) == 1u;
    wr32(sp0 - 0x24u, t5);
    wr32(sp0 - 0x28u, 1u);
    g->ebx = 0u;
    t6 = cow_call_regs(g, COW_IMG(0x10196b80u), t5, self, g->edx, 0, 5, 1u, t5, t4, t3, 0x19u);
    wr32(sp0 - 0x18u, 3u);
    t7 = rd32(self + 0x24u);
    wr32(sp0 - 0x1cu, t7);
    t8 = rd32(self + 0x28u);
    wr32(sp0 - 0x20u, t8);
    t9 = (t6 & 0xffffff00u) | rd8(self + 0x21u);
    wr32(sp0 - 0x24u, t9);
    wr32(sp0 - 0x28u, 4u);
    g->ebx = 0u;
    t10 = cow_call_regs(g, COW_IMG(0x10196b80u), t9, self, g->edx, 0, 5, 4u, t9, t8, t7, 3u);
    wr32(sp0 - 0x18u, 5u);
    t11 = rd32(self + 0x24u);
    wr32(sp0 - 0x1cu, t11);
    t12 = rd32(self + 0x2cu);
    wr32(sp0 - 0x20u, t12);
    t13 = (t10 & 0xffffff00u) | rd8(self + 0x22u) == 1u;
    wr32(sp0 - 0x24u, t13);
    wr32(sp0 - 0x28u, 7u);
    g->ebx = 0u;
    g->edx = t12;
    t14 = cow_call_regs(g, COW_IMG(0x10196b80u), t13, self, g->edx, 0, 5, 7u, t13, t12, t11, 5u);
    t15 = g->edx;
    if (rd8(self + 0x22u) != 0u)
    {
        eax = t14;
        edx = t15;
        edi = rd32(self + 0x24u);
    }
    else
    {
        eax = t14;
        edx = t15;
        edi = rd32(self + 0x2cu);
    }
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 7u);
    wr32(sp0 - 0x24u, sp0 - 8u);
    g->ebx = 0u;
    g->edi = edi;
    g->eax = eax;
    g->edx = edx;
    t16 = rd32(self + 8u);
    g->esp = sp0 - 0x14u;
    t17 = cow_thiscall(g, COW_IMG(0x10118900u), t16, 4, sp0 - 8u, 7u, 1u, 1u);
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 - 0x18u, 0x80808080u);
    wr32(sp0 - 0x1cu, edi);
    g->ecx = t18;
    g->esp = sp0 - 0x18u;
    t20 = cow_cdecl(g, COW_IMG(0x10002f00u), 1, edi);
    t21 = g->ecx;
    wr32(sp0 - 0x1cu, t20);
    t22 = rd32(sp0 - 6u) + 0x11u;
    wr32(sp0 - 0x20u, t22);
    t23 = rd32(sp0 - 4u) - 0x14u;
    wr32(sp0 - 0x24u, t23);
    g->eax = t23;
    g->edx = t22;
    g->esp = sp0;
    t24 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t23, t22, t20, 0x80808080u, in_edi, in_esi, in_ebx, rd32(sp0 - 8u), rd32(sp0 - 4u));
    t25 = g->edx;
    wr32(sp0 - 0x18u, 6u);
    g->edi = edi;
    g->edx = t25;
    g->esp = sp0 - 0x14u;
    t26 = cow_thiscall(g, COW_IMG(0x10118ad0u), rd32(self + 8u), 1, 6u);
    t27 = g->edx;
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 6u);
    wr32(sp0 - 0x24u, sp0 - 8u);
    g->ebx = 0u;
    g->edi = t26;
    t28 = cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, 6u, 1u, 1u);
    if (rd16(rd32(self + 8u) + 0x4cu) != 6u)
    {
        eax = t28;
        ecx = rd32(COW_IMG(0x10662778u));
        edx = rd32(self + 8u);
        edi = t26;
        if (ecx != 0u)
        {
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t34 = cow_thiscall(g, COW_IMG(0x1011ba40u), ecx, 0);
            t35 = g->edx;
            if ((uint8_t)t34 == 0u)
            {
                eax = t34;
            }
            else
            {
                eax = t34;
                edx = t35;
                wr32(sp0 - 0x18u, COW_IMG(0x1037a708u));
                g->eax = eax;
                g->esp = sp0 - 0x14u;
                t36 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037a708u));
                eax = t36;
            }
        }
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, 0x80808080u);
        t37 = (uint32_t)(int16_t)rd16(sp0 - 6u);
        wr32(sp0 - 0x24u, t37);
        t38 = (uint32_t)(int16_t)rd16(sp0 - 8u);
        wr32(sp0 - 0x28u, t38);
        g->edx = t38;
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x1011fb60u), edi, 5, t38, t37, 0x80808080u, 0u, 0u);
        t39 = g->edx;
        edx = t39;
    }
    else
    {
        eax = t28;
        ecx = rd32(COW_IMG(0x10662778u));
        edx = rd32(self + 8u);
        edi = t26;
        if (ecx != 0u)
        {
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t29 = cow_thiscall(g, COW_IMG(0x1011ba40u), ecx, 0);
            t30 = g->edx;
            if ((uint8_t)t29 == 0u)
            {
                eax = t29;
                edx = t30;
                wr32(sp0 - 0x18u, 0u);
                wr32(sp0 - 0x1cu, 1u);
                wr32(sp0 - 0x20u, COW_IMG(0x1037a708u));
                g->ebx = 0u;
                g->esp = sp0 - 0x14u;
                cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037a708u), 1u, 0u);
                if (rd32(rd32(COW_IMG(0x10662778u)) + 8u) != 0u)
                {
                    eax = (uint32_t)(int16_t)rd16(self + 0x4eu) - 0xeu;
                    ecx = rd32(rd32(COW_IMG(0x10662778u)) + 8u);
                    edx = (uint32_t)(int16_t)rd16(self + 0x50u);
                    wr32(sp0 - 0x18u, eax);
                    wr32(sp0 - 0x1cu, edx);
                    g->esp = sp0 - 0x14u;
                    cow_call_regs(g, COW_IMG(0x10119110u), eax, ecx, g->edx, 0, 2, edx, eax);
                }
            }
        }
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0x80805020u);
        wr32(sp0 - 0x28u, 0x3f800000u);
        wr32(sp0 - 0x2cu, 0x3f800000u);
        t31 = (uint32_t)(int16_t)rd16(sp0 - 6u);
        wr32(sp0 - 0x30u, t31);
        t32 = (uint32_t)(int16_t)rd16(sp0 - 8u);
        wr32(sp0 - 0x34u, t32);
        g->edx = t31;
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x1011fc80u), edi, 8, t32, t31, 0x3f800000u, 0x3f800000u, 0x80805020u, 0u, 0u, 0u);
        t33 = g->edx;
        edx = t33;
    }
    if ((int32_t)rd32(self + 0x44u) <= 1)
    {
        eax = rd32(self + 0x44u);
        goto L_1019b1de;
    }
    eax = rd32(self + 0x44u);
    wr32(sp0 - 0x18u, 0xbu);
    wr32(sp0 - 0x1cu, 6u);
    wr32(sp0 - 0x20u, eax - 1u);
    g->ebx = 0u;
    g->eax = eax - 1u;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t40 = cow_thiscall(g, COW_IMG(0x10196a20u), self, 3, eax - 1u, 6u, 0xbu);
    t41 = g->edx;
    g->ebx = 0u;
    g->edx = t41;
    t42 = cow_call_regs(g, COW_IMG(0x1019b6d0u), t40, self, g->edx, 1, 0);
    t43 = g->edx;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = t43;
    return t42;
L_1019b1de: ;
    wr32(sp0 - 0x18u, 6u);
    wr32(sp0 - 0x1cu, 5u);
    wr32(sp0 - 0x20u, eax);
    g->ebx = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t44 = cow_thiscall(g, COW_IMG(0x10196a20u), self, 3, eax, 5u, 6u);
    t45 = g->edx;
    g->ebx = 0u;
    g->edx = t45;
    t46 = cow_call_regs(g, COW_IMG(0x1019b6d0u), t44, self, g->edx, 1, 0);
    t47 = g->edx;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = t47;
    return t46;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019b030(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019b030(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
