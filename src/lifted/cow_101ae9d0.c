/* f_0x101ae9d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101ae9d0(Guest* g)
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

    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_101ae9ed;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->edx = edx;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10222b90u), 3, 0x14u, 0u, 1u);
    t4 = g->edx;
    g->edx = t4;
    return 1u;
L_101ae9ed: ;
    g->edx = edx;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10222b90u), 3, 3u, 0u, 1u);
    t5 = g->edx;
    g->edx = t5;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ae9d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ae9d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
