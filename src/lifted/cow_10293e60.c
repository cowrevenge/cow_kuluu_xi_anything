/* f_0x10293e60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10293e60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(arg1 + 0x1cu);
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t1, 4u, COW_IMG(0x103bb254u), 0x588u, in_edi);
    t3 = rd32(arg1 + 0x1cu);
    wr32(arg1 + 0x4cu, t2);
    g->ecx = arg2;
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, t3, 1, 4, t2, 4u, t3, arg2);
    t4 = g->ecx;
    t5 = g->edx;
    t6 = rd32(arg1 + 0x1cu);
    wr8(arg1 + 0x54u, 0u);
    g->ecx = t4;
    g->edx = t5;
    g->esp = sp0 - 0x24u;
    t7 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t6, 1u, COW_IMG(0x103bb254u), 0x58fu, t2);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(arg1 + 0x50u, t7);
    if ((int32_t)rd32(arg1 + 0x1cu) <= 0) goto L_10293ec9;
    eax = rd32(arg1 + 0x1cu);
    ecx = t8;
    edx = t9;
    edi = 0u;
L_10293eb7: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10293020u), 2, arg1, edi);
    t10 = g->ecx;
    t11 = g->edx;
    if ((int32_t)(edi + 1u) < (int32_t)rd32(arg1 + 0x1cu))
    {
        eax = rd32(arg1 + 0x1cu);
        ecx = t10;
        edx = t11;
        edi = edi + 1u;
        goto L_10293eb7;
    }
L_10293ec9: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10293e60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10293e60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
