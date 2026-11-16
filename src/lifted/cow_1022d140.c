/* f_0x1022d140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1022d140(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 164u);

    wr32(sp0 - 0x84u, in_esi);
    wr32(sp0 - 0x88u, in_edi);
    t1 = rd32(rd32(COW_IMG(0x10667a70u)) + 0x30u);
    wr32(sp0 - 0x8cu, t1);
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x10667a70u));
    g->esp = sp0 - 0x88u;
    t3 = cow_thiscall(g, COW_IMG(0x1022c730u), t2, 1, t1);
    t4 = g->edx;
    if ((int32_t)t3 < 0)
    {
        eax = t3;
        esi = t2;
    }
    else
    {
        eax = t3;
        edx = t4;
        esi = t2;
        edi = t1;
        wr32(sp0 - 0x8cu, edi);
        g->eax = eax;
        g->esp = sp0 - 0x88u;
        t5 = cow_thiscall(g, COW_IMG(0x1022c730u), esi, 1, edi);
        t6 = rd32(arg2 + 4u);
        wr32(sp0 - 0x8cu, t6);
        wr32(sp0 - 0x90u, t5);
        t7 = cow_call_regs(g, COW_IMG(0x1022bda0u), t5, arg2, t6, 1, 2, t5, t6);
        t8 = g->edx;
        g->ecx = t7;
        g->edx = t8;
        g->esp = sp0 - 0x8cu;
        t9 = cow_stdcall(g, COW_IMG(0x1022bf10u), 1, rd32(sp0 - 0x90u));
        t10 = g->ecx;
        t11 = g->edx;
        wr32(sp0 - 0x90u, t9);
        wr32(sp0 - 0x94u, COW_IMG(0x10386970u));
        wr32(sp0 - 0x98u, sp0 - 0x80u);
        g->eax = sp0 - 0x80u;
        g->edx = t11;
        g->esp = sp0 - 0x84u;
        t12 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, COW_IMG(0x10386970u), t9, rd32(sp0 - 0x8cu), in_edi);
        t13 = g->edx;
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, sp0 - 0x80u);
        g->esp = sp0 - 0x98u;
        t14 = cow_cdecl(g, COW_IMG(0x10080dc0u), 2, sp0 - 0x80u, 0u);
        eax = t14;
        esi = rd32(COW_IMG(0x10667a70u));
    }
    wr32(sp0 - 0x8cu, 1u);
    t15 = rd32(esi + 8u);
    wr32(sp0 - 0x90u, t15);
    g->edx = t15;
    g->esp = sp0 - 0x88u;
    t16 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t15, 1u);
    t17 = g->edx;
    g->edx = t17;
    return t16;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022d140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022d140(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
