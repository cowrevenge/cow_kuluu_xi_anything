/* f_0x10176dd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10176dd0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x10621a08u)) == 0u)
    {
        loc_4 = self;
    }
    else
    {
        ebp = rd32(COW_IMG(0x10621a08u));
L_10176de3: ;
        if ((int32_t)rd32(ebp + 0x10u) <= 0)
        {
            loc_4 = 0u;
        }
        else
        {
            eax = rd32(ebp + 0xcu);
            ecx = rd32(ebp + 0x10u);
            esi = eax + 0xf0u;
            loc_4 = 0u;
L_10176dfb: ;
            if (rd8(esi - 0xb0u) == 0x5fu)
            {
                if (arg1 == 0u)
                {
                    edi = 0u;
                }
                else
                {
                    t1 = rd8(esi) == 0u;
                    edi = t1;
                }
                if ((int32_t)rd32(esi - 0x1cu) > 0)
                {
                    eax = rd32(esi - 0x18u);
                    edx = 0u;
                    edi = edi << 0xdu;
L_10176e28: ;
                    t2 = ((rd32(eax) ^ edi) & 0x2000u) ^ rd32(eax);
                    wr32(eax, t2);
                    if ((int32_t)(edx + 1u) < (int32_t)rd32(esi - 0x1cu))
                    {
                        eax = eax + 0x1f0u;
                        edx = edx + 1u;
                        goto L_10176e28;
                    }
                }
            }
            if ((int32_t)(loc_4 + 1u) < (int32_t)rd32(ebp + 0x10u))
            {
                ecx = rd32(ebp + 0x10u);
                esi = esi + 0xf4u;
                loc_4 = loc_4 + 1u;
                goto L_10176dfb;
            }
            loc_4 = loc_4 + 1u;
        }
        if (rd32(ebp) != 0u)
        {
            ebp = rd32(ebp);
            goto L_10176de3;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10176dd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10176dd0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
