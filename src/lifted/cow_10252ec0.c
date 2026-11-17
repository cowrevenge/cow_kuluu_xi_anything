/* f_0x10252ec0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10252ec0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg2 < 0)
    {
        eax = arg2;
        goto L_10252f14;
    }
    if ((int32_t)arg2 >= (int32_t)rd32(arg1 + 0x34u))
    {
        eax = arg2;
        goto L_10252f14;
    }
    if ((rd32(arg1) & 4u) == 0u)
    {
        eax = arg2;
        goto L_10252f14;
    }
    edx = rd32(arg1);
    if ((edx & 8u) == 0u)
    {
        eax = arg2;
        goto L_10252f14;
    }
    t1 = rd32(arg1 + 0x3cu);
    wr32(arg1 + 4u, 0u);
    wr32(arg1 + 8u, 0u);
    t2 = arg2 * 0x10u + t1;
    if (rd32(t2 + 0xcu) == 0u)
    {
        eax = t2;
        goto L_10252f14;
    }
    ecx = rd32(t2 + 0xcu);
    esi = t2;
    if ((int32_t)rd32(esi + 4u) <= 0)
    {
        eax = 0u;
        goto L_10252f14;
    }
    edx = rd32(esi + 4u);
    eax = 0u;
    ecx = ecx + 4u;
L_10252f08: ;
    if ((int32_t)rd32(ecx) >= (int32_t)arg3) goto L_10252f1a;
    if ((int32_t)(eax + 1u) < (int32_t)edx)
    {
        eax = eax + 1u;
        ecx = ecx + 0xcu;
        goto L_10252f08;
    }
    eax = eax + 1u;
L_10252f14: ;
    return 0xffffffffu;
L_10252f1a: ;
    wr32(esi, eax);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10252ec0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10252ec0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
