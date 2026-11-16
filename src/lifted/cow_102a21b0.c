/* f_0x102a21b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102a21b0(Guest* g)
{
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)rd32(arg1 + 4u) <= 0) goto L_102a21e1;
    ebx = rd32(arg1 + 4u);
    ecx = self;
    edx = in_edx;
    esi = 0u;
    edi = rd32(arg1 + 0x28u);
L_102a21c8: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x102a2180u), 2, edi, arg2);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u) goto L_102a21e8;
    ecx = t2;
    edx = t3;
    if ((int32_t)(esi + 1u) < (int32_t)ebx)
    {
        esi = esi + 1u;
        edi = edi + 0x90u;
        goto L_102a21c8;
    }
L_102a21e1: ;
    return 0u;
L_102a21e8: ;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a21b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a21b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
