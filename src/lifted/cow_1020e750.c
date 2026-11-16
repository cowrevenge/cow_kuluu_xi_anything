/* f_0x1020e750 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1020e750(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x1020a3e0u), 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        edi = 0u;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        if (rd16(eax) == 0u)
        {
            edi = 0u;
        }
        else
        {
            esi = eax;
            edi = 0u;
L_1020e76c: ;
            t4 = (ecx & 0xffff0000u) | rd16(eax);
            g->ecx = t4;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t5 = cow_cdecl(g, COW_IMG(0x101070f0u), 1, t4);
            t6 = g->ecx;
            t7 = g->edx;
            if ((t5 & 2u) == 0u)
            {
                ecx = t6;
                edx = t7;
            }
            else
            {
                ecx = t6;
                edx = t7;
                edi = edi + 1u;
            }
            if (rd16(esi + 2u) != 0u)
            {
                eax = esi + 2u;
                esi = esi + 2u;
                goto L_1020e76c;
            }
        }
    }
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020e750(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020e750(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
