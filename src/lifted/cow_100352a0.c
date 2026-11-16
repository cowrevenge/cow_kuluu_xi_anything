/* f_0x100352a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100352a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd32(self + 4u) == 0u)
    {
        eax = rd32(self + 4u);
        goto L_100352b1;
    }
    if (rd32(self + 0x14u) != 0u) goto L_100352b5;
    eax = rd32(self + 0x14u);
L_100352b1: ;
    return eax & 0xffffff00u;
L_100352b5: ;
    t1 = rd32(self + 4u);
    g->esp = sp0 - 4u;
    t2 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, t1);
    if ((int32_t)rd16(t2 + 0x32u) <= 0)
    {
        eax = 0u;
        goto L_100352e4;
    }
    eax = 0u;
    ecx = rd16(t2 + 0x32u);
L_100352d0: ;
    wr8(eax + rd32(self + 0x14u), 0u);
    wr8(COW_IMG(0x10462437u) + eax + 1u, 0u);
    if ((int32_t)(eax + 1u) < (int32_t)ecx)
    {
        eax = eax + 1u;
        goto L_100352d0;
    }
    eax = eax + 1u;
L_100352e4: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100352a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100352a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
