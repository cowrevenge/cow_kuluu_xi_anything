/* f_0x100f87e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f87e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x8du, 0u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        goto L_100f8830;
    }
    ecx = t2;
    edx = t3;
    esi = t1;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_cdecl(g, COW_IMG(0x10103e10u), 5, esi + 0xcu, arg1, arg2, in_edi, in_ebx);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(esi + 4u, t4);
    wr32(esi + 8u, arg2);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x18u;
    t7 = cow_cdecl(g, COW_IMG(0x10103dd0u), 2, arg1, arg2);
    t8 = g->ecx;
    t9 = g->edx;
    wr8(esi + 0x3eu, (uint8_t)t7);
    g->esp = sp0 - 0x20u;
    t10 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, esi, 0x40u, 0u);
    return (t10 & 0xffffff00u) | 1u;
L_100f8830: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f87e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f87e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
