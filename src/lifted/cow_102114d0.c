/* f_0x102114d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102114d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)arg2 <= 0)
    {
        eax = 0u;
    }
    else
    {
        eax = 0u;
        ecx = 0u;
        edx = in_edx;
        ebx = (in_ebx & 0xffffff00u) | 1u;
        esi = 0u;
L_102114e8: ;
        if (rd8(arg1 + esi) != 0u)
        {
            edx = (edx & 0xffffff00u) | rd8(arg1 + esi);
            if (ecx != 0u)
            {
                eax = eax + 1u;
                ecx = 0u;
            }
            eax = eax + 1u;
            ebx = (ebx & 0xffffff00u) | (uint8_t)edx;
        }
        else
        {
            edx = (edx & 0xffffff00u) | rd8(arg1 + esi);
            if ((uint8_t)ebx != 0u)
            {
                eax = eax + 1u;
                ecx = 1u;
                ebx = ebx & 0xffffff00u;
            }
            else
            {
                if (ecx == 0xffu)
                {
                    eax = eax + 2u;
                    ecx = 0u;
                }
                ecx = ecx + 1u;
            }
        }
        if ((int32_t)(esi + 1u) < (int32_t)arg2)
        {
            esi = esi + 1u;
            goto L_102114e8;
        }
        if (ecx != 0u)
        {
            eax = eax + 1u;
        }
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102114d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102114d0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
