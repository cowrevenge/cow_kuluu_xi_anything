/* f_0x1006b590 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1006b590(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u)
    {
        eax = arg1;
    }
    else
    {
        eax = COW_IMG(0x1047c010u);
    }
    edx = in_edx;
    esi = 0u;
    edi = 0xffffffffu;
L_1006b5a4: ;
    if (rd8(esi + self) != 0x5cu)
    {
        edx = (edx & 0xffffff00u) | rd8(esi + self);
    }
    else
    {
        edx = (edx & 0xffffff00u) | rd8(esi + self);
        edi = esi;
    }
    if ((uint8_t)edx == 0u) goto L_1006b5ba;
    if ((uint8_t)edx == 0x2eu) goto L_1006b5ba;
    esi = esi + 1u;
    goto L_1006b5a4;
L_1006b5ba: ;
    if (rd8(edi + self + 1u) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(edi + self + 1u);
        esi = 0u;
    }
    else
    {
        edx = (edx & 0xffffff00u) | rd8(edi + self + 1u);
        ecx = edi + self + 1u;
        esi = 0u;
L_1006b5c8: ;
        if ((uint8_t)edx == 0x2eu) goto L_1006b5e6;
        if ((int8_t)edx >= 97)
        {
            if ((int8_t)edx <= 122)
            {
                edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx + 0xe0u);
            }
        }
        wr8(eax + esi, (uint8_t)edx);
        if (rd8(ecx + 1u) != 0u)
        {
            edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
            ecx = ecx + 1u;
            esi = esi + 1u;
            goto L_1006b5c8;
        }
        edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
        esi = esi + 1u;
    }
L_1006b5e6: ;
    wr8(eax + esi, 0u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006b590(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006b590(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
