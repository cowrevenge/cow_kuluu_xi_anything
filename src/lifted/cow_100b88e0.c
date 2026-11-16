/* f_0x100b88e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b88e0(Guest* g)
{
    uint32_t eax;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0xcu, in_esi);
    t1 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
    if (t1 == 0u)
    {
        edx = t1;
        goto L_100b89d1;
    }
    eax = t1;
    edx = t1;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_100b899f;
    }
    eax = eax - 1u;
    if (eax != 1u) goto L_100b89f6;
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, sp0 - 8u);
    wr32(sp0 - 0x18u, sp0 - 4u);
    wr32(sp0 - 0x1cu, 2u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t2 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t3 = g->edx;
    wr32(sp0 - 0x1cu, t2);
    g->esp = sp0 - 0x10u;
    t4 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t3, 3, t2, sp0 - 4u, sp0 - 8u);
    if ((uint8_t)t4 == 1u)
    {
        if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u);
            edi = COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u;
            if (rd32(eax + 0x120u) >> 9u & 1u)
            {
                wr32(sp0 - 0x14u, 6u);
                t5 = (rd32(eax + 0x12cu) & 0xffff00ffu) | ((rd32(eax + 0x12cu) >> 8u & 0xfeu) << 8u >> 8u | 2u) << 8u;
                wr32(eax + 0x12cu, t5);
                g->eax = eax;
                g->edx = t5;
                g->esp = sp0 - 0x10u;
                t6 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
                t7 = g->edx;
                wr32(sp0 - 0x14u, 8u);
                wr16(rd32(edi) + 0x14au, (uint16_t)t6);
                t8 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
                wr16(rd32(edi) + 0x14cu, (uint16_t)t8);
            }
        }
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0xau));
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return;
L_100b899f: ;
    wr32(sp0 - 0x10u, 0xau);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t9 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xau);
    t10 = g->edx;
    wr32(sp0 - 0x10u, t9);
    wr32(sp0 - 0x14u, 6u);
    g->edx = t10;
    g->esp = sp0 - 0x10u;
    t11 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 6u);
    t12 = g->edx;
    wr32(sp0 - 0x14u, t11);
    wr32(sp0 - 0x18u, 2u);
    g->edx = t12;
    g->esp = sp0 - 0x14u;
    t13 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t14 = g->edx;
    wr32(sp0 - 0x18u, t13);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x100b8810u), self, 3, t13, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0xcu));
    return;
L_100b89d1: ;
    wr32(sp0 - 0x10u, 6u);
    wr32(sp0 - 0x14u, 6u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t15 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 6u);
    t16 = g->edx;
    wr32(sp0 - 0x14u, t15);
    wr32(sp0 - 0x18u, 2u);
    g->edx = t16;
    g->esp = sp0 - 0x14u;
    t17 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t18 = g->edx;
    wr32(sp0 - 0x18u, t17);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x100b8810u), self, 3, t17, rd32(sp0 - 0x14u), 6u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0xau));
L_100b89f6: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b88e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b88e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
