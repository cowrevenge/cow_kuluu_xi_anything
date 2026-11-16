/* f_0x101bb070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101bb070(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)rd32(self + 0x228u) <= 0)
    {
        eax = 0u;
        edx = rd32(self + 0x228u);
        loc_4 = self;
    }
    else
    {
        edx = rd32(self + 0x228u);
        eax = 0u;
        esi = self + 0x240u;
L_101bb08c: ;
        if ((uint8_t)(arg1 >> 0x10u) == (uint8_t)(rd32(esi) >> 0x10u))
        {
            loc_4 = rd32(esi);
            goto L_101bb0a5;
        }
        loc_4 = rd32(esi);
        if ((int32_t)(eax + 1u) < (int32_t)edx)
        {
            eax = eax + 1u;
            esi = esi + 0x1f0u;
            goto L_101bb08c;
        }
        eax = eax + 1u;
    }
L_101bb0a5: ;
    if ((int32_t)eax >= (int32_t)edx)
    {
        if ((int32_t)eax < (int32_t)rd32(self + 0x224u))
        {
            esi = rd32(self + 0x224u);
            ecx = (eax * 0x1f0u & 0xffffff00u) | (uint8_t)arg1;
            edx = eax * 0x1f0u + self + 0x240u;
L_101bb0c8: ;
            if ((uint8_t)ecx == rd8(edx)) goto L_101bb0d7;
            if ((int32_t)(eax + 1u) < (int32_t)esi)
            {
                eax = eax + 1u;
                edx = edx + 0x1f0u;
                goto L_101bb0c8;
            }
            eax = eax + 1u;
            edx = edx + 0x1f0u;
        }
    }
L_101bb0d7: ;
    if ((int32_t)eax >= (int32_t)rd32(self + 0x224u)) goto L_101bb0f7;
    g->edx = eax * 0x1f0u;
    return eax * 0x1f0u + self + 0x22cu;
L_101bb0f7: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101bb070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101bb070(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
