/* f_0x1027c6e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1027c6e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)rd32(arg1 + 0x28u) <= 0)
    {
        esi = 0u;
    }
    else
    {
        eax = rd32(arg1 + 0x28u);
        ecx = arg1;
        edx = rd32(arg1 + 0x20u);
        esi = 0u;
        edi = eax;
L_1027c6f4: ;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t1 = cow_cdecl(g, COW_IMG(0x1027c6c0u), 1, edx);
        t2 = g->ecx;
        t3 = g->edx;
        if ((int32_t)t1 <= (int32_t)esi)
        {
            ecx = t2;
            edx = t3;
        }
        else
        {
            eax = t1;
            ecx = t2;
            edx = t3;
            esi = eax;
        }
        if (edi != 1u)
        {
            edx = edx + 0xf8u;
            edi = edi - 1u;
            goto L_1027c6f4;
        }
    }
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027c6e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1027c6e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
