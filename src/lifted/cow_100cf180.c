/* f_0x100cf180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_100cf180(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x70u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_100cf19c;
    }
    ecx = rd32(self + 0x70u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x100956c0u), ecx, 1, 0xffu);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_100cf19c;
    }
    eax = t1;
    edx = t2;
    eax = (eax & 0xffffff00u) | 1u;
L_100cf19e: ;
    if ((uint8_t)eax == 0u) goto L_100cf1b1;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x100d6060u), self, 1, 0u);
    return (t3 & 0xffffff00u) | 1u;
L_100cf19c: ;
    eax = eax & 0xffffff00u;
    goto L_100cf19e;
L_100cf1b1: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x100d61f0u), self, 1, 0u);
    return (t4 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100cf180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100cf180(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
