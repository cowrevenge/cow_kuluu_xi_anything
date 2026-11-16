/* f_0x101444f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101444f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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

    eax = in_eax;
    ecx = self;
    edx = in_edx;
    esi = 0u;
    edi = 0u;
L_101444fb: ;
    if (rd16(arg1 + esi * 2u) == 0u) goto L_1014451f;
    eax = (eax & 0xffff0000u) | rd16(arg1 + esi * 2u);
    if ((uint16_t)eax == 0xffffu) goto L_1014451f;
    t1 = (uint16_t)eax + 0x7400u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_cdecl(g, COW_IMG(0x10141ed0u), 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
L_10144521: ;
    if ((int32_t)(esi + 1u) < 12)
    {
        esi = esi + 1u;
        edi = eax + edi;
        goto L_101444fb;
    }
    edi = eax + edi;
    return edi;
L_1014451f: ;
    eax = 0u;
    goto L_10144521;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101444f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101444f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
