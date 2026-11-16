/* f_0x100fcf80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_100fcf80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 180u);

    wr32(sp0 - 0xa0u, in_ebx);
    wr32(sp0 - 0xa4u, in_esi);
    wr32(sp0 - 0xa8u, in_edi);
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = in_eax;
        goto L_100fd0a3;
    }
    ecx = rd32(COW_IMG(0x104dfd98u));
    if ((uint8_t)arg1 >= 2u)
    {
        eax = arg1;
        goto L_100fd0a3;
    }
    if (rd8(ecx + (uint8_t)arg1 * 0x9cu + 0x40c44u) != (uint8_t)(arg2 >> 8u))
    {
        eax = rd8(ecx + (uint8_t)arg1 * 0x9cu + 0x40c44u);
        goto L_100fd0a3;
    }
    eax = rd8(ecx + (uint8_t)arg1 * 0x9cu + 0x40c44u);
    edx = ecx + (uint8_t)arg1 * 0x9cu + 0x40c44u;
    ecx = (ecx & 0xffff0000u) | (uint16_t)arg2;
    if ((uint8_t)eax == 0x10u)
    {
        eax = (uint8_t)eax - 0x10u;
        goto L_100fd05f;
    }
    eax = (uint8_t)eax - 0x10u;
    if (eax != 2u)
    {
        eax = eax - 2u;
        goto L_100fd0a3;
    }
    eax = eax - 2u;
    if ((uint8_t)ecx != 0u) goto L_100fd0a3;
    if ((uint16_t)arg3 >= 0x10u) goto L_100fd0a3;
    if (rd8(edx + (uint16_t)arg3 + 4u) == (uint8_t)arg4) goto L_100fd0a3;
    edi = sp0 - 0x9cu;
    eax = 0u;
    ecx = 0x27u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x9cu, rd32(edx));
    if ((uint8_t)arg4 == 0u) goto L_100fd03d;
    eax = (uint8_t)arg4;
L_100fd043: ;
    wr8(sp0 + (uint16_t)arg3 - 0x98u, (uint8_t)eax);
    wr32(sp0 - 0xacu, sp0 - 0x9cu);
    wr32(sp0 - 0xb0u, arg4);
    g->esp = sp0 - 0xa8u;
    t1 = cow_cdecl(g, COW_IMG(0x100fd0b0u), 2, arg4, sp0 - 0x9cu);
    return t1;
L_100fd03d: ;
    eax = rd8(edx + (uint16_t)arg3 + 4u);
    goto L_100fd043;
L_100fd05f: ;
    if ((uint8_t)ecx != 0u) goto L_100fd0a3;
    if ((uint16_t)arg3 >= 0x14u) goto L_100fd0a3;
    if (rd8(edx + (uint16_t)arg3 + 4u) == (uint8_t)arg4) goto L_100fd0a3;
    edi = sp0 - 0x9cu;
    eax = 0u;
    ecx = 0x27u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x9cu, rd32(edx));
    if ((uint8_t)arg4 == 0u) goto L_100fd03d;
    eax = (uint8_t)arg4;
    goto L_100fd043;
L_100fd0a3: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fcf80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fcf80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
