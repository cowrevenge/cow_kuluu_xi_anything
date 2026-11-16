/* f_0x101cba80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101cba80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = in_eax;
    ecx = self;
    edx = in_edx;
    esi = 0u;
L_101cba89: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x100eb530u), 1, esi);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_101cbaa4;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
L_101cba96: ;
    if (rd16(eax) == (uint16_t)arg1) goto L_101cbaaf;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_stdcall(g, COW_IMG(0x100eb570u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        goto L_101cba96;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
L_101cbaa4: ;
    if ((int32_t)(esi + 1u) < 18)
    {
        esi = esi + 1u;
        goto L_101cba89;
    }
    return eax & 0xffffff00u;
L_101cbaaf: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cba80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101cba80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
