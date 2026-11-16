/* f_0x10292150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10292150(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 <= 1u)
    {
        eax = in_eax;
    }
    else
    {
        if (arg2 & 1u)
        {
            g->eax = in_eax;
            g->ecx = self;
            g->edx = in_edx;
            g->esp = sp0 - 0x10u;
            t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103bb100u));
            t2 = g->ecx;
            t3 = g->edx;
            g->esp = sp0 - 0x14u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb0ccu), COW_IMG(0x103b27fcu));
        }
        if (rd32(sp0 + 0xcu) == 0u)
        {
            eax = arg2 >> 1u;
        }
        else
        {
            edx = rd32(sp0 + 0xcu);
            t4 = rd32(sp0 + 4u);
            wr32(sp0 + 0xcu, t4);
            wr32(sp0 + 4u, edx);
            ecx = t4;
            ebp = arg2 - t4;
            edi = t4;
            loc_4 = arg2 - t4;
L_102921ad: ;
            if (arg2 >> 1u != 0u)
            {
                ebx = arg2;
                ebp = ebp + ecx;
                esi = 0u;
L_102921b5: ;
                t5 = rd8(ecx);
                t6 = rd8(ebp + edi - esi - 1u);
                wr8(ecx, (uint8_t)t6);
                wr8(ebp + edi - esi - 1u, (uint8_t)t5);
                if (esi + 1u < arg2 >> 1u)
                {
                    ecx = ecx + 1u;
                    edx = (edx & 0xffffff00u) | t5;
                    ebx = (ebx & 0xffffff00u) | t6;
                    esi = esi + 1u;
                    goto L_102921b5;
                }
                ecx = rd32(sp0 + 0xcu);
                ebp = loc_4;
            }
            t7 = rd32(sp0 + 4u);
            wr32(sp0 + 0xcu, arg2 + ecx);
            wr32(sp0 + 4u, t7 - 1u);
            if (t7 != 1u)
            {
                ecx = arg2 + ecx;
                edx = t7 - 1u;
                goto L_102921ad;
            }
            eax = arg2 >> 1u;
        }
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10292150(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10292150(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
