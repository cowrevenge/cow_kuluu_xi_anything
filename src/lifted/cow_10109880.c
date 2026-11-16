/* f_0x10109880 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10109880(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    if (rd32(self + 4u) == 0u)
    {
        eax = rd32(self + 4u);
        esi = 0u;
    }
    else
    {
        eax = rd32(self + 4u);
        esi = rd32(eax + 4u);
    }
    if (rd8(esi) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi);
        edx = in_edx;
        goto L_101098f2;
    }
    eax = (eax & 0xffffff00u) | rd8(esi);
    t1 = rd8(rd32(sp0 + 4u));
    t2 = rd32(sp0 + 4u);
    wr8(sp0 + 4u, (uint8_t)t1);
    edx = in_edx;
    ebx = (in_ebx & 0xffffff00u) | t1;
    ebp = t2;
    edi = 0u;
L_101098a5: ;
    if ((uint8_t)eax != (uint8_t)ebx) goto L_101098dc;
    if ((uint8_t)ebx == 0u)
    {
        edx = ebp;
        goto L_101098dc;
    }
    ecx = esi;
    edx = ebp;
L_101098b1: ;
    if (rd8(edx) == 0u)
    {
        ebx = (ebx & 0xffffff00u) | rd8(edx);
        goto L_101098ce;
    }
    ebx = (ebx & 0xffffff00u) | rd8(edx);
    if (rd8(ecx) != (uint8_t)ebx) goto L_101098ce;
    if (rd8(ecx + 1u) != 0u)
    {
        edx = edx + 1u;
        ebx = (ebx & 0xffffff00u) | rd8(ecx + 1u);
        ecx = ecx + 1u;
        goto L_101098b1;
    }
    edx = edx + 1u;
L_101098c4: ;
    g->edx = edx;
    return (eax & 0xffff0000u) | (uint16_t)edi;
L_101098ce: ;
    if (rd8(ecx) == 0u) goto L_101098c4;
    if (rd8(edx) == 0u) goto L_101098c4;
    ebx = (ebx & 0xffffff00u) | rd8(sp0 + 4u);
L_101098dc: ;
    if ((int8_t)eax < 0)
    {
        if (rd8(esi + 1u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(esi + 1u);
            esi = esi + 1u;
            edi = edi + 1u;
        }
    }
    if (rd8(esi + 1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        esi = esi + 1u;
        edi = edi + 1u;
        goto L_101098a5;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + 1u);
L_101098f2: ;
    g->edx = edx;
    return (eax & 0xffff0000u) | (uint16_t)(eax | 0xffffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10109880(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10109880(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
