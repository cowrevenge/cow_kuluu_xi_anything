/* f_0x10043f40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10043f40(Guest* g)
{
    uint32_t ebx;
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
    uint32_t t18;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->esp = sp0 - 0xcu;
    t1 = cow_stdcall(g, COW_IMG(0x10043de0u), 0);
    if (rd32(self + t1 * 0x20u + 4u) != 0u)
    {
        ebx = t1;
        esi = self + t1 * 0x20u;
        if (arg4 == 0u)
        {
            t13 = rd32(esi + 0x18u);
            t14 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, rd32(rd32(t14) + 0x130u), rd32(t14), 2, t14, t13);
            t15 = rd32(ebx * 0x20u + self + 0x20u);
            t16 = rd32(esi + 4u);
            t17 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu)) + 0x14cu), rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu)), 4, t17, 0u, t16, t15);
            ebx = ebx * 0x20u + 0x20u;
        }
        else
        {
            t2 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            g->edx = rd32(t2);
            t3 = rd32(COW_IMG(0x1047bfa8u));
            t4 = rd32(t2);
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, rd32(t4 + 0x130u), t3, 2, t2, arg4);
            t5 = g->ecx;
            t6 = g->edx;
            g->edx = t6;
            t7 = rd32(COW_IMG(0x1047bfa8u));
            t8 = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
            t9 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            t10 = cow_cdecl(g, COW_IMG(0x1006a560u), 1, arg4);
            t11 = g->edx;
            t12 = rd32(esi + 4u);
            cow_thiscall(g, rd32(t8 + 0x14cu), t12, 4, t9, 0u, t12, t10);
            ebx = t8;
        }
        t18 = arg1 + rd32(esi + 0xcu);
        g->ebx = ebx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x1000cb20u), rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc8u), 3, arg3, t18, arg2);
    }
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10043f40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10043f40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 20u);
}
/* COW_ADAPTER END */
