/* f_0x101a2350 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101a2350(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    ecx = self;
    edx = in_edx;
    esi = 0u;
    edi = arg1;
L_101a2360: ;
    t1 = rd32(arg2 + esi * 4u);
    g->eax = t1;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t2 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, t1);
    t3 = g->ecx;
    if (rd8(t2) == 0u) goto L_101a2390;
    eax = t2;
    ecx = (t3 & 0xffffff00u) | rd8(t2);
    edx = edi - eax;
L_101a2378: ;
    t4 = rd8(eax);
    wr8(eax + edx, (uint8_t)t4);
    if ((uint8_t)t4 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t4;
        goto L_101a2378;
    }
    ecx = (ecx & 0xffffff00u) | t4;
    if ((int32_t)(esi + 1u) < 6)
    {
        esi = esi + 1u;
        edi = edi + 0x3du;
        goto L_101a2360;
    }
    return;
L_101a2390: ;
    wr8(arg1 + esi * 0x3du, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a2350(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101a2350(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
