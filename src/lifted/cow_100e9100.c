/* f_0x100e9100 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100e9100(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = in_edx;
        goto L_100e911e;
    }
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x71u, 0u, 0u);
    t2 = g->edx;
    if (t1 != 0u)
    {
        edi = t1;
        goto L_100e9122;
    }
    eax = t1;
    edx = t2;
L_100e911e: ;
    g->edx = edx;
    return eax & 0xffffff00u;
L_100e9122: ;
    wr8(edi + 0xau, (uint8_t)arg1);
    if ((uint8_t)arg1 != 5u)
    {
        eax = (uint8_t)arg1;
    }
    else
    {
        eax = 0u;
    }
    wr16(edi + 8u, rd16((uint8_t)arg2 * 0x70u + (uint8_t)eax * 0x8c4u + rd32(COW_IMG(0x104dfd98u)) + 0x57f0u));
    if ((uint8_t)arg1 != 5u)
    {
        esi = (uint8_t)arg1;
    }
    else
    {
        esi = 0u;
    }
    t3 = rd32((uint8_t)arg2 * 0x70u + (uint8_t)esi * 0x8c4u + rd32(COW_IMG(0x104dfd98u)) + 0x57ecu);
    wr32(edi + 4u, t3);
    if ((uint8_t)arg1 != 5u)
    {
        edx = (uint8_t)arg1;
    }
    else
    {
        edx = 0u;
    }
    t4 = (uint8_t)arg2 * 0x70u + (uint8_t)edx * 0x8c4u + rd32(COW_IMG(0x104dfd98u)) + 0x57dau;
    g->ecx = t4;
    g->edx = edi + 0xcu;
    t5 = rd32(COW_IMG(0x104dfd98u));
    g->esp = sp0 - 4u;
    t6 = cow_call_regs(g, COW_IMG(0x10312090u), t5, g->ecx, g->edx, 1, 3, edi + 0xcu, t4, 0xfu);
    t7 = g->ecx;
    t8 = g->edx;
    g->edx = t8;
    g->esp = sp0 - 0x10u;
    t9 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, edi, 0x1cu, 0u);
    t10 = g->edx;
    g->edx = t10;
    return (t9 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e9100(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e9100(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
