/* f_0x101b4710 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101b4710(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    eax = in_eax;
    edx = self + 8u;
    edi = 0x3cu;
L_101b471c: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x101b45e0u), edx, 0);
    t2 = g->edx;
    if (edi != 1u)
    {
        eax = t1;
        edx = t2 + 0x10u;
        edi = edi - 1u;
        goto L_101b471c;
    }
    wr32(self, COW_IMG(0x103379c4u));
    wr32(self + 4u, 0u);
    edi = self + 0x3c8u;
    eax = 0u;
    ecx = 0x780u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    wr32(self + 0x21ccu, 0u);
    wr8(self + 0x21e0u, 0u);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b4710(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b4710(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
