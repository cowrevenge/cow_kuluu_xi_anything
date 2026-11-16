/* f_0x10109790 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10109790(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t sf;
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

    if (rd32(self + 4u) == 0u)
    {
        eax = rd32(self + 4u);
        esi = 0u;
    }
    else
    {
        eax = rd32(self + 4u);
        esi = rd32(eax + 4u);
    }
    if (esi == 0u)
    {
        edx = in_edx;
        goto L_10109821;
    }
    if (arg1 == 0u)
    {
        edx = in_edx;
        goto L_10109821;
    }
    if (rd8(esi) == 0u)
    {
        edx = in_edx;
        goto L_10109821;
    }
    ecx = (self & 0xffffff00u) | rd8(esi);
    if (rd8(arg1) == 0u)
    {
        edx = in_edx;
        goto L_10109821;
    }
    edx = in_edx;
    edi = arg1;
L_101097b8: ;
    if (rd8(edi) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(edi);
        goto L_101097e6;
    }
    eax = (eax & 0xffffff00u) | rd8(edi);
    if ((uint8_t)ecx == 0u) goto L_101097f0;
    sf = (int8_t)ecx < 0;
    if (sf) goto L_101097f8;
    if ((int8_t)eax < 0) goto L_101097f8;
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x103145e4u), g->eax, ecx, edx, 1, 1, (uint8_t)eax);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = rd8(esi);
    g->esp = sp0 - 0x10u;
    t5 = cow_call_regs(g, COW_IMG(0x103145e4u), g->eax, t2, t3, 1, 1, t4);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == t1)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        goto L_10109810;
    }
    eax = t5;
    edx = t7;
L_101097e6: ;
    if (rd8(esi) == 0u) goto L_101097f0;
    if (rd8(edi) != 0u) goto L_10109821;
L_101097f0: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_101097f8: ;
    if ((uint8_t)ecx != (uint8_t)eax) goto L_101097e6;
    if (rd8(esi + 1u) == 0u) goto L_10109821;
    ecx = (ecx & 0xffffff00u) | rd8(esi + 1u);
    if (rd8(edi + 2u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(edi + 2u);
        goto L_10109821;
    }
    eax = (eax & 0xffffff00u) | rd8(edi + 2u);
    if ((uint8_t)ecx != (uint8_t)eax) goto L_10109821;
    esi = esi + 1u;
    edi = edi + 1u;
L_10109810: ;
    if (rd8(esi + 1u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(esi + 1u);
        esi = esi + 1u;
        edi = edi + 1u;
        goto L_101097b8;
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10109821: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10109790(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10109790(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
