/* f_0x10114910 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10114910(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t loc_4;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    esi = 1u;
    edi = rd32(self + 0x284u);
L_10114928: ;
    if (rd32(self + (uint16_t)esi * 0x1cu + 0x284u) < edi) goto L_1011494a;
    if ((uint16_t)(esi + 1u) < 8u)
    {
        esi = esi + 1u;
        goto L_10114928;
    }
    loc_4 = 0u;
L_1011494e: ;
    if ((uint16_t)arg2 != 0u)
    {
        ebx = loc_4 + 7u;
        eax = 0u;
L_10114960: ;
        if ((uint16_t)ebx <= (uint16_t)loc_4) goto L_101149b8;
        if (rd32(self + (ebx & 7u) * 0x1cu + 0x284u) != 0u)
        {
            ecx = ebx & 7u;
            esi = ecx * 0x1cu + self + 0x280u;
            edi = arg1 + (uint16_t)eax * 0x1cu;
            ecx = 7u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            eax = eax + 1u;
        }
        if ((uint16_t)eax < (uint16_t)arg2)
        {
            ebx = ebx + 0xffffu;
            goto L_10114960;
        }
    }
L_101149b8: ;
    return;
L_1011494a: ;
    loc_4 = esi;
    goto L_1011494e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10114910(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10114910(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
