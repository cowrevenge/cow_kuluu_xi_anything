/* f_0x10266130 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10266130(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    edx = in_edx;
    ebx = arg1;
    esi = in_esi;
    edi = arg2;
L_1026613b: ;
    t1 = (edx & 0xffff0000u) | rd16(ebx);
    t2 = (esi & 0xffff0000u) | rd16(edi);
    if ((uint16_t)t1 < 0x41u)
    {
        eax = t1;
        ecx = t2;
        edx = t1;
        esi = t2;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t1;
        esi = t2;
        if ((uint16_t)eax <= 0x5au)
        {
            eax = eax + 0x20u;
        }
    }
    if ((uint16_t)ecx >= 0x41u)
    {
        if ((uint16_t)ecx <= 0x5au)
        {
            ecx = ecx + 0x20u;
        }
    }
    if ((uint16_t)eax != (uint16_t)ecx) goto L_10266180;
    if ((uint16_t)edx == 0u) goto L_10266178;
    ebx = ebx + 2u;
    if ((uint16_t)esi != 0u)
    {
        edi = edi + 2u;
        goto L_1026613b;
    }
L_10266178: ;
    g->edx = edx;
    return 0u;
L_10266180: ;
    g->edx = edx;
    return (uint16_t)eax - (uint16_t)ecx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10266130(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10266130(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
