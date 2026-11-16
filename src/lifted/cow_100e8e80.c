/* f_0x100e8e80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100e8e80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    ecx = rd32(COW_IMG(0x104dfd98u)) + 0x57ecu;
    esi = 0u;
L_100e8e93: ;
    if (rd32(ecx) == 0u)
    {
        edx = rd32(ecx);
        goto L_100e8ea0;
    }
    eax = ecx - 0x14u;
    edx = rd32(ecx);
    if (arg1 == edx) goto L_100e8eab;
L_100e8ea0: ;
    if ((int32_t)(esi + 1u) < 20)
    {
        ecx = ecx + 0x70u;
        esi = esi + 1u;
        goto L_100e8e93;
    }
    eax = 0u;
L_100e8eab: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e8e80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e8e80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
