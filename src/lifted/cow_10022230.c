/* f_0x10022230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10022230(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->esp = sp0 - 8u;
    t1 = cow_fastcall(g, COW_IMG(0x100220e0u), self, in_edx, 0);
    t2 = g->edx;
    wr8(self + 0x10u, (uint8_t)(t1 | 0xffu));
    wr8(self + 0x11u, (uint8_t)(t1 | 0xffu));
    wr8(self + 0x12u, (uint8_t)(t1 | 0xffu));
    wr8(self + 0x13u, (uint8_t)(t1 | 0xffu));
    eax = self + 0x1cu;
    edx = (t2 & 0xffffff00u) | 0xffu;
L_10022253: ;
    wr8(eax - 8u, (uint8_t)edx);
    wr8(eax, (uint8_t)edx);
    if ((int32_t)(eax - self - 0x1bu) < 8)
    {
        eax = eax + 1u;
        goto L_10022253;
    }
    wr8(self + 0x24u, (uint8_t)edx);
    wr8(self + 0x25u, (uint8_t)edx);
    g->edx = edx;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10022230(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10022230(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
