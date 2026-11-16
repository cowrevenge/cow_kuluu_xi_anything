/* f_0x100ebf80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100ebf80(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        edx = in_edx;
        goto L_100ebfd6;
    }
    esi = rd32(COW_IMG(0x104dfd98u));
    if (rd16(esi + 0x19a50u) == 0u)
    {
        edx = 0u;
        goto L_100ebfd6;
    }
    ebp = (in_ebp & 0xffff0000u) | rd16(esi + 0x19a50u);
    edx = 0u;
L_100ebfa4: ;
    if ((uint16_t)edx >= 0x10u) goto L_100ebfd6;
    if (arg1 != rd8(esi + (uint16_t)edx * 0x18u + 0x198d1u)) goto L_100ebfd0;
    eax = esi + (uint16_t)edx * 0x18u + 0x9868u;
    if ((uint8_t)arg2 == rd8(eax + 0x1006au)) goto L_100ebfdd;
L_100ebfd0: ;
    if ((uint16_t)(edx + 1u) < (uint16_t)ebp)
    {
        edx = edx + 1u;
        goto L_100ebfa4;
    }
    edx = edx + 1u;
L_100ebfd6: ;
    g->edx = edx;
    return 0u;
L_100ebfdd: ;
    if ((uint8_t)arg3 == 0u) goto L_100ec043;
    t1 = esi + (uint16_t)edx * 0x18u + 0x198d0u;
    edi = t1;
    eax = 0u;
    ecx = 6u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(esi + 0x19a50u, (uint16_t)(rd16(esi + 0x19a50u) - 1u));
    if ((uint16_t)edx >= rd16(esi + 0x19a50u)) goto L_100ebfd6;
    eax = (eax & 0xffff0000u) | rd16(esi + 0x19a50u);
    ebx = t1;
    if ((uint16_t)eax >= 0x10u) goto L_100ebfd6;
    esi = esi + (uint16_t)eax * 0x18u + 0x198d0u;
    edi = ebx;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->edx = (uint16_t)eax * 3u + 0x200du;
    return 0u;
L_100ec043: ;
    g->edx = (uint16_t)edx + 0xaafu;
    return esi + (uint16_t)edx * 0x18u + 0x198d0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ebf80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ebf80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
