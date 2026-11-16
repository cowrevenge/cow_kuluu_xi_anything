/* f_0x102d264a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102d264a(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t zf;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x10345d40u) + rd32(self + 4u) * 0x14u + rd32(in_edx + 4u) * 4u) == 0u)
    {
        eax = 0u;
        edx = in_edx;
        goto L_102d26b9;
    }
    eax = 0u;
    ebx = 5u;
    esi = self + 0xcu;
    loc_8 = 0u;
L_102d2672: ;
    if (rd32(esi) == 0u)
    {
        ecx = rd32(esi);
    }
    else
    {
        ecx = rd32(esi);
        loc_8 = loc_8 + 1u;
    }
    if (ecx >= rd32(esi + in_edx - self))
    {
        edx = rd32(esi + in_edx - self);
        cf = ecx < rd32(esi + in_edx - self);
        zf = ecx == rd32(esi + in_edx - self);
        if (!(cf || zf))
        {
            if (edx != 0u)
            {
                eax = eax + ((ecx - edx) << 0x10u);
            }
            else
            {
                eax = eax + 0x1000000u;
            }
        }
    }
    else
    {
        edx = rd32(esi + in_edx - self);
        if (ecx != 0u)
        {
            eax = eax + edx - ecx;
            edx = edx - ecx;
        }
        else
        {
            eax = eax + 0x100u;
        }
    }
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        esi = esi + 4u;
        goto L_102d2672;
    }
    if (loc_8 != eax >> 0x18u) goto L_102d26bc;
L_102d26b9: ;
    eax = 0xffffffffu;
L_102d26bc: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d264a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d264a(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
