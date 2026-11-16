/* f_0x1021f360 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1021f360(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr16(sp0 - 4u, 0x10u);
    wr16(sp0 - 2u, 0x2eu);
    t1 = rd32(sp0 - 4u);
    wr16(sp0 - 8u, 0x10u);
    wr16(sp0 - 6u, 0x10u);
    wr32(sp0 - 0x18u, 0u);
    t2 = rd32(sp0 - 8u);
    wr32(arg1 + 4u, t1);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    wr32(arg1, t2);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 8u, 0u, 0u);
    t3 = g->edx;
    wr16(arg1, rd16(arg1));
    wr16(arg1 + 4u, rd16(arg1 + 4u));
    wr16(arg1 + 2u, rd16(arg1 + 2u));
    wr16(arg1 + 6u, rd16(arg1 + 6u));
    if (rd32(COW_IMG(0x10385ed4u)) == 0u) goto L_1021f400;
    edx = t3;
    eax = COW_IMG(0x10385ed4u);
    edi = COW_IMG(0x10385ed4u);
L_1021f3d3: ;
    g->eax = rd32(eax);
    g->edx = edx;
    t4 = rd32(eax);
    t5 = rd32(rd32(eax));
    g->esp = sp0 - 0x14u;
    t6 = cow_thiscall(g, COW_IMG(0x1011ba40u), t5, 0);
    t7 = g->edx;
    if ((uint8_t)t6 != 0u)
    {
        eax = t6;
        edx = t7;
        ebx = t5;
        goto L_1021f3f7;
    }
    edx = t7;
    if (rd32(edi + 4u) != 0u)
    {
        eax = edi + 4u;
        edi = edi + 4u;
        goto L_1021f3d3;
    }
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return;
L_1021f3f7: ;
    wr32(sp0 - 0x18u, arg1);
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x10118f70u), eax, rd32(ebx + 8u), g->edx, 0, 1, arg1);
L_1021f400: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021f360(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1021f360(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
