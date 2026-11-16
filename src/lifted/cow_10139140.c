/* f_0x10139140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10139140(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_edi);
    if (rd8(sp0 + 4u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(sp0 + 4u);
        edx = in_edx;
    }
    else
    {
        wr32(sp0 - 0x10u, in_esi);
        t1 = rd16(rd32(self + 8u) + 0x4cu);
        t2 = rd8(COW_IMG(0x1036f9bcu) + (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu));
        wr8(sp0 + 4u, (uint8_t)t2);
        if ((uint8_t)t2 == 0xffu)
        {
            edx = in_edx;
        }
        else
        {
            ecx = ((uint32_t)(int16_t)t1 & 0xffffff00u) | t2;
            if (rd32(COW_IMG(0x104dfd98u)) == 0u)
            {
                edx = rd32(COW_IMG(0x104dfd98u));
            }
            else
            {
                edx = rd32(COW_IMG(0x104dfd98u));
                wr32(sp0 - 0x14u, in_ebp);
                t3 = rd32(sp0 + 4u);
                if ((uint8_t)ecx != 0u)
                {
                    eax = edx + (uint8_t)t3 * 0x2cu + 0x19308u;
                    esi = t3;
                    if (rd16(eax) == 0u)
                    {
                        eax = (eax & 0xffff0000u) | rd16(eax);
                        goto L_101391ca;
                    }
                    eax = (eax & 0xffff0000u) | rd16(eax);
                    if ((uint16_t)eax == 0xffffu) goto L_101391ca;
                    wr32(sp0 - 0x14u, 0u);
                    wr32(sp0 - 0x18u, 0x12u);
                    wr32(sp0 - 0x1cu, esi);
                    wr32(sp0 - 0x20u, eax);
                    g->edi = self;
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    cow_call_regs(g, COW_IMG(0x1013e260u), eax, rd32(COW_IMG(0x10578204u)), g->edx, 0, 4, eax, esi, 0x12u, 0u);
                    t5 = g->edx;
                    edx = t5;
                }
                else
                {
                    eax = edx + (uint8_t)t3 * 0x2cu + 0x19308u;
                    wr32(sp0 - 0x14u, 0u);
                    wr32(sp0 - 0x18u, 0u);
                    wr32(sp0 - 0x1cu, 0u);
                    wr32(sp0 - 0x20u, 0xffffu);
                    g->edi = self;
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    cow_call_regs(g, COW_IMG(0x1013e260u), eax, rd32(COW_IMG(0x10578204u)), g->edx, 0, 4, 0xffffu, 0u, 0u, 0u);
                    t4 = g->edx;
                    edx = t4;
                }
            }
        }
L_101391d9: ;
        if (rd32(rd32(COW_IMG(0x10578484u)) + 8u) == 0u)
        {
            eax = rd32(rd32(COW_IMG(0x10578484u)) + 8u);
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x10578484u)) + 8u);
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t7 = cow_call_regs(g, COW_IMG(0x101262e0u), eax, rd32(COW_IMG(0x104e1d4cu)), g->edx, 1, 0);
            t8 = g->edx;
            if ((uint8_t)t7 == 0u)
            {
                eax = t7;
                edx = t8;
            }
            else
            {
                wr32(sp0 - 8u, 0u);
                wr32(sp0 - 4u, 0u);
                if (rd32(COW_IMG(0x104e1d4cu)) != 0u)
                {
                    eax = rd32(COW_IMG(0x104e1d4cu));
                    t9 = rd32(eax + 4u);
                    wr32(sp0 - 8u, t9);
                    t10 = rd32(eax + 8u);
                    wr32(sp0 - 4u, t10);
                }
                wr32(sp0 - 0x10u, sp0 - 8u);
                g->edx = rd32(COW_IMG(0x10578484u));
                t11 = rd32(COW_IMG(0x10578484u));
                g->esp = sp0 - 0xcu;
                t12 = cow_thiscall(g, COW_IMG(0x10118c10u), rd32(t11 + 8u), 1, sp0 - 8u);
                t13 = g->edx;
                if ((uint8_t)t12 == 0u)
                {
                    eax = t12;
                    edx = t13;
                }
                else
                {
                    edx = t13;
                    wr32(sp0 - 0x10u, 0u);
                    wr32(sp0 - 0x14u, 8u);
                    g->eax = rd32(self);
                    g->edx = edx;
                    t14 = rd32(self);
                    g->esp = sp0 - 0xcu;
                    t15 = cow_thiscall(g, rd32(t14 + 0x18u), self, 2, 8u, 0u);
                    t16 = g->edx;
                    eax = t15;
                    edx = t16;
                }
            }
        }
    }
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_101391ca: ;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x1013e2f0u), eax, rd32(COW_IMG(0x10578204u)), g->edx, 0, 2, 0u, 0u);
    t6 = g->edx;
    edx = t6;
    goto L_101391d9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10139140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10139140(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
