/* f_0x100b6250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b6250(Guest* g)
{
    uint32_t eax;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t4 = g->edx;
    eax = t3;
    ecx = 0u;
    edx = t4;
    ebx = t1;
    edi = 0u;
L_100b626b: ;
    if ((int32_t)ebx > (int32_t)ecx)
    {
        edi = edi >> 1u;
    }
    else
    {
        edi = edi >> 1u;
        if ((int32_t)eax >= (int32_t)ecx)
        {
            edi = edi | 0x80000000u;
        }
    }
    if ((int32_t)(ecx + 1u) < 32)
    {
        ecx = ecx + 1u;
        goto L_100b626b;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 5u);
    t6 = g->edx;
    t7 = (t5 & edi) >> (ebx & 0x1fu);
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 7u, t7);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 9u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b6250(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b6250(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
