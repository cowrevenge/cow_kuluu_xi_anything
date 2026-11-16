/* f_0x100fd230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_100fd230(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 184u);

    wr32(sp0 - 0xa0u, in_ebx);
    wr32(sp0 - 0xa4u, in_ebp);
    wr32(sp0 - 0xa8u, in_esi);
    wr32(sp0 - 0xacu, in_edi);
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = in_eax;
        goto L_100fd315;
    }
    ebp = rd32(COW_IMG(0x104dfd98u));
    if ((uint8_t)arg1 >= 2u)
    {
        eax = arg1;
        goto L_100fd315;
    }
    if (rd8(ebp + (uint8_t)arg1 * 0x9cu + 0x40c44u) != (uint8_t)(arg2 >> 8u))
    {
        eax = (uint16_t)arg3 >> 3u;
        goto L_100fd315;
    }
    ecx = rd8(ebp + (uint8_t)arg1 * 0x9cu + 0x40c44u);
    ebp = ebp + (uint8_t)arg1 * 0x9cu + 0x40c44u;
    if ((uint8_t)ecx != 0x11u)
    {
        eax = (uint16_t)arg3 >> 3u;
        goto L_100fd315;
    }
    if ((uint8_t)arg2 != 0u)
    {
        eax = (uint16_t)arg3 >> 3u;
        goto L_100fd315;
    }
    if ((uint16_t)arg3 >= 0x40u)
    {
        eax = (uint16_t)arg3 >> 3u;
        goto L_100fd315;
    }
    t1 = (uint16_t)arg3 >> 3u;
    if ((uint8_t)(((arg3 & 7u) != 0u ? (uint8_t)(((uint8_t)arg4 != 0u) << (arg3 & 7u)) : (uint8_t)arg4 != 0u) | ((uint8_t)~(uint8_t)((arg3 & 7u) != 0u ? (uint8_t)(1u << (arg3 & 7u)) : 1u) & rd8(ebp + (uint16_t)t1 + 4u))) == rd8(ebp + (uint16_t)t1 + 4u))
    {
        eax = (t1 & 0xffffff00u) | rd8(ebp + (uint16_t)t1 + 4u);
        goto L_100fd315;
    }
    esi = (uint16_t)t1;
    edi = sp0 - 0x9cu;
    eax = 0u;
    ecx = 0x27u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x9cu, rd32(ebp));
    wr8(esi + sp0 - 0x98u, (uint8_t)((arg3 & 7u) != 0u ? (uint8_t)(1u << (arg3 & 7u)) : 1u));
    wr32(sp0 - 0xb0u, sp0 - 0x9cu);
    wr32(sp0 - 0xb4u, arg4);
    t2 = rd32(ebp);
    g->esp = sp0 - 0xacu;
    t3 = cow_cdecl(g, COW_IMG(0x100fd0b0u), 2, arg4, sp0 - 0x9cu);
    return t3;
L_100fd315: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fd230(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fd230(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
