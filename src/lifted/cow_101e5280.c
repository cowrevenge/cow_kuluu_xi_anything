/* f_0x101e5280 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e5280(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
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
    const uint32_t in_edx = g->edx;

    if ((int32_t)rd32(self + 0x14u) < 2)
    {
        eax = rd32(self + 0x14u);
        edx = in_edx;
        goto L_101e52ff;
    }
    eax = rd32(self + 0x14u);
    if ((int32_t)eax > 4)
    {
        edx = in_edx;
        goto L_101e52ff;
    }
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, self, g->edx, 1, 4, 0x3eu, 3u, 0u, 0xffffffffu);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_101e52c9;
    }
    edx = t3;
    t4 = rd8(self + rd32(self + 0x14u) + 0x2eu);
    wr8(self + rd32(self + 0x14u) + 0x2eu, (uint8_t)(t4 - 1u));
    if ((int8_t)rd8(self + rd32(self + 0x14u) + 0x2eu) >= 0)
    {
        eax = self + rd32(self + 0x14u) + 0x2eu;
        edx = (edx & 0xffffff00u) | (uint8_t)(t4 - 1u);
        goto L_101e52ff;
    }
    eax = self + rd32(self + 0x14u) + 0x2eu;
    edx = (edx & 0xffffff00u) | (uint8_t)(t4 - 1u);
    wr8(eax, 0u);
    g->edx = edx;
    return eax;
L_101e52c9: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 2u, 0u, 0xffffffffu);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        eax = t5;
        edx = t7;
    }
    else
    {
        ecx = t6;
        t8 = rd32(self + 0x14u);
        t9 = rd8(self + rd32(self + 0x14u) + 0x2eu);
        wr8(self + t8 + 0x2eu, (uint8_t)(t9 + 1u));
        if ((int8_t)rd8(self + rd32(self + 0x14u) + 0x2eu) <= 15)
        {
            eax = self + rd32(self + 0x14u) + 0x2eu;
            edx = (t8 & 0xffffff00u) | (uint8_t)(t9 + 1u);
        }
        else
        {
            eax = self + rd32(self + 0x14u) + 0x2eu;
            edx = (t8 & 0xffffff00u) | (uint8_t)(t9 + 1u);
            wr8(eax, 0xfu);
        }
    }
L_101e52ff: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e5280(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e5280(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
