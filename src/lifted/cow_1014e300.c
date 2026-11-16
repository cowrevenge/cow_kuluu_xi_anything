/* f_0x1014e300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1014e300(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_1014e32b;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    if (eax == 2u) goto L_1014e3b6;
    if (eax == 3u) goto L_1014e3b6;
L_1014e32b: ;
    if ((int32_t)eax >= 2)
    {
        if ((int32_t)eax <= 3)
        {
            if (rd32(COW_IMG(0x1062193cu)) != 0u)
            {
                eax = rd32(COW_IMG(0x1062193cu));
                if (rd32(eax + 8u) != 0u)
                {
                    wr16(sp0 - 8u, 0u);
                    wr16(sp0 - 6u, 0u);
                    wr16(sp0 - 4u, 0u);
                    wr16(sp0 - 2u, 0u);
                    wr32(sp0 - 0x14u, sp0 - 8u);
                    g->esp = sp0 - 0x10u;
                    cow_call_regs(g, COW_IMG(0x10118f70u), eax, rd32(eax + 8u), g->edx, 0, 1, sp0 - 8u);
                    if ((int32_t)((uint32_t)(int16_t)rd16(sp0 - 4u) - (uint32_t)(int16_t)rd16(sp0 - 8u)) <= 512)
                    {
                        eax = (uint32_t)(int16_t)rd16(sp0 - 4u) - (uint32_t)(int16_t)rd16(sp0 - 8u);
                        edx = (uint32_t)(int16_t)rd16(sp0 - 8u);
                    }
                    else
                    {
                        edx = (uint32_t)(int16_t)rd16(sp0 - 8u);
                        eax = 0x200u;
                    }
                    if ((int32_t)((uint32_t)(int16_t)rd16(self + 0x34u) + 8u) <= (int32_t)eax)
                    {
                        ecx = (uint32_t)(int16_t)rd16(self + 0x34u) + 8u;
                    }
                    else
                    {
                        ecx = (uint32_t)(int16_t)rd16(self + 0x34u) + 8u;
                        eax = ecx;
                    }
                    wr32(sp0 - 0x14u, 0u);
                    wr32(sp0 - 0x18u, 1u);
                    wr32(sp0 - 0x1cu, 1u);
                    t1 = (edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x546u) - rd16(self + 0x542u));
                    wr32(sp0 - 0x20u, t1);
                    wr32(sp0 - 0x24u, eax);
                    t2 = (ecx & 0xffff0000u) | rd16(self + 0x542u);
                    wr32(sp0 - 0x28u, t2);
                    t3 = (eax & 0xffff0000u) | rd16(self + 0x540u);
                    wr32(sp0 - 0x2cu, t3);
                    g->esp = sp0 - 0x10u;
                    cow_thiscall(g, COW_IMG(0x1011a5a0u), rd32(self + 8u), 7, t3, t2, eax, t1, 1u, 1u, 0u);
                }
            }
        }
    }
L_1014e3b6: ;
    if (rd32(rd32(self + 8u) + 0x88u) == 0u)
    {
        eax = rd32(rd32(self + 8u) + 0x88u);
    }
    else
    {
        eax = rd32(rd32(self + 8u) + 0x88u);
        t4 = rd32(self + 0x24u);
        wr32(eax + 0x10u, t4);
        t5 = (uint32_t)(int16_t)rd16(self + 0x32u);
        wr32(eax + 0x14u, t5);
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014e300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014e300(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
