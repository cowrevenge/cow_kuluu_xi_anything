/* f_0x102de9f4 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102de9f4(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_8;
    uint32_t loc_c;
    const uint32_t self = g->ecx;

    eax = rd32(self);
    edx = rd32(rd32(self) + 0x18u);
    ebx = rd32(rd32(self + 4u) + 0x18u);
    esi = rd32(rd32(self) + 0x18u) + rd32(rd32(self) + 0x105cu) * rd32(rd32(self) + 0x1050u);
    edi = rd32(rd32(self) + 0x1050u);
L_102dea81: ;
    if (edx < esi)
    {
        loc_14 = ebx;
        goto L_102dea1b;
    }
    g->edx = edx;
    return 0u;
L_102dea1b: ;
    edi = edi + edx;
    cf = edx < edx + rd32(eax + 0x1058u);
    eax = edx + rd32(eax + 0x1058u);
    loc_c = ebx;
    loc_8 = edx;
L_102dea65: ;
    if (cf)
    {
        loc_10 = edi;
        goto L_102dea2f;
    }
    eax = rd32(self);
    edx = edx + rd32(rd32(self) + 0x1050u) * 2u;
    ebx = loc_14 + rd32(rd32(self + 4u) + 0x1050u);
    edi = rd32(rd32(self) + 0x1050u);
    goto L_102dea81;
L_102dea2f: ;
    wr8(loc_c, (uint8_t)((rd8(loc_10) + rd8(loc_8) + rd8(edi + 1u) + rd8(loc_8 + 1u) + 2u) >> 2u));
    edi = loc_10 + 2u;
    cf = loc_8 + 2u < eax;
    loc_c = loc_c + 1u;
    loc_8 = loc_8 + 2u;
    goto L_102dea65;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102de9f4(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102de9f4(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
