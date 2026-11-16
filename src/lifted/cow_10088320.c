/* f_0x10088320 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10088320(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x66u, 0u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        goto L_10088372;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    esi = t1;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
    t5 = g->edx;
    t6 = rd32(t4 + 0x78u);
    wr32(esi + 4u, t6);
    wr16(esi + 0xcu, rd16(t4 + 0x74u));
    wr32(esi + 8u, arg1);
    wr8(esi + 0xeu, (uint8_t)arg2);
    wr32(esi + 0x10u, arg3);
    wr8(esi + 0xfu, 0u);
    g->eax = arg1;
    t7 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, esi, 0x14u, 0u);
    return (t7 & 0xffffff00u) | 1u;
L_10088372: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10088320(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10088320(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
