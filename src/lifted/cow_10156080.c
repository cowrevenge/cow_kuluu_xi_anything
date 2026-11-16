/* f_0x10156080 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
void cow_fn_10156080(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr32(self + 8u, arg2);
    wr32(self + 4u, arg1);
    wr32(self + 0xcu, arg3);
    wr32(self + 0x20u, arg5);
    wr32(self + 0x10u, arg4);
    wr32(self + 0x24u, arg6);
    wr32(self + 0x28u, arg7);
    wr32(self + 0x14u, 0u);
    wr32(self + 0x18u, 0u);
    wr32(self + 0x1cu, 0u);
    if (rd8(arg4) == 0u)
    {
        ecx = (arg7 & 0xffffff00u) | rd8(arg4);
        edi = 0u;
        goto L_101560f1;
    }
    eax = arg4;
    ecx = (arg7 & 0xffffff00u) | rd8(arg4);
    edx = arg6;
    edi = 0u;
L_101560c9: ;
    if (rd8(eax) == 0x2au)
    {
        wr32(self + 0x14u, edi);
    }
    if (rd8(eax) == 0x7eu)
    {
        wr32(self + 0x18u, edi);
    }
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x1011da80u), 1, eax);
    t2 = g->ecx;
    if (rd8(edi + t1 + rd32(self + 0x10u)) != 0u)
    {
        eax = edi + t1 + rd32(self + 0x10u);
        ecx = (t2 & 0xffffff00u) | rd8(edi + t1 + rd32(self + 0x10u));
        edx = rd32(self + 0x10u);
        edi = edi + t1;
        goto L_101560c9;
    }
    ecx = (t2 & 0xffffff00u) | rd8(edi + t1 + rd32(self + 0x10u));
    edi = edi + t1;
L_101560f1: ;
    t3 = rd32(self + 0x14u);
    wr32(self + 0x1cu, edi);
    if (t3 != 0u)
    {
        wr32(self + 0x1cu, edi + 1u);
    }
    if (rd32(self + 0x18u) == 0u)
    {
        eax = rd32(self + 0x18u);
    }
    else
    {
        eax = rd32(self + 0x18u);
        wr32(self + 0x1cu, rd32(self + 0x1cu) - 1u);
    }
    t4 = rd32(self + 0x1cu) + 6u;
    wr32(self + 0x1cu, t4);
    if (eax != 0u)
    {
        edx = t4;
    }
    else
    {
        edx = t4;
        wr32(self + 0x18u, edi);
    }
    t5 = rd32(self + 0x28u);
    wr32(self + 0x2cu, 0u);
    wr32(self + 0x30u, 0u);
    wr32(self + 0x34u, 0u);
    if (rd8(t5) == 0u)
    {
        edi = 0u;
        goto L_1015615e;
    }
    eax = t5;
    ecx = (ecx & 0xffffff00u) | rd8(t5);
    edi = 0u;
L_1015612f: ;
    if (rd8(eax) == 0x2au)
    {
        wr32(self + 0x2cu, edi);
        wr32(self + 0x34u, 2u);
    }
    if (rd8(eax) == 0x7eu)
    {
        wr32(self + 0x30u, edi);
    }
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_cdecl(g, COW_IMG(0x1011da80u), 1, eax);
    t7 = g->edx;
    if (rd8(edi + t6 + rd32(self + 0x28u)) != 0u)
    {
        eax = edi + t6 + rd32(self + 0x28u);
        ecx = (rd32(self + 0x28u) & 0xffffff00u) | rd8(edi + t6 + rd32(self + 0x28u));
        edx = t7;
        edi = edi + t6;
        goto L_1015612f;
    }
    edi = edi + t6;
L_1015615e: ;
    t8 = rd32(self + 0x2cu);
    wr32(self + 0x34u, edi);
    if (t8 != 0u)
    {
        wr32(self + 0x34u, edi + 1u);
    }
    if (rd32(self + 0x30u) == 0u)
    {
        eax = rd32(self + 0x30u);
    }
    else
    {
        eax = rd32(self + 0x30u);
        wr32(self + 0x34u, rd32(self + 0x34u) - 1u);
    }
    t9 = rd32(self + 0x34u) + 6u;
    wr32(self + 0x34u, t9);
    if (eax == 0u)
    {
        wr32(self + 0x30u, edi);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10156080(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10156080(g);
    g->esp = sp0;
    rt_return(g, g->eax, 28u);
}
/* COW_ADAPTER END */
