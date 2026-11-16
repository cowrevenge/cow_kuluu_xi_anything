/* f_0x1025bba0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1025bba0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(arg3 + 4u) == 0u) goto L_1025bbf2;
    eax = arg3;
    ecx = arg3 + 4u;
    edx = 0u;
    esi = arg3 + 4u;
L_1025bbbe: ;
    if ((int32_t)rd32(eax) > (int32_t)arg2) goto L_1025bbd5;
    ecx = rd32(ecx);
    edi = rd32(eax);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1, ecx, edi, in_edi, in_esi);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        goto L_1025bbeb;
    }
L_1025bbd5: ;
    if (rd32(esi + 8u) != 0u)
    {
        eax = esi + 4u;
        ecx = esi + 8u;
        edx = rd32(esi + 8u);
        esi = esi + 8u;
        goto L_1025bbbe;
    }
    edx = rd32(esi + 8u);
    g->edx = edx;
    return 0u;
L_1025bbeb: ;
    g->edx = edx;
    return edi;
L_1025bbf2: ;
    g->edx = 0u;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025bba0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025bba0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
