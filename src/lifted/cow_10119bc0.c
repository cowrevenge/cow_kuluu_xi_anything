/* f_0x10119bc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10119bc0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int16_t)rd16(self + 0x2au) > (int32_t)rd32(arg1))
    {
        eax = in_eax;
        goto L_10119bf8;
    }
    esi = (uint32_t)(int16_t)rd16(self + 0x2au);
    edi = rd32(arg1);
    if ((int16_t)rd16(self + 0x2cu) > (int32_t)rd32(arg1 + 4u))
    {
        eax = (uint32_t)(int16_t)rd16(self + 0x2cu);
        goto L_10119bf8;
    }
    eax = (uint32_t)(int16_t)rd16(self + 0x2cu);
    edx = rd32(arg1 + 4u);
    if ((int32_t)(esi + (uint32_t)(int16_t)rd16(self + 0x2eu)) < (int32_t)edi) goto L_10119bf8;
    if ((int32_t)(eax + (uint32_t)(int16_t)rd16(self + 0x30u)) < (int32_t)edx) goto L_10119bf8;
    return (eax & 0xffffff00u) | 1u;
L_10119bf8: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10119bc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10119bc0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
