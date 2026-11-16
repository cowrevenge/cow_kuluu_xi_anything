/* f_0x101a78a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101a78a0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x20u, 8u);
    wr32(sp0 - 0x1cu, 0xau);
    wr32(sp0 - 0x18u, 0xbu);
    wr32(sp0 - 0x14u, 0xcu);
    wr32(sp0 - 0x10u, 0xdu);
    wr32(sp0 - 0xcu, 0xeu);
    wr32(sp0 - 8u, 0xfu);
    wr32(sp0 - 4u, 0x10u);
    edx = in_edx;
    esi = 0u;
L_101a78f4: ;
    wr32(sp0 - 0x34u, arg4);
    wr32(sp0 - 0x38u, arg3);
    t1 = rd32(esi * 4u + sp0 - 0x24u);
    wr32(sp0 - 0x3cu, t1);
    wr32(sp0 - 0x40u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t2 = cow_cdecl(g, COW_IMG(0x101a7810u), 8, arg1, t1, arg3, arg4, in_edi, in_esi, in_ebx, 0u);
    t3 = g->edx;
    if ((uint8_t)t2 == 1u) goto L_101a791b;
    eax = t2;
    edx = t3;
    if (esi + 1u < 9u)
    {
        esi = esi + 1u;
        goto L_101a78f4;
    }
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_101a791b: ;
    t4 = rd32(esi * 4u + sp0 - 0x24u);
    t5 = rd32(sp0 - 0x2cu);
    t6 = rd32(sp0 - 0x30u);
    wr32(arg2, t4);
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = t5;
    g->edi = t6;
    g->edx = t4;
    return (arg2 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a78a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a78a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
