/* f_0x10155f60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_10155f60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr32(self + 8u, arg1);
    wr32(self + 0xcu, arg2);
    wr32(self + 0x20u, arg4);
    wr32(self + 4u, 0u);
    wr32(self + 0x10u, arg3);
    wr32(self + 0x24u, arg5);
    wr32(self + 0x28u, arg6);
    wr32(self + 0x14u, 0u);
    wr32(self + 0x18u, 0u);
    wr32(self + 0x1cu, 0u);
    if (rd8(arg3) == 0u)
    {
        ecx = (arg5 & 0xffffff00u) | rd8(arg3);
        edi = 0u;
        goto L_10155fc9;
    }
    eax = arg3;
    ecx = (arg5 & 0xffffff00u) | rd8(arg3);
    edx = arg6;
    edi = 0u;
L_10155fa5: ;
    if (rd8(eax) == 0x2au)
    {
        wr32(self + 0x14u, edi);
    }
    if (rd8(eax) == 0x7eu)
    {
        wr32(self + 0x18u, edi);
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x1011da80u), 1, eax);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd8(edi + t1 + rd32(self + 0x10u)) != 0u)
    {
        eax = edi + t1 + rd32(self + 0x10u);
        ecx = t2;
        edx = t3;
        edi = edi + t1;
        goto L_10155fa5;
    }
    ecx = t2;
    edi = edi + t1;
L_10155fc9: ;
    t4 = rd32(self + 0x14u);
    wr32(self + 0x1cu, edi);
    if (t4 != 0u)
    {
        wr32(self + 0x1cu, edi + 1u);
        ecx = edi + 1u;
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
    t5 = rd32(self + 0x1cu) + 6u;
    wr32(self + 0x1cu, t5);
    if (eax != 0u)
    {
        edx = t5;
    }
    else
    {
        edx = t5;
        wr32(self + 0x18u, edi);
    }
    t6 = rd32(self + 0x28u);
    wr32(self + 0x2cu, 0u);
    wr32(self + 0x30u, 0u);
    wr32(self + 0x34u, 0u);
    if (rd8(t6) == 0u)
    {
        edi = 0u;
        goto L_10156036;
    }
    eax = t6;
    ecx = (ecx & 0xffffff00u) | rd8(t6);
    edi = 0u;
L_10156007: ;
    if (rd8(eax) == 0x2au)
    {
        wr32(self + 0x2cu, edi);
        wr32(self + 0x34u, 2u);
    }
    if (rd8(eax) == 0x7eu)
    {
        wr32(self + 0x30u, edi);
    }
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    t7 = cow_cdecl(g, COW_IMG(0x1011da80u), 1, eax);
    t8 = g->ecx;
    if (rd8(edi + t7 + rd32(self + 0x28u)) != 0u)
    {
        eax = edi + t7 + rd32(self + 0x28u);
        ecx = (t8 & 0xffffff00u) | rd8(edi + t7 + rd32(self + 0x28u));
        edx = rd32(self + 0x28u);
        edi = edi + t7;
        goto L_10156007;
    }
    edi = edi + t7;
L_10156036: ;
    t9 = rd32(self + 0x2cu);
    wr32(self + 0x34u, edi);
    if (t9 == 0u)
    {
        ecx = t9;
    }
    else
    {
        ecx = t9;
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
    t10 = rd32(self + 0x34u) + 6u;
    wr32(self + 0x34u, t10);
    if (eax == 0u)
    {
        wr32(self + 0x30u, edi);
    }
    if (rd32(self + 0x18u) < rd32(self + 0x14u))
    {
        wr32(self + 0x14u, 0u);
    }
    if (rd32(self + 0x30u) < ecx)
    {
        wr32(self + 0x2cu, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10155f60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10155f60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 24u);
}
/* COW_ADAPTER END */
