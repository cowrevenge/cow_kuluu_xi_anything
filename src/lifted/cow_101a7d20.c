/* f_0x101a7d20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101a7d20(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    eax = in_eax;
    ecx = self;
    edx = in_edx;
    ebx = in_ebx & 0xffffff00u;
    loc_4 = self & 0xffffff00u;
L_101a7d2d: ;
    if ((uint8_t)ebx == 3u) goto L_101a7d49;
    g->eax = (uint8_t)loc_4;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x101a7770u), 2, (uint8_t)loc_4, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0xffu)
    {
        eax = t1;
        goto L_101a7d5a;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
L_101a7d49: ;
    if ((uint8_t)((uint8_t)ebx + 1u) < 0x12u)
    {
        loc_4 = (loc_4 & 0xffffff00u) | (uint8_t)((uint8_t)ebx + 1u);
        ebx = (ebx & 0xffffff00u) | (uint8_t)((uint8_t)ebx + 1u);
        goto L_101a7d2d;
    }
    loc_4 = (loc_4 & 0xffffff00u) | (uint8_t)((uint8_t)ebx + 1u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_101a7d5a: ;
    wr8(arg2, (uint8_t)ebx);
    wr8(arg3, (uint8_t)eax);
    g->edx = arg3;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a7d20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a7d20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
