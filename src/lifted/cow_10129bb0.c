/* f_0x10129bb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=4 */
uint32_t cow_fn_10129bb0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, arg1);
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x10129cd0u), g->eax, g->ecx, in_edx, 1, 1, arg1);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_10129bd9;
    }
    eax = t1;
    edx = t2;
    t3 = rd8(eax + 2u);
    wr32(sp0 - 0x10u, t3);
    g->ecx = t3;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x1012a120u), 1, t3);
    t5 = g->ecx;
    t6 = g->edx;
    if ((int32_t)t4 >= 0)
    {
        eax = t4;
        ecx = t5;
        esi = t4;
        goto L_10129be9;
    }
    eax = t4;
    edx = t6;
L_10129bd9: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | (uint8_t)arg2 != 0u;
L_10129be9: ;
    wr32(sp0 - 0x10u, arg3);
    g->ecx = ecx;
    g->edx = arg3;
    g->esp = sp0 - 0xcu;
    t7 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, arg3);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 8u, t7);
    wr32(sp0 - 0x14u, arg4);
    g->edx = t9;
    g->esp = sp0 - 0x10u;
    t10 = cow_call_regs(g, COW_IMG(0x10193850u), arg4, g->ecx, g->edx, 1, 1, arg4);
    t11 = g->edx;
    wr32(sp0 - 4u, t10);
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 0x1cu, esi);
    g->edx = t11;
    g->esp = sp0 - 0x14u;
    t12 = cow_cdecl(g, COW_IMG(0x10193a10u), 2, esi, sp0 - 8u);
    t13 = g->edx;
    g->esi = rd32(sp0 - 0xcu);
    g->edx = t13;
    return (t12 & 0xffffff00u) | (uint8_t)t12 != 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10129bb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10129bb0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
