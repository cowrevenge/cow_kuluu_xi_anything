/* f_0x1028e080 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1028e080(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    if (rd32(rd32(arg2 + 0x1cu) + 0x68u) == 0u)
    {
        esi = 0u;
    }
    else
    {
        eax = rd32(arg2 + 0x1cu);
        ecx = rd32(rd32(arg2 + 0x1cu) + 0x68u);
        wr32(eax + 0x68u, 0u);
        esi = ecx;
    }
    wr32(sp0 - 0x34u, sp0 - 0x10u);
    wr32(sp0 - 0x38u, sp0 - 0x28u);
    t1 = arg4 * 0xf8u + rd32(arg2 + 0x20u);
    wr32(sp0 - 0x3cu, t1);
    wr32(sp0 - 0x40u, arg2);
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x1027cd50u), 4, arg2, t1, sp0 - 0x28u, sp0 - 0x10u);
    if (esi != 0u)
    {
        t2 = rd32(sp0 - 0x28u);
        wr32(sp0 - 0x1cu, t2);
        t3 = rd32(sp0 - 0x24u);
        wr32(sp0 - 0x18u, t3);
        t4 = rd32(sp0 - 0x20u);
        wr32(sp0 - 0x14u, t4);
        wr32(sp0 - 0x34u, sp0 - 0x1cu);
        t5 = rd32(esi + 0x64u) + 0x1cu;
        wr32(sp0 - 0x38u, t5);
        wr32(sp0 - 0x3cu, sp0 - 0x28u);
        g->esp = sp0 - 0x30u;
        cow_cdecl(g, COW_IMG(0x1027efa0u), 3, sp0 - 0x28u, t5, sp0 - 0x1cu);
    }
    wr32(rd32(arg2 + 0x1cu) + 0x68u, esi);
    if (rd32(arg3 * 0xf8u + rd32(arg1 + 0x20u) + 0x64u) == 0u)
    {
        ecx = (arg3 << 5u) - arg3;
        edx = rd32(arg1 + 0x20u);
    }
    else
    {
        eax = rd32(arg3 * 0xf8u + rd32(arg1 + 0x20u) + 0x64u);
        t6 = rd32(sp0 - 0x28u);
        wr32(eax + 0x5cu, t6);
        t7 = rd32(sp0 - 0x24u);
        wr32(eax + 0x60u, t7);
        t8 = rd32(sp0 - 0x20u);
        wr32(eax + 0x64u, t8);
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        wr32(sp0 - 0x38u, eax + 0x68u);
        g->ecx = t8;
        g->edx = sp0 - 0x10u;
        g->esp = sp0 - 0x30u;
        cow_cdecl(g, COW_IMG(0x1027a720u), 2, eax + 0x68u, sp0 - 0x10u);
        t9 = g->ecx;
        t10 = g->edx;
        ecx = t9;
        edx = t10;
    }
    if (rd32(rd32(arg1 + 0x1cu) + 0x68u) == 0u)
    {
        eax = rd32(rd32(arg1 + 0x1cu) + 0x68u);
        goto L_1028e157;
    }
    eax = rd32(rd32(arg1 + 0x1cu) + 0x68u);
    wr32(sp0 - 0x34u, eax);
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x10285810u), 1, eax);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    return;
L_1028e157: ;
    wr32(sp0 - 0x34u, arg1);
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x1027c9f0u), 1, arg1);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028e080(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1028e080(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
