/* f_0x100bd5f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100bd5f0(Guest* g)
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

    t1 = rd32(self + 4u);
    t2 = rd16(self);
    wr32(self + 8u, t1);
    t3 = rd32(self + 0x25cu);
    wr16(self + 2u, (uint16_t)t2);
    if (t3 == 0u)
    {
        eax = t3;
    }
    else
    {
        eax = t3;
        ecx = (self & 0xffff0000u) | t2;
        g->eax = eax;
        g->esp = sp0 - 8u;
        t4 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        eax = t4;
    }
    wr32(self + 0x25cu, 0u);
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        edx = rd16(self + 2u);
        if (rd32(ecx + 0xa0u) != 0u)
        {
            edi = rd32(ecx + 0xa0u);
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_thiscall(g, COW_IMG(0x10087d40u), ecx, 0);
            t5 = g->edx;
            t6 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x12cu) & 0xfffeffffu;
            wr32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x12cu, t6);
            t7 = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            t8 = cow_fastcall(g, COW_IMG(0x1002c8f0u), edi, t5, 1, COW_IMG(0x10330ebcu));
            if ((uint8_t)t8 == 0u)
            {
                eax = t8;
            }
            else
            {
                t9 = (rd32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x12cu) & 0xffff00ffu) | (rd32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x12cu) >> 8u & 0xfcu) << 8u;
                wr32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x12cu, t9);
                t10 = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
                t11 = rd16(self + 2u);
                wr16(t10 + 0x148u, 0xffffu);
                g->eax = t10;
                g->esp = sp0 - 8u;
                t12 = cow_fastcall(g, COW_IMG(0x10087e40u), rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u), t11, 0);
                t13 = g->edx;
                cow_thiscall(g, COW_IMG(0x100d44b0u), edi, 1, 2u);
                t14 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x1a8u);
                wr32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x1a4u, t14);
                wr32(rd32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xa0u) + 0x7d8u, 0x20202020u);
                g->eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
                t15 = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
                t16 = cow_thiscall(g, COW_IMG(0x100d5430u), rd32(t15 + 0xa0u), 1, 0u);
                eax = t16;
            }
        }
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100bd5f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100bd5f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
