/* f_0x100e3130 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u16 stack_args=2 */
uint32_t cow_fn_100e3130(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_stdcall(g, COW_IMG(0x100da5b0u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((int32_t)t1 <= 0)
    {
        eax = t1;
        esi = 0u;
    }
    else
    {
        ecx = t2;
        edx = t3;
        ebp = t1;
        esi = 0u;
        edi = 0u;
L_100e3147: ;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t4 = cow_cdecl(g, COW_IMG(0x100da5c0u), 1, edi);
        t5 = g->ecx;
        t6 = g->edx;
        if (t4 == 0u)
        {
            eax = t4;
            ecx = t5;
            edx = t6;
        }
        else
        {
            eax = t4;
            ecx = t5;
            edx = eax;
            eax = arg2 + (uint16_t)esi * 0x10u;
            esi = esi + 1u;
L_100e3163: ;
            t7 = rd8(edx);
            wr8(eax, (uint8_t)t7);
            if ((uint8_t)t7 != 0u)
            {
                eax = eax + 1u;
                ecx = (ecx & 0xffffff00u) | t7;
                edx = edx + 1u;
                goto L_100e3163;
            }
            eax = eax + 1u;
            ecx = (ecx & 0xffffff00u) | t7;
            edx = edx + 1u;
        }
        if ((int32_t)(edi + 1u) < (int32_t)ebp)
        {
            edi = edi + 1u;
            goto L_100e3147;
        }
    }
    return (eax & 0xffff0000u) | (uint16_t)esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e3130(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e3130(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
