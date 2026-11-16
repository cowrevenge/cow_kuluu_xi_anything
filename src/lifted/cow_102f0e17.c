/* f_0x102f0e17 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102f0e17(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        if (arg1 == 1u)
        {
            eax = arg1 - 1u;
            edx = 2u;
            esi = 0xffu;
        }
        else
        {
            if (arg1 == 2u) goto L_102f0e4c;
            if (arg1 == 4u) goto L_102f0e44;
            if (arg1 - 4u == 4u)
            {
                eax = arg1 - 8u;
                edx = 0x100u;
                esi = 1u;
            }
            else
            {
                eax = arg1 - 8u;
                edx = 0u;
                esi = 0u;
            }
        }
L_102f0e5b: ;
        if ((int32_t)edx > 0)
        {
            eax = arg2 + 2u;
            ecx = 0u;
L_102f0e64: ;
            wr8(eax - 2u, (uint8_t)ecx);
            wr8(eax - 1u, (uint8_t)ecx);
            wr8(eax, (uint8_t)ecx);
            if (edx != 1u)
            {
                eax = eax + 3u;
                ecx = ecx + esi;
                edx = edx - 1u;
                goto L_102f0e64;
            }
            eax = eax + 3u;
            edx = edx - 1u;
        }
    }
    g->edx = edx;
    return eax;
L_102f0e44: ;
    eax = arg1 - 4u;
    edx = 0x10u;
    loc_c = 0x11u;
L_102f0e49: ;
    esi = loc_c;
    goto L_102f0e5b;
L_102f0e4c: ;
    eax = arg1 - 2u;
    edx = 4u;
    loc_c = 0x55u;
    goto L_102f0e49;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f0e17(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f0e17(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
