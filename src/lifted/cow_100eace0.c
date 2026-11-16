/* f_0x100eace0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_100eace0(Guest* g)
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
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint8_t)arg1 != 1u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        goto L_100ead54;
    }
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xe2u, 0u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        goto L_100ead54;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    esi = t1;
    t4 = rd8(esi + 4u);
    wr8(esi + 6u, (uint8_t)arg2);
    wr8(esi + 4u, (t4 & 0xfu) | 0x40u);
    wr8(esi + 5u, rd8(esi + 5u) & 0x3fu);
    wr16(esi + 0xau, 0u);
    wr8(esi + 7u, (uint8_t)arg3);
    g->ecx = esi + 0x10u;
    g->edx = (edx & 0xffffff00u) | (uint8_t)arg3;
    g->esp = sp0 - 4u;
    t5 = cow_call_regs(g, COW_IMG(0x10312090u), arg4, g->ecx, g->edx, 1, 3, esi + 0x10u, arg4, 0x80u);
    t6 = g->ecx;
    t7 = g->edx;
    wr8(esi + 0x8fu, 0u);
    g->esp = sp0 - 0x10u;
    t8 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, esi, 0x90u, 0u);
    return (t8 & 0xffffff00u) | 1u;
L_100ead54: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100eace0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100eace0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
