/* f_0x1019cdc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1019cdc0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd16(COW_IMG(0x1037a290u)) == 0u)
    {
        eax = in_eax;
        goto L_1019cdf2;
    }
    eax = COW_IMG(0x1037a290u);
    ecx = self;
    edx = in_edx;
    esi = COW_IMG(0x1037a290u);
L_1019cdd7: ;
    t1 = (eax & 0xffff0000u) | rd16(eax);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t2 = cow_cdecl(g, COW_IMG(0x10123670u), 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == (uint8_t)arg1)
    {
        eax = t2;
        goto L_1019cdf7;
    }
    ecx = t3;
    edx = t4;
    if (rd16(esi + 0xau) != 0u)
    {
        eax = esi + 0xau;
        esi = esi + 0xau;
        goto L_1019cdd7;
    }
    eax = esi + 0xau;
L_1019cdf2: ;
    return eax & 0xffffff00u;
L_1019cdf7: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019cdc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019cdc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
