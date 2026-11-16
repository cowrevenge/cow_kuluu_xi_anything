/* f_0x10127280 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10127280(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t self = g->ecx;

    if ((int32_t)((uint32_t)(int16_t)rd16(self + 0x14u) + 1u) < 100)
    {
        esi = (uint32_t)(int16_t)rd16(self + 0x14u) + 1u;
    }
    else
    {
        esi = 0u;
    }
    t1 = self + (esi << 0xbu) + 0x20u;
    if ((uint32_t)(int16_t)rd16(self + 0x16u) != esi)
    {
        eax = esi;
    }
    else
    {
        eax = esi;
        ecx = t1;
        edi = t1;
        if ((int16_t)rd16(self + 0x1au) > 50)
        {
            if (rd32(edi + 0xcu) != rd32(ecx + 0xcu)) goto L_101272d6;
L_101272b6: ;
            wr16(self + 0x1au, (uint16_t)(rd16(self + 0x1au) - 1u));
            if ((int32_t)(eax + 1u) < 100)
            {
                eax = eax + 1u;
            }
            else
            {
                eax = 0u;
            }
            if (rd32(edi + 0xcu) == rd32(self + (eax << 0xbu) + 0x2cu)) goto L_101272b6;
            ecx = self + (eax << 0xbu) + 0x20u;
L_101272d6: ;
            wr16(self + 0x16u, (uint16_t)eax);
            t2 = rd32(ecx + 0xcu);
            wr32(self, t2);
            eax = t2;
        }
    }
    t3 = rd16(self + 0x1au);
    wr16(self + 0x14u, (uint16_t)esi);
    if ((uint16_t)t3 != 0u)
    {
        eax = (eax & 0xffff0000u) | t3;
    }
    else
    {
        eax = (eax & 0xffff0000u) | t3;
        wr16(self + 0x16u, (uint16_t)esi);
    }
    wr16(self + 0x1au, (uint16_t)(eax + 1u));
    edi = self + ((uint32_t)(int16_t)esi << 0xbu) + 0x20u;
    eax = 0u;
    ecx = 0x200u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->edx = self;
    return self + ((uint32_t)(int16_t)rd16(self + 0x14u) << 0xbu) + 0x20u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10127280(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10127280(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
