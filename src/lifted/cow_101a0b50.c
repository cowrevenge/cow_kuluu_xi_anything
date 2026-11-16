/* f_0x101a0b50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101a0b50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((arg1 & 2u) == 0u) goto L_101a0b94;
    if ((int32_t)(rd32(self - 4u) - 1u) < 0)
    {
        eax = rd32(self - 4u) - 1u;
        ecx = self + rd32(self - 4u) * 0x124u;
    }
    else
    {
        eax = rd32(self - 4u) - 1u;
        ecx = self + rd32(self - 4u) * 0x124u;
        eax = eax + 1u;
L_101a0b70: ;
        wr32(ecx - 0x124u, COW_IMG(0x10337200u));
        if (eax != 1u)
        {
            eax = eax - 1u;
            ecx = ecx - 0x124u;
            goto L_101a0b70;
        }
        eax = eax - 1u;
        ecx = ecx - 0x124u;
    }
    if (!(arg1 & 1u))
    {
        edx = (in_edx & 0xffffff00u) | (uint8_t)arg1;
    }
    else
    {
        g->edx = (in_edx & 0xffffff00u) | (uint8_t)arg1;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, self - 4u);
        t1 = g->edx;
        edx = t1;
    }
    g->edx = edx;
    return self - 4u;
L_101a0b94: ;
    wr32(self, COW_IMG(0x10337200u));
    if (!(arg1 & 1u))
    {
        edx = (in_edx & 0xffffff00u) | (uint8_t)arg1;
    }
    else
    {
        g->edx = (in_edx & 0xffffff00u) | (uint8_t)arg1;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, self);
        t2 = g->edx;
        edx = t2;
    }
    g->edx = edx;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a0b50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a0b50(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
