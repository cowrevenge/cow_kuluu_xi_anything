/* f_0x1009ab60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1009ab60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 28u);

    if (arg1 != 0u) goto L_1009ab81;
    wr32(sp0 - 0x18u, in_edi);
    wr8(self, (uint8_t)arg1);
    edi = self + 2u;
    eax = arg1;
    ecx = 8u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    return eax;
L_1009ab81: ;
    wr32(sp0 - 0x18u, in_ebx);
    if (!(rd8(arg1 + 4u) & 1u))
    {
        t1 = rd32(arg1);
        wr16(sp0 - 0x10u, 7u);
        wr16(sp0 - 0xcu, 0u);
        wr16(sp0 - 0x14u, (uint16_t)((t1 >> 9u & 7u) + 0x20u));
        wr16(sp0 - 0x12u, t1 & 7u);
        wr16(sp0 - 0xeu, t1 >> 6u & 7u);
        eax = t1 >> 3u & 7u;
    }
    else
    {
        wr16(sp0 - 0x14u, 0x20u);
        wr16(sp0 - 0x12u, 3u);
        wr16(sp0 - 0x10u, 3u);
        wr16(sp0 - 0xeu, 3u);
        wr16(sp0 - 0xcu, 1u);
        eax = 3u;
    }
    wr16(sp0 - 0xau, (uint16_t)eax);
    wr32(sp0 - 0x18u, sp0 - 0x14u);
    g->esp = sp0 - 0x14u;
    t2 = cow_call_regs(g, COW_IMG(0x1009ac20u), sp0 - 0x14u, self, g->edx, 0, 1, sp0 - 0x14u);
    return t2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009ab60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1009ab60(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
