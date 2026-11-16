/* f_0x1012a260 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1012a260(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ecx = self;
    t1 = cow_cdecl(g, COW_IMG(0x10129f80u), 1, arg1);
    t2 = g->ecx;
    if (rd8(COW_IMG(0x1036e6e8u)) == 0u)
    {
        eax = t1;
        ecx = (t2 & 0xffffff00u) | rd8(COW_IMG(0x1036e6e8u));
        edx = 0u;
        goto L_1012a289;
    }
    eax = t1;
    ecx = (t2 & 0xffffff00u) | rd8(COW_IMG(0x1036e6e8u));
    edx = 0u;
L_1012a279: ;
    if ((uint8_t)ecx == (uint8_t)eax) goto L_1012a289;
    if (rd8(COW_IMG(0x1036e6f0u) + edx * 8u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x1036e6f0u) + edx * 8u);
        edx = edx + 1u;
        goto L_1012a279;
    }
    ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x1036e6f0u) + edx * 8u);
    edx = edx + 1u;
L_1012a289: ;
    if (rd8(COW_IMG(0x1036e6e8u) + edx * 8u) == (uint8_t)eax)
    {
        wr32(COW_IMG(0x1036e6ecu) + edx * 8u, arg2);
    }
    g->edx = edx;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012a260(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012a260(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
