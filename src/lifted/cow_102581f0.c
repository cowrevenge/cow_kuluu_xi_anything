/* f_0x102581f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102581f0(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(arg1) == 0u)
    {
        edx = in_edx;
        goto L_10258221;
    }
    ecx = arg1;
    edx = in_edx;
    esi = 0u;
L_102581ff: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x10258010u), 1, ecx);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        edx = t3;
        goto L_10258226;
    }
    ecx = t2;
    edx = t3;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x1011da80u), 1, ecx);
    t5 = g->edx;
    if (rd8(arg1 + esi + t4) != 0u)
    {
        ecx = arg1 + esi + t4;
        edx = t5;
        esi = esi + t4;
        goto L_102581ff;
    }
    edx = t5;
L_10258221: ;
    g->edx = edx;
    return 0u;
L_10258226: ;
    g->edx = edx;
    return (uint32_t)(int8_t)rd8(arg1 + esi);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102581f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102581f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
