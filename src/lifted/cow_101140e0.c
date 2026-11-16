/* f_0x101140e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101140e0(Guest* g)
{
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 4u;
    t2 = cow_stdcall(g, rd32(COW_IMG(0x103291c8u)), 2, t1, 0xffffffffu);   /* kernel32.dll!WaitForSingleObject */
    t3 = g->edx;
    if (t2 != 0xffffffffu)
    {
        edx = t3;
        t4 = rd32(self);
        wr16(self + 0x10au, 0u);
        wr16(self + 0x108u, 0u);
        g->esp = sp0 - 4u;
        cow_stdcall(g, rd32(COW_IMG(0x103291ccu)), 1, t4);   /* kernel32.dll!ReleaseMutex */
    }
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101140e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101140e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
