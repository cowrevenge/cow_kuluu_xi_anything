/* f_0x100cf0b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100cf0b0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int8_t)rd32(self + 0x840u) >= 0)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x840u);
        t1 = (eax & 0xffffff00u) | (eax & 0x7fu);
        wr32(self + 0x840u, t1);
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x100cef00u), self, 3, 0x316c6b21u, arg1, 0u);
        t2 = g->edx;
        g->edx = t2;
        cow_thiscall(g, COW_IMG(0x100cef00u), self, 3, 0x326c6b21u, arg1, 0u);
        t3 = g->edx;
        g->edx = t3;
        cow_thiscall(g, COW_IMG(0x100cef00u), self, 3, 0x336c6b21u, arg1, 0u);
        t4 = g->edx;
        edx = t4;
    }
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100cf0b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100cf0b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
