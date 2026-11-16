/* f_0x100f32b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100f32b0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(self + 8u, 0u);
    wr16(self + 0x105au, 0u);
    wr32(self + 0x105cu, arg1);
    if (arg1 == 0u) goto L_100f32fa;
    if (rd32(arg1) == 0u) goto L_100f32fa;
    eax = rd32(arg1);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall_cdecl(g, eax, self, 2, self, 0u);
    t2 = g->edx;
    if (t1 != 0x17u)
    {
        eax = t1;
        edx = t2;
        goto L_100f32ee;
    }
    edx = t2;
    wr16(self + 0x105au, (uint16_t)(rd16(self + 0x105au) + 1u));
    g->edx = edx;
    return 0u;
L_100f32ee: ;
    if (eax != 0x16u) goto L_100f32ff;
    g->edx = edx;
    return 0u;
L_100f32fa: ;
    eax = 0x10u;
    edx = in_edx;
L_100f32ff: ;
    wr16(self + 0x1058u, 0u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f32b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f32b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
