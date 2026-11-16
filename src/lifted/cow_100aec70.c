/* f_0x100aec70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100aec70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->eax = (uint32_t)(int16_t)arg1;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x16u, (uint32_t)(int16_t)arg1, (uint32_t)(int16_t)arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        goto L_100aecad;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    t4 = rd16(eax);
    wr16(eax, (t4 & 0xfe16u) | 0x16u);
    wr16(eax + 4u, (uint16_t)arg1);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t5 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 8u, 0u);
    return (t5 & 0xffffff00u) | 1u;
L_100aecad: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100aec70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100aec70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
