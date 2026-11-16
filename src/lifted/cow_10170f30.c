/* f_0x10170f30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10170f30(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 != 0u)
    {
        esi = rd32(self + 4u);
        goto L_10170f69;
    }
    esi = rd32(self + 4u);
    if (esi == 0u) goto L_10170f61;
    ecx = self;
    edx = in_edx;
L_10170f48: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1, esi + 8u, 0x10u, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u) goto L_10170fc6;
    ecx = t2;
    edx = t3;
    if (rd32(esi) != 0u)
    {
        esi = rd32(esi);
        goto L_10170f48;
    }
L_10170f61: ;
    return 0u;
L_10170f69: ;
    if (esi == 0u)
    {
        eax = arg2;
        ecx = self;
        goto L_10170f94;
    }
    eax = arg2;
    ecx = self;
    edx = in_edx;
L_10170f71: ;
    if (rd8(esi + 0xddu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 0xddu);
        goto L_10170f8e;
    }
    g->ecx = esi + 8u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1, esi + 8u, 0x10u, in_edi, in_esi);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u) goto L_10170fc6;
    eax = t4;
    ecx = t5;
    edx = t6;
L_10170f8e: ;
    if (rd32(esi) != 0u)
    {
        esi = rd32(esi);
        goto L_10170f71;
    }
L_10170f94: ;
    if (rd32(self + 4u) == 0u) goto L_10170f61;
    esi = rd32(self + 4u);
L_10170f9b: ;
    if (rd8(esi + 0xddu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 0xddu);
        goto L_10170fb8;
    }
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t7 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1, esi + 8u, 0x10u, in_edi, in_esi);
    t8 = g->ecx;
    if (t7 == 0u) goto L_10170fc6;
    eax = t7;
    ecx = t8;
L_10170fb8: ;
    if (rd32(esi) != 0u)
    {
        esi = rd32(esi);
        goto L_10170f9b;
    }
    return 0u;
L_10170fc6: ;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10170f30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10170f30(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
