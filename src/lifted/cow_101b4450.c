/* f_0x101b4450 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101b4450(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;

    if (rd32(sp0 + 8u) == 0u)
    {
        ecx = rd32(sp0 + 8u);
    }
    else
    {
        ecx = rd32(sp0 + 8u);
        wr8(ecx, 0u);
    }
    t1 = rd32(sp0 + 4u);
    wr8(sp0 + 8u, 0u);
    if (t1 != 0x8f81u)
    {
        ebx = t1;
        goto L_101b4471;
    }
    return in_eax & 0xffffff00u;
L_101b4471: ;
    if ((uint8_t)ebx != 0x85u) goto L_101b449b;
    if ((int32_t)(uint32_t)((int32_t)ebx >> 8u) >= 127)
    {
        eax = (uint32_t)((int32_t)ebx >> 8u);
        eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax + 0x41u);
    }
    else
    {
        eax = (uint32_t)((int32_t)ebx >> 8u);
        if ((uint8_t)((uint8_t)eax + 0x40u) != 0xc0u)
        {
            eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax + 0x40u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax + 0x40u);
            eax = (eax & 0xffffff00u) | 0xbfu;
        }
    }
    if (ecx == 0u) goto L_101b4515;
    wr8(ecx, 1u);
    return eax;
L_101b449b: ;
    ecx = 0u;
    edx = COW_IMG(0x1037c4a0u);
L_101b44a2: ;
    wr32(sp0 + 4u, ecx);
    if (rd8(edx) + rd8(edx + 1u) * 0x100u == ebx)
    {
        eax = rd8(edx) + rd8(edx + 1u) * 0x100u;
        ecx = rd32(sp0 + 4u);
        goto L_101b44cc;
    }
    ecx = rd32(sp0 + 4u);
    if ((int32_t)(ecx + 1u) < 224)
    {
        ecx = ecx + 1u;
        edx = edx + 2u;
        goto L_101b44a2;
    }
L_101b44d7: ;
    ecx = 0x80u;
    edx = COW_IMG(0x1037c668u);
L_101b44e1: ;
    wr32(sp0 + 4u, ecx);
    if (rd8(edx) + rd8(edx + 1u) * 0x100u == ebx)
    {
        eax = rd8(edx) + rd8(edx + 1u) * 0x100u;
        ecx = rd32(sp0 + 4u);
        goto L_101b4510;
    }
    eax = rd8(edx) + rd8(edx + 1u) * 0x100u;
    ecx = rd32(sp0 + 4u);
    if ((int32_t)(ecx + 1u) < 224)
    {
        ecx = ecx + 1u;
        edx = edx + 2u;
        goto L_101b44e1;
    }
    return (eax & 0xffffff00u) | rd8(sp0 + 8u);
L_101b44cc: ;
    wr8(sp0 + 8u, (uint8_t)((uint8_t)ecx + 0x20u));
    if ((uint8_t)((uint8_t)ecx + 0x20u) != 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)ecx + 0x20u);
        goto L_101b4515;
    }
    goto L_101b44d7;
L_101b4510: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)ecx + 0x20u);
L_101b4515: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b4450(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b4450(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
