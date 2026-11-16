/* f_0x100e8b80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100e8b80(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;

    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_100e8b90;
    }
    return 0u;
L_100e8b90: ;
    wr8(eax + 0x9800u, rd8(sp0 + 4u));
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x97fcu, 1u);
    if (rd8(rd32(COW_IMG(0x104dfd98u)) + 0x9800u) == 0u)
    {
        edx = rd32(COW_IMG(0x104dfd98u));
        goto L_100e8bc9;
    }
    eax = rd8(rd32(COW_IMG(0x104dfd98u)) + 0x9800u);
    edx = rd32(COW_IMG(0x104dfd98u));
    if (eax == 1u) goto L_100e8c5a;
    eax = eax - 1u;
    if (eax != 4u) goto L_100e8bcd;
L_100e8bc9: ;
    wr8(sp0 + 4u, 0u);
L_100e8bcd: ;
    t1 = rd8(edx + (uint8_t)rd32(sp0 + 4u) * 0x64u + 0x9534u);
    t2 = edx + t1 * 0x70u + (uint8_t)rd32(sp0 + 4u) * 0x8c4u + 0x57dau;
    t3 = rd32(sp0 + 4u);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10312090u), edx + t1 * 0x70u, g->ecx, g->edx, 1, 3, t2, edx + 0x3c3a4u, 0x10u);
    t4 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c390u);
    t5 = rd32(COW_IMG(0x104dfd98u));
    wr32(edx + t1 * 0x70u + (uint8_t)t3 * 0x8c4u + 0x57ecu, t4);
    t6 = rd32(COW_IMG(0x104dfd98u));
    t7 = rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40da8u);
    wr16(edx + t1 * 0x70u + (uint8_t)t3 * 0x8c4u + 0x57f0u, (uint16_t)t7);
    t8 = edx + t1 * 0x70u + (uint8_t)t3 * 0x8c4u + 0x57d8u;
    wr16(t8 + 0x2eu, rd16(rd32(COW_IMG(0x104dfd98u)) + 0x3c350u));
    g->edx = (t5 & 0xffff0000u) | t7;
    return t8;
L_100e8c5a: ;
    wr8(sp0 + 4u, 1u);
    goto L_100e8bcd;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e8b80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e8b80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
