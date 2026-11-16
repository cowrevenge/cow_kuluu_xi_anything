/* f_0x1025be00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1025be00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(arg1) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1025be32;
    }
    eax = in_eax;
    ecx = self;
    edx = in_edx;
    esi = 0u;
L_1025be12: ;
    if ((int32_t)esi >= (int32_t)arg2) goto L_1025be32;
    if (rd8(arg1 + esi) == 0x15u) goto L_1025be39;
    eax = arg1 + esi;
    ecx = (ecx & 0xffffff00u) | rd8(arg1 + esi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x1011da80u), 1, eax);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd8(arg1 + esi + t1) != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        esi = esi + t1;
        goto L_1025be12;
    }
    eax = t1;
    edx = t3;
L_1025be32: ;
    g->edx = edx;
    return 0xffffffffu;
L_1025be39: ;
    g->edx = edx;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025be00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025be00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
