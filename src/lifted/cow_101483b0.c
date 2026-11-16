/* f_0x101483b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101483b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x10146310u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t3;
    }
    else
    {
        ecx = t2;
        if ((int16_t)rd16(self + 0x14u) <= 0)
        {
            edi = 0u;
        }
        else
        {
            eax = (uint32_t)(int16_t)rd16(self + 0x14u);
            ecx = COW_IMG(0x104856a4u) + (uint32_t)(int16_t)rd16(self + 0x16u) * 2u;
            edx = eax;
            edi = 0u;
L_101483d4: ;
            if ((int8_t)(rd16(ecx) >> 8u) >= 0)
            {
                eax = (eax & 0xffff0000u) | rd16(ecx);
                goto L_101483e2;
            }
            eax = (eax & 0xffff0000u) | rd16(ecx);
            if ((eax & 0x7fffu) == 0u) goto L_101483e3;
L_101483e2: ;
            edi = edi + 1u;
L_101483e3: ;
            if (edx != 1u)
            {
                ecx = ecx + 2u;
                edx = edx - 1u;
                goto L_101483d4;
            }
            ecx = ecx + 2u;
        }
        t4 = (uint32_t)((int32_t)(edi + 1u - (uint32_t)((int32_t)(edi + 1u) >> 0x1fu)) >> 1u) * 0xeu + 0x16u;
        t5 = ((uint32_t)((int32_t)(edi + 1u - (uint32_t)((int32_t)(edi + 1u) >> 0x1fu)) >> 1u) * 8u - (uint32_t)((int32_t)(edi + 1u - (uint32_t)((int32_t)(edi + 1u) >> 0x1fu)) >> 1u) & 0xffff0000u) | (uint16_t)(rd16(self + 0x1cu) - rd16(self + 0x18u));
        t6 = (t4 & 0xffff0000u) | rd16(self + 0x1au);
        t7 = (ecx & 0xffff0000u) | rd16(self + 0x18u);
        g->eax = t6;
        g->edx = t5;
        g->esp = sp0 - 8u;
        t8 = cow_thiscall(g, COW_IMG(0x1011a5a0u), rd32(self + 8u), 7, t7, t6, t5, t4, 0u, 0u, 0u);
        t9 = g->edx;
        eax = t8;
        edx = t9;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101483b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101483b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
