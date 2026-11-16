/* f_0x101fe540 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_101fe540(Guest* g)
{
    uint32_t ecx;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int8_t)rd8(self + 0x11u) >= 0)
    {
        ecx = (self & 0xffffff00u) | rd8(self + 0x11u);
        goto L_101fe54c;
    }
    return (in_eax & 0xffffff00u) | 1u;
L_101fe54c: ;
    if ((int32_t)rd32(COW_IMG(0x10663aa8u)) > (int32_t)(arg1 - 0x7080u)) goto L_101fe564;
    return arg1 - 0x7080u & 0xffffff00u;
L_101fe564: ;
    return rd8(COW_IMG(0x106638a8u) + arg1 - 0x7080u) >> 4u == (uint8_t)ecx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fe540(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fe540(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
