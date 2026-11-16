/* f_0x1015b1f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1015b1f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)arg2 < (int8_t)rd8(arg1 + self + 4u)) goto L_1015b20a;
    return 0u;
L_1015b20a: ;
    if ((int32_t)arg2 <= 0)
    {
        edx = 0u;
    }
    else
    {
        eax = arg1 * 0x50u + self + 0x10u;
        edx = 0u;
        ebx = rd32(arg1 * 4u + self + 8u);
        edi = arg2;
L_1015b21f: ;
        if (rd8(ebx + edx + rd32(eax)) != 0xau)
        {
            edx = edx + rd32(eax);
        }
        else
        {
            edx = edx + rd32(eax);
            edx = edx + 1u;
        }
        if (edi != 1u)
        {
            eax = eax + 4u;
            edi = edi - 1u;
            goto L_1015b21f;
        }
    }
    return edx + rd32(arg1 * 4u + self + 8u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015b1f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015b1f0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
