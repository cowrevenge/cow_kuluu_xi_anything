/* f_0x10226080 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10226080(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    eax = 0u;
L_10226085: ;
    wr16(eax * 2u + self, (uint16_t)eax);
    if ((int32_t)(eax + 1u) < 128)
    {
        eax = eax + 1u;
        goto L_10226085;
    }
    eax = eax + 1u;
    if (rd32(COW_IMG(0x10662db0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662db0u));
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x101b9f20u), ecx, 8, 1u, 0u, COW_IMG(0x1037cc10u), self, 0x100u, COW_IMG(0x102260c0u), self, 1u);
    }
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10226080(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10226080(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
