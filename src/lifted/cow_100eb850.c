/* f_0x100eb850 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100eb850(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_100eb864;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    loc_4 = self;
L_100eb85d: ;
    return eax & 0xffffff00u;
L_100eb864: ;
    if ((uint8_t)arg2 <= 1u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
        loc_4 = (self & 0xffffff00u) | 1u;
        goto L_100eb8ba;
    }
    esi = eax + 0x9894u;
    ecx = self;
    edx = in_edx;
    ebx = in_ebx & 0xffffff00u;
    loc_4 = (self & 0xffffff00u) | 1u;
L_100eb87d: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)ebx >= (uint8_t)t1)
    {
        eax = t1;
        goto L_100eb85d;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    if (rd16(esi) == 0u) goto L_100eb898;
    ebx = (ebx & 0xffffff00u) | (uint8_t)((uint8_t)ebx + 1u);
    esi = esi + 0x2cu;
    goto L_100eb87d;
L_100eb898: ;
    if (arg1 != 0u)
    {
        wr8(arg1 + (uint8_t)loc_4, (uint8_t)ebx);
        eax = (uint8_t)loc_4;
    }
    if ((uint8_t)((uint8_t)loc_4 + 1u) < (uint8_t)arg2)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)arg2;
        loc_4 = (loc_4 & 0xffffff00u) | (uint8_t)((uint8_t)loc_4 + 1u);
        goto L_100eb87d;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)loc_4 + 1u);
    loc_4 = (loc_4 & 0xffffff00u) | (uint8_t)((uint8_t)loc_4 + 1u);
L_100eb8ba: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100eb850(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100eb850(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
