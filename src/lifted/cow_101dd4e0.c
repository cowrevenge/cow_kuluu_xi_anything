/* f_0x101dd4e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101dd4e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = arg1 * 0x29u;
    edx = arg1 * 0x7bu + self + 0x1au;
    esi = 0u;
L_101dd4f4: ;
    if (rd8(edx) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(edx);
        goto L_101dd508;
    }
    eax = (eax & 0xffffff00u) | rd8(edx);
    ecx = edx;
L_101dd4fc: ;
    if ((uint8_t)eax != 0x20u) goto L_101dd517;
    if (rd8(ecx + 1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ecx + 1u);
        ecx = ecx + 1u;
        goto L_101dd4fc;
    }
    eax = (eax & 0xffffff00u) | rd8(ecx + 1u);
L_101dd508: ;
    if ((int32_t)(esi + 1u) < 3)
    {
        edx = edx + 0x29u;
        esi = esi + 1u;
        goto L_101dd4f4;
    }
    return (eax & 0xffffff00u) | 1u;
L_101dd517: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101dd4e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101dd4e0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
