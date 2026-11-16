/* f_0x100b8810 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_100b8810(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, sp0 + 4u);
    wr32(sp0 - 0x14u, sp0 - 8u);
    wr32(sp0 - 0x18u, arg1);
    g->esp = sp0 - 0xcu;
    t1 = cow_fastcall(g, COW_IMG(0x100afb00u), self, arg1, 3, arg1, sp0 - 8u, sp0 + 4u);
    if ((uint8_t)t1 == 1u)
    {
        wr32(sp0 - 0x10u, sp0 + 8u);
        wr32(sp0 - 0x14u, sp0 - 8u);
        wr32(sp0 - 0x18u, arg2);
        g->esp = sp0 - 0xcu;
        t2 = cow_fastcall(g, COW_IMG(0x100afb00u), self, arg2, 3, arg2, sp0 - 8u, sp0 + 8u);
        if ((uint8_t)t2 == 1u)
        {
            if (rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) != 0u)
            {
                eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
                if (rd32(COW_IMG(0x10480af0u) + (uint16_t)arg2 * 4u) != 0u)
                {
                    ecx = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg2 * 4u);
                    if (rd32(eax + 0x120u) >> 9u & 1u)
                    {
                        if (rd32(ecx + 0x120u) >> 9u & 1u)
                        {
                            t3 = rd32(ecx + 0x78u);
                            wr32(sp0 - 4u, t3);
                            t4 = (rd32(eax + 0x12cu) & 0xffff00ffu) | ((rd32(eax + 0x12cu) >> 8u & 0xfdu) << 8u >> 8u | 1u) << 8u;
                            t5 = rd32(ecx + 0x74u);
                            wr32(eax + 0x12cu, t4);
                            wr16(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0x148u, (uint16_t)arg3);
                            wr16(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0x146u, (uint16_t)t5);
                        }
                    }
                }
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b8810(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b8810(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
