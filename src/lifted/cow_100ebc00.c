/* f_0x100ebc00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100ebc00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        edx = rd32(COW_IMG(0x104dfd98u));
        goto L_100ebc0d;
    }
    edx = rd32(COW_IMG(0x104dfd98u));
    g->edx = edx;
    return in_eax & 0xffffff00u;
L_100ebc0d: ;
    if ((uint8_t)arg2 < 0xau) goto L_100ebc18;
    g->edx = edx;
    return arg2 & 0xffffff00u;
L_100ebc18: ;
    if (rd16(edx + (uint8_t)arg2 * 8u + 0x194c4u) != 0u) goto L_100ebc2b;
    g->edx = edx;
    return 0u;
L_100ebc2b: ;
    esi = edx + rd8(edx + (uint8_t)arg2 * 8u + 0x194c6u) * 0x2cu + 0x9868u;
    edi = COW_IMG(0x104ca400u);
    ecx = 0xbu;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (rd16(COW_IMG(0x104ca400u)) == rd16(edx + (uint8_t)arg2 * 8u + 0x194c4u)) goto L_100ebc65;
    g->edx = edx;
    return 0u;
L_100ebc65: ;
    if (rd32(COW_IMG(0x104ca404u)) >= rd32(edx + (uint8_t)arg2 * 8u + 0x194c0u))
    {
        eax = rd32(edx + (uint8_t)arg2 * 8u + 0x194c0u);
        goto L_100ebc79;
    }
    eax = rd32(edx + (uint8_t)arg2 * 8u + 0x194c0u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100ebc79: ;
    wr32(COW_IMG(0x104ca404u), eax);
    wr32(arg1, COW_IMG(0x104ca400u));
    g->edx = arg1;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ebc00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ebc00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
