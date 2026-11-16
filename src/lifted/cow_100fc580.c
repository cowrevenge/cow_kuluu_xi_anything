/* f_0x100fc580 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100fc580(Guest* g)
{
    double d11;
    double d16;
    double d7;
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = in_edx;
        goto L_100fc59e;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xbu, 1u, 1u);
    t2 = g->edx;
    if (t1 != 0u)
    {
        esi = t1;
        goto L_100fc5a2;
    }
    eax = t1;
    edx = t2;
L_100fc59e: ;
    g->edx = edx;
    return eax & 0xffffff00u;
L_100fc5a2: ;
    wr16(esi + 0x18u, 2u);
    t3 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c338u);
    wr32(esi + 4u, t3);
    t4 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c33cu);
    t5 = rd32(COW_IMG(0x104dfd98u));
    wr32(esi + 8u, t4);
    g->ecx = rd32(COW_IMG(0x104dfd98u));
    t6 = rd32(COW_IMG(0x104dfd98u));
    d7 = fr(g, (double)rdf32(rd32(COW_IMG(0x104dfd98u)) + 0x3c340u) * (double)rdf32(COW_IMG(0x10329cd8u)));
    fpush(g, d7);
    g->esp = sp0 - 4u;
    t8 = cow_call_regs(g, COW_IMG(0x10311c6cu), t4, g->ecx, g->edx, 1, 0);
    t9 = g->ecx;
    wr32(esi + 0xcu, t8);
    g->ecx = t9;
    g->edx = rd32(COW_IMG(0x104dfd98u));
    t10 = rd32(COW_IMG(0x104dfd98u));
    d11 = fr(g, (double)rdf32(rd32(COW_IMG(0x104dfd98u)) + 0x3c344u) * (double)rdf32(COW_IMG(0x10329cd8u)));
    fpush(g, d11);
    t12 = cow_call_regs(g, COW_IMG(0x10311c6cu), t8, g->ecx, g->edx, 1, 0);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(esi + 0x10u, t12);
    t15 = rd32(COW_IMG(0x104dfd98u));
    d16 = fr(g, (double)rdf32(rd32(COW_IMG(0x104dfd98u)) + 0x3c348u) * (double)rdf32(COW_IMG(0x10329cd8u)));
    fpush(g, d16);
    t17 = cow_call_regs(g, COW_IMG(0x10311c6cu), t15, g->ecx, g->edx, 1, 0);
    wr32(esi + 0x14u, t17);
    t18 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c34cu);
    g->ecx = rd32(COW_IMG(0x104dfd98u));
    g->edx = t18;
    t19 = rd32(COW_IMG(0x104dfd98u));
    t20 = cow_cdecl(g, COW_IMG(0x100dd970u), 1, t18);
    t21 = g->ecx;
    t22 = g->edx;
    wr8(esi + 0x1bu, (uint8_t)t20);
    g->ecx = t21;
    g->edx = t22;
    g->esp = sp0 - 8u;
    t23 = cow_cdecl(g, COW_IMG(0x100ddd20u), 3, esi, 0x1cu, 0u);
    t24 = g->ecx;
    t25 = g->edx;
    g->edx = t25;
    g->esp = sp0 - 0x14u;
    t26 = cow_cdecl(g, COW_IMG(0x100fc180u), 1, 2u);
    t27 = g->edx;
    g->edx = t27;
    return (t26 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fc580(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fc580(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
