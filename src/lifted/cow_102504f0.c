/* f_0x102504f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102504f0(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(arg1) & 1u)
    {
        if (rd32(arg1 + 4u) != 1u)
        {
            ecx = self;
            edx = in_edx;
        }
        else
        {
            g->ecx = self;
            g->edx = in_edx;
            g->esp = sp0 - 4u;
            cow_cdecl(g, COW_IMG(0x1024d7b0u), 1, arg1);
            t1 = g->ecx;
            t2 = g->edx;
            ecx = t1;
            edx = t2;
        }
        g->eax = arg1 + 0x280u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t3 = cow_cdecl(g, COW_IMG(0x10273940u), 1, arg1 + 0x280u);
        t4 = g->ecx;
        t5 = g->edx;
        g->ecx = t4;
        g->edx = t5;
        g->esp = sp0 - 8u;
        cow_stdcall(g, COW_IMG(0x1026e920u), 0);
        t6 = g->ecx;
        t7 = g->edx;
        g->ecx = t6;
        g->edx = t7;
        g->esp = sp0 - 4u;
        t8 = cow_cdecl(g, COW_IMG(0x1024d2e0u), 3, arg1, 1u, arg1 + 0x280u);
        t9 = g->ecx;
        t10 = g->edx;
        g->esp = sp0 - 0x10u;
        t11 = cow_fastcall(g, COW_IMG(0x10271b60u), t9, t10, 0);
        t12 = g->ecx;
        t13 = g->edx;
        g->ecx = t12;
        t14 = cow_call_regs(g, COW_IMG(0x10035f00u), g->eax, g->ecx, t13, 1, 1, 0u);
        t15 = g->ecx;
        t16 = g->edx;
        g->esp = sp0 - 0x18u;
        cow_call_regs(g, COW_IMG(0x10036070u), g->eax, g->ecx, t16, 1, 0);
        t17 = (rd32(arg1) & 0xffffff00u) | (rd32(arg1) & 0xfeu);
        wr32(arg1, t17);
    }
    if (rd32(COW_IMG(0x1066914cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066914cu));
        t18 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->esp = sp0;
        cow_thiscall(g, rd32(rd32(t18) + 0xe0u), ecx, 2, t18, ecx);
    }
    t19 = rd32(COW_IMG(0x10669150u));
    wr32(COW_IMG(0x1066914cu), 0u);
    if (t19 != 0u)
    {
        ecx = t19;
        t20 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->esp = sp0;
        cow_thiscall(g, rd32(rd32(t20) + 0xe0u), ecx, 2, t20, ecx);
    }
    wr32(COW_IMG(0x10669150u), 0u);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102504f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102504f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
