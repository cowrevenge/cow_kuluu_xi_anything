/* f_0x101a3300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101a3300(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg1 != 1u) goto L_101a3324;
    g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg2;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x101a1c60u), rd32(self + 4u), 1, (uint32_t)(int8_t)arg2);
    wr8(self + 0xeu, (uint8_t)arg2);
    g->ebx = in_ebx;
    return;
L_101a3324: ;
    if ((uint8_t)arg1 == 2u)
    {
        t1 = (uint32_t)(int8_t)arg2 + 0xau;
        g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg2;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x101a1c60u), rd32(self + 4u), 1, t1);
        wr8(self + 0xfu, (uint8_t)arg2);
    }
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a3300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101a3300(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
