/* f_0x101a45c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101a45c0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(self + 0xcu) != 1u)
    {
        wr8(self + 0xeu, (uint8_t)arg1);
        eax = in_eax;
        edx = (in_edx & 0xffffff00u) | (uint8_t)arg1;
    }
    else
    {
        wr8(self + 0xdu, (uint8_t)arg1);
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        edx = in_edx;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t1 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037aaa8u));
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10376314u));
    t4 = g->edx;
    g->edx = t4;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103762ecu));
    t5 = g->edx;
    g->edx = t5;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037aabcu), 1u, 0u);
    t6 = g->edx;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103798b8u), 1u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a45c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101a45c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
