/* f_0x1031ac91 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1031ac91(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((arg1 & 0xff00u) != 0u)
    {
        ecx = self;
        edx = in_edx;
        goto L_1031acd5;
    }
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        eax = rd8((uint8_t)arg1 * 2u + rd32(COW_IMG(0x103d0030u))) & 4u;
        ecx = rd32(COW_IMG(0x103d0030u));
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0;
        t1 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), self, 3, (uint8_t)arg1, 4u, in_esi);
        t2 = g->edx;
        eax = t1;
        ecx = 4u;
        edx = t2;
    }
    if (eax == 0u) goto L_1031acd5;
    return (eax & 0xffff0000u) | (uint16_t)arg1;
L_1031acd5: ;
    g->esp = sp0;
    t3 = cow_call_regs(g, COW_IMG(0x1031a160u), g->eax, ecx, edx, 1, 3, arg1, 2u, in_esi);
    if (t3 != 0u)
    {
        eax = arg1 - 0x27u;
    }
    else
    {
        eax = arg1 - 7u;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031ac91(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031ac91(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
