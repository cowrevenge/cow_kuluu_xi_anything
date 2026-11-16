/* f_0x101deac0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101deac0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(self + 0xdu) == 1u) goto L_101deacb;
    eax = (in_eax & 0xffffff00u) | rd8(self + 0xdu);
    if ((uint8_t)eax != 2u)
    {
        edx = in_edx;
        goto L_101deaea;
    }
L_101deacb: ;
    t1 = rd32(arg1) + (uint32_t)(int16_t)rd16(self + 0xeu);
    t2 = rd32(arg1);
    t3 = rd16(self + 0xeu);
    wr32(arg1, t1);
    if (t2 + (uint32_t)(int16_t)t3 != 0u)
    {
        ecx = t1;
        wr32(arg1, ecx + 0xfu);
    }
    t4 = rd32(arg1);
    wr32(arg2, t4);
    eax = arg2;
    edx = t4;
L_101deaea: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101deac0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101deac0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
