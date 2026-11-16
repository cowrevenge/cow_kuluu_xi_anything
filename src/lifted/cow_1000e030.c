/* f_0x1000e030 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1000e030(Guest* g)
{
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    ecx = self;
    edx = in_edx;
    ebx = rd32(COW_IMG(0x10329174u));
    esi = 0u;
L_1000e03f: ;
    t1 = rd32(COW_IMG(0x10329b08u) + esi * 8u);
    g->eax = t1;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, ebx, ecx, 2, arg1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0u) goto L_1000e05a;
    ecx = t3;
    edx = t4;
    if (esi + 1u < 0xeu)
    {
        esi = esi + 1u;
        goto L_1000e03f;
    }
    return 0u;
L_1000e05a: ;
    return rd32(COW_IMG(0x10329b0cu) + esi * 8u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000e030(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1000e030(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
