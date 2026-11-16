/* f_0x100fd100 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100fd100(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 176u);

    wr32(sp0 - 0xa0u, in_esi);
    wr32(sp0 - 0xa4u, in_edi);
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = in_eax;
        goto L_100fd1fc;
    }
    ecx = rd32(COW_IMG(0x104dfd98u));
    if ((uint8_t)arg1 >= 2u)
    {
        eax = arg1;
        goto L_100fd1fc;
    }
    if (rd8(ecx + (uint8_t)arg1 * 0x9cu + 0x40c44u) != (uint8_t)(arg2 >> 8u))
    {
        eax = rd8(ecx + (uint8_t)arg1 * 0x9cu + 0x40c44u);
        goto L_100fd1fc;
    }
    eax = rd8(ecx + (uint8_t)arg1 * 0x9cu + 0x40c44u);
    esi = ecx + (uint8_t)arg1 * 0x9cu + 0x40c44u;
    ecx = (ecx & 0xffff0000u) | (uint16_t)arg2;
    if ((uint8_t)eax == 0x10u)
    {
        eax = (uint8_t)eax - 0x10u;
        goto L_100fd1c0;
    }
    eax = (uint8_t)eax - 0x10u;
    if (eax != 2u)
    {
        eax = eax - 2u;
        goto L_100fd1fc;
    }
    eax = eax - 2u;
    if ((uint8_t)ecx != 0u) goto L_100fd1fc;
    t1 = rd32(esi + 0xau);
    edi = sp0 - 0x9cu;
    eax = 0u;
    ecx = 0x27u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x9cu, rd32(esi));
    t2 = rd32(esi + 6u);
    wr32(sp0 - 0x96u, t2);
    wr32(sp0 - 0x92u, t1);
    t3 = rd32(esi + 0xeu);
    t4 = rd16(esi + 0x12u);
    wr32(sp0 - 0x8eu, t3);
    wr32(sp0 - 0xa8u, sp0 - 0x9cu);
    wr32(sp0 - 0xacu, 0u);
    wr16(sp0 - 0x8au, (uint16_t)t4);
    g->eax = sp0 - 0x9cu;
    g->esp = sp0 - 0xa4u;
    t5 = cow_cdecl(g, COW_IMG(0x100fd0b0u), 2, 0u, sp0 - 0x9cu);
    return t5;
L_100fd1c0: ;
    if ((uint8_t)ecx != 0u) goto L_100fd1fc;
    edi = sp0 - 0x9cu;
    eax = 0u;
    ecx = 0x27u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x9cu, rd32(esi));
    wr32(sp0 - 0xa8u, sp0 - 0x9cu);
    esi = esi + 4u;
    edi = sp0 - 0x98u;
    ecx = 5u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0xacu, eax);
    g->eax = eax;
    g->esp = sp0 - 0xa4u;
    t6 = cow_cdecl(g, COW_IMG(0x100fd0b0u), 2, eax, sp0 - 0x9cu);
    return t6;
L_100fd1fc: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fd100(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fd100(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
