/* f_0x10104170 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10104170(Guest* g)
{
    uint32_t ecx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd16(arg1 + 2u) == 0u)
    {
        ecx = 0u;
        goto L_1010419f;
    }
    ecx = 0u;
    esi = (in_esi & 0xffff0000u) | rd16(arg1 + 2u);
L_10104185: ;
    if (arg2 == rd32(arg1 + (uint16_t)ecx * 8u + 8u)) goto L_101041ce;
    if ((uint16_t)(ecx + 1u) < (uint16_t)esi)
    {
        ecx = ecx + 1u;
        goto L_10104185;
    }
    ecx = ecx + 1u;
    if ((uint16_t)ecx >= 0x14u) goto L_101041ce;
L_1010419f: ;
    t1 = rd32(arg1 + (uint16_t)ecx * 8u + 0xcu);
    wr32(arg1 + (uint16_t)ecx * 8u + 8u, arg2);
    t2 = (arg3 == 0xffffffffu) * 2u;
    wr32(arg1 + (uint16_t)ecx * 8u + 0xcu, t2);
    wr16(arg1 + 2u, (uint16_t)(rd16(arg1 + 2u) + 1u));
L_101041ce: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10104170(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10104170(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
