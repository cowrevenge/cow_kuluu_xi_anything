/* f_0x100e0c70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100e0c70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x104dfd98u));
        goto L_100e0c80;
    }
    return 2u;
L_100e0c80: ;
    if (rd8(ecx + 0x1a698u) == 1u) goto L_100e0c94;
    g->esp = sp0;
    cow_stdcall(g, COW_IMG(0x100e0aa0u), 0);
    return 2u;
L_100e0c94: ;
    if (rd16(ecx + 0x1a6a0u) != 0xffffu)
    {
        eax = (in_eax & 0xffff0000u) | rd16(ecx + 0x1a6a0u);
        goto L_100e0ca7;
    }
    return 1u;
L_100e0ca7: ;
    if (rd16(ecx + (uint32_t)(int16_t)eax * 0x1cu + 0x1a6a8u) != 0xffffu)
    {
        eax = ecx + (uint32_t)(int16_t)eax * 0x1cu + 0x1a6a4u;
        goto L_100e0ccb;
    }
    return 1u;
L_100e0ccb: ;
    wr8(ecx + 0x1a698u, 2u);
    wr32(arg1, eax + 8u);
    wr16(rd32(COW_IMG(0x104dfd98u)) + 0x1a69cu, rd16(eax));
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e0c70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e0c70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
