/* f_0x1023bfc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1023bfc0(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1) == 0u)
    {
        edx = in_edx;
        edi = 0u;
    }
    else
    {
        eax = arg1;
        ecx = self;
        edx = in_edx;
        esi = arg1;
        edi = 0u;
L_1023bfcf: ;
        g->eax = rd32(eax);
        g->edx = edx;
        t1 = rd32(eax);
        g->esp = sp0 - 8u;
        t2 = cow_cdecl(g, COW_IMG(0x1011d010u), 1, t1);
        t3 = g->edx;
        if ((int32_t)t2 <= (int32_t)edi)
        {
            edx = t3;
        }
        else
        {
            eax = t2;
            edx = t3;
            edi = eax;
        }
        if (rd32(esi + 4u) != 0u)
        {
            eax = esi + 4u;
            ecx = rd32(esi + 4u);
            esi = esi + 4u;
            goto L_1023bfcf;
        }
    }
    g->edx = edx;
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023bfc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1023bfc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
