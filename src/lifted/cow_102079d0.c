/* f_0x102079d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102079d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 8u) == 0u) goto L_10207a2c;
    eax = rd32(self + 8u);
    t1 = (uint32_t)(int16_t)rd16(eax + 0x4cu);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_stdcall(g, COW_IMG(0x10207960u), 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    t5 = (t3 & 0xffffff00u) | rd8(self + 0x1cu);
    g->edi = t2;
    g->ecx = t5;
    t6 = cow_cdecl(g, COW_IMG(0x100fcbc0u), 3, t5, 0x1200u, t2);
    t7 = g->ecx;
    if ((uint8_t)t6 == 0u) goto L_10207a25;
    eax = (uint8_t)t6;
    ecx = t7;
    edi = t2;
    if (edi == 0u) goto L_10207a13;
    if (edi == 1u) goto L_10207a13;
    g->edi = in_edi;
    return eax + 0x2100u;
L_10207a13: ;
    if ((uint8_t)arg1 != 0u) goto L_10207a25;
    g->edi = in_edi;
    return eax + 0x2000u;
L_10207a25: ;
    g->edi = in_edi;
    return 0u;
L_10207a2c: ;
    g->edi = in_edi;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102079d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102079d0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
