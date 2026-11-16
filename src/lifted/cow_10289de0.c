/* f_0x10289de0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10289de0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)rd32(arg1 + 4u) < (int32_t)rd32(arg1 + 8u))
    {
        eax = rd32(arg1 + 4u);
        goto L_10289e02;
    }
    eax = rd32(arg1 + 4u);
    ecx = rd32(arg1 + 8u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b96fcu), ecx);
    t2 = g->edx;
    g->edx = t2;
    return 0xffffffffu;
L_10289e02: ;
    t3 = rd32(arg1 + 0xcu);
    wr32(eax * 0xcu + t3, arg2);
    if (arg3 != 0u)
    {
        ecx = eax * 0xcu + t3;
        eax = 0u;
        ecx = ecx + 4u;
L_10289e1f: ;
        t4 = rd32(arg3 + eax * 4u);
        wr32(ecx, t4);
        if ((int32_t)(eax + 1u) < 2)
        {
            eax = eax + 1u;
            ecx = ecx + 4u;
            goto L_10289e1f;
        }
    }
    t5 = rd32(arg1 + 4u) + 1u;
    wr32(arg1 + 4u, t5);
    g->edx = arg3;
    return t5 - 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10289de0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10289de0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
