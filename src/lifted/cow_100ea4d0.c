/* f_0x100ea4d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100ea4d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c390u) != arg2)
    {
        esi = rd32(COW_IMG(0x104dfd98u));
        goto L_100ea518;
    }
    esi = rd32(COW_IMG(0x104dfd98u));
    if ((uint8_t)arg1 != 5u)
    {
        ecx = (uint8_t)arg1;
    }
    else
    {
        ecx = 0u;
    }
    return esi + (uint8_t)ecx * 0x8c4u + 0x57d8u;
L_100ea518: ;
    if ((uint8_t)arg1 != 5u)
    {
        ecx = (uint8_t)arg1;
    }
    else
    {
        ecx = 0u;
    }
    eax = esi + (uint8_t)ecx * 0x8c4u + 0x57d8u;
    edx = 0u;
L_100ea547: ;
    if (rd32(eax + 0x14u) == arg2) goto L_100ea557;
    if (edx + 1u < 0x14u)
    {
        eax = eax + 0x70u;
        edx = edx + 1u;
        goto L_100ea547;
    }
    eax = 0u;
L_100ea557: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ea4d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ea4d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
