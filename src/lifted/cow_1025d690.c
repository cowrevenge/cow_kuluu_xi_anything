/* f_0x1025d690 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1025d690(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(self + 0x3cu);
    t2 = (uint32_t)(int8_t)rd8(arg3 + 2u);
    t3 = rd32(self + 0x48u);
    t4 = rd32(sp0 + 4u);
    t5 = rd32(sp0 + 8u);
    t6 = rd8(arg3 + 3u);
    wr32(sp0 + 4u, t2);
    if ((int8_t)t6 > 0)
    {
        eax = t1;
        ecx = t2;
        edx = t3 + t4 * 2u + t1 * t5 * 2u;
        wr32(sp0 + 8u, eax * 2u);
        ebx = 0u;
        ebp = in_ebp;
        edi = arg4;
L_1025d6c7: ;
        if ((int32_t)ecx <= 0) goto L_1025d6f1;
        eax = 0u;
L_1025d6cd: ;
        t7 = rd16(eax * 2u + edx);
        t8 = rd8(eax + edi);
        wr16(eax * 2u + edx, (uint16_t)((t7 & 0xfffu) ^ t8 << 0xcu));
        if ((int32_t)(eax + 1u) < (int8_t)rd8(arg3 + 2u))
        {
            eax = eax + 1u;
            ebp = (t7 & 0xfffu) ^ ((ecx & 0xffff0000u) | t8) << 0xcu;
            ecx = (uint32_t)(int8_t)rd8(arg3 + 2u);
            goto L_1025d6cd;
        }
        ecx = (uint32_t)(int8_t)rd8(arg3 + 2u);
L_1025d6f1: ;
        if ((int32_t)(ebx + 1u) < (int8_t)rd8(arg3 + 3u))
        {
            edx = edx + rd32(sp0 + 8u);
            ebx = ebx + 1u;
            ebp = rd32(sp0 + 4u);
            edi = edi + rd32(sp0 + 4u);
            goto L_1025d6c7;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025d690(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1025d690(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
