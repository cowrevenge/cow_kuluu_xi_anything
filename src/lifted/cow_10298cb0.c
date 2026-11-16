/* f_0x10298cb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10298cb0(Guest* g)
{
    uint32_t eax;
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
    uint32_t t21;
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
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x102984d0u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 4u, t1);
    wr32(sp0 - 0xcu, arg2);
    wr32(sp0 - 0x10u, t1);
    g->edx = t3;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x10298730u), t2, 2, t1, arg2);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        ecx = t5;
        goto L_10298ceb;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    wr32(sp0 - 0xcu, arg2);
    wr32(sp0 - 0x10u, COW_IMG(0x103bbe60u));
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bbe60u), arg2);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x14u, sp0 - 4u);
    g->eax = sp0 - 4u;
    t9 = cow_cdecl(g, COW_IMG(0x10298560u), 3, sp0 - 4u, COW_IMG(0x103bbe60u), arg2);
    return 0xffffffffu;
L_10298ceb: ;
    t10 = rd32(sp0 - 4u);
    t11 = rd32(arg1 + 0x20u);
    wr32(arg1 + 0x1cu, t10);
    wr32(arg1 + 0x20u, t11 | 1u);
    if (rd8(COW_IMG(0x103bbde0u)) != 0u)
    {
        eax = t10;
        wr32(sp0 - 0xcu, 0u);
        t12 = rd32(eax + 0x28u);
        wr32(sp0 - 0x10u, t12);
        t13 = rd32(eax + 0x24u);
        wr32(sp0 - 0x14u, t13);
        t14 = rd32(eax + 0x20u);
        wr32(sp0 - 0x18u, t14);
        t15 = rd32(eax + 0x1cu);
        wr32(sp0 - 0x1cu, t15);
        g->esi = arg1;
        g->edx = t15;
        g->esp = sp0 - 8u;
        t16 = cow_thiscall_cdecl(g, COW_IMG(0x10281850u), t14, 5, t15, t14, t13, t12, 0u);
        t17 = g->edx;
        t18 = rd32(sp0 - 4u);
        wr32(arg1 + 0x14u, t16);
        if (rd32(t18 + 0x38u) != 0u)
        {
            eax = rd32(t18 + 0x38u);
            ecx = t18;
            edx = t17;
            wr32(sp0 - 0xcu, eax);
            t19 = rd32(ecx + 0x30u);
            wr32(sp0 - 0x10u, t19);
            t20 = rd32(ecx + 0x34u);
            wr32(sp0 - 0x14u, t20);
            g->esp = sp0 - 8u;
            t21 = cow_cdecl(g, COW_IMG(0x102819f0u), 3, t20, t19, eax);
            wr32(arg1 + 0x18u, t21);
        }
    }
    g->esi = in_esi;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10298cb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10298cb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
