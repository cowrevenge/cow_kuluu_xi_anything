/* f_0x101df1a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101df1a0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = rd8(self + 0x5eu);
    if ((int32_t)rd32(self + 0x50u) < 0)
    {
        edi = t1 - rd8(self + 0x5du);
    }
    else
    {
        edx = rd32(self + 0x50u);
        edi = t1 - rd8(self + 0x5du);
        if (rd32(self + 0x38u) == 0u) goto L_101df1de;
        esi = rd32(self + 0x38u);
        if ((int32_t)edx >= (int16_t)rd16(self + 0x20u)) goto L_101df1de;
        if (edx * 0x54u + esi == 0u) goto L_101df1de;
        eax = edx * 0x54u + esi;
        eax = rd32(eax + 0x48u);
L_101df1e0: ;
        if ((int32_t)(eax - 1u) > 0)
        {
            eax = eax - 1u;
            g->eax = eax;
            g->esp = sp0 - 4u;
            t2 = cow_fastcall(g, COW_IMG(0x101c8020u), rd32(COW_IMG(0x106631e8u)), edx, 1, eax);
            if (t2 != 0u)
            {
                eax = t2;
                edi = edi + rd8(eax + 1u);
            }
        }
    }
    return edi;
L_101df1de: ;
    eax = 0u;
    goto L_101df1e0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101df1a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101df1a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
