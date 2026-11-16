/* f_0x1015dc70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1015dc70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(COW_IMG(0x103722d8u)) == 0u) goto L_1015dca6;
    eax = COW_IMG(0x103722d8u);
    ecx = self;
    edx = in_edx;
    esi = COW_IMG(0x103722d8u);
    edi = 0u;
L_1015dc89: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10312980u), 5, eax, arg1, 0x10u, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u) goto L_1015dcb9;
    ecx = t2;
    edx = t3;
    if (rd8(esi + 0x2cu) != 0u)
    {
        eax = esi + 0x2cu;
        ecx = (ecx & 0xffffff00u) | rd8(esi + 0x2cu);
        esi = esi + 0x2cu;
        edi = edi + 1u;
        goto L_1015dc89;
    }
L_1015dca6: ;
    if (arg2 != 0u)
    {
        wr8(arg2, 0u);
    }
L_1015dcb1: ;
    return 0u;
L_1015dcb9: ;
    if (arg2 != 0u)
    {
        wr8(arg2, 1u);
    }
    if (rd32(COW_IMG(0x103722f8u) + edi * 0x2cu) == 0u) goto L_1015dcb1;
    eax = rd32(COW_IMG(0x103722f8u) + edi * 0x2cu);
    return rd32(eax);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015dc70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015dc70(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
