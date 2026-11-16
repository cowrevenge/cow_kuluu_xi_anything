/* f_0x100e0cf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100e0cf0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = 2u;
        goto L_100e0d4e;
    }
    ecx = rd32(COW_IMG(0x104dfd98u));
    if (rd8(ecx + 0x1a698u) != 2u)
    {
        eax = 2u;
        goto L_100e0d4e;
    }
    if (rd16(ecx + 0x1a69cu) != 0xffffu)
    {
        eax = rd16(ecx + 0x1a69cu);
        goto L_100e0d20;
    }
    wr8(ecx + 0x1a698u, 1u);
    return 1u;
L_100e0d20: ;
    t1 = ecx + (uint32_t)(int16_t)eax * 0x1cu + 0x1a6acu;
    wr32(arg1, t1);
    wr16(rd32(COW_IMG(0x104dfd98u)) + 0x1a69cu, rd16(ecx + (uint32_t)(int16_t)eax * 0x1cu + 0x1a6a4u));
    eax = 0u;
L_100e0d4e: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e0cf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e0cf0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
