/* f_0x1011de80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1011de80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg2 > 0) goto L_1011de8e;
    return 0xffffffffu;
L_1011de8e: ;
    if (rd8(arg3) == 0u)
    {
        eax = in_eax;
        ecx = self;
        edx = 0u;
        esi = 0u;
    }
    else
    {
        eax = arg3;
        ecx = self;
        edx = 0u;
        esi = 0u;
L_1011de9f: ;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t1 = cow_cdecl(g, COW_IMG(0x1011da80u), 1, eax);
        t2 = g->edx;
        if ((int32_t)(esi + t1) >= (int32_t)arg2)
        {
            eax = t1;
            ecx = esi + t1;
            edx = t2;
            goto L_1011debd;
        }
        eax = t1;
        ecx = esi + t1;
        edx = t2;
        if (rd8(arg3 + eax + edx) != 0u)
        {
            esi = ecx;
            ecx = (ecx & 0xffffff00u) | rd8(arg3 + eax + edx);
            t3 = eax;
            eax = arg3 + edx + t3;
            edx = edx + t3;
            goto L_1011de9f;
        }
        esi = ecx;
        ecx = (ecx & 0xffffff00u) | rd8(arg3 + eax + edx);
        t4 = eax;
        eax = arg3 + edx + t4;
        edx = edx + t4;
    }
L_1011debd: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, arg1, arg3, esi);
    t5 = g->edx;
    wr8(arg1 + esi, 0u);
    g->edx = t5;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011de80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011de80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
