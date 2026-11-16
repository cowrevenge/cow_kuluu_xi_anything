/* f_0x10202af0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10202af0(Guest* g)
{
    double d11;
    double d12;
    double d13;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_edi);
    if ((int16_t)rd16(self + 0x3au) < 0)
    {
        eax = in_eax;
        goto L_10202b79;
    }
    wr32(sp0 - 0xcu, 3u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x10087070u), in_eax, g->ecx, g->edx, 1, 1, 3u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        goto L_10202b79;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        goto L_10202b79;
    }
    eax = t4;
    edx = t5;
    wr32(sp0 - 0xcu, 0xffu);
    g->esp = sp0 - 8u;
    t6 = cow_thiscall(g, COW_IMG(0x100956c0u), eax, 1, 0xffu);
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        goto L_10202b79;
    }
    eax = t6;
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, sp0 - 4u);
    t7 = (rd32(sp0 - 4u) & 0xffffff00u) | rd8(self + 0x3au);
    wr32(sp0 - 0x18u, t7);
    wr32(sp0 - 0x1cu, arg2 + 7u);
    wr32(sp0 - 0x20u, arg1 - 0x3au);
    g->ebx = arg2;
    g->ecx = arg2 + 7u;
    t8 = rd32(sp0 - 4u);
    t9 = rd8(self + 0x3au);
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x101cb0d0u), 4, arg1 - 0x3au, arg2 + 7u, t7, sp0 - 4u);
    t10 = g->ecx;
    d11 = cow_take_float(g);
    d12 = cow_take_float(g);
    d13 = cow_take_float(g);
    t14 = rd32(COW_IMG(0x104e1b98u) + (((int16_t)rd16(self + 0x3au) > 0) - 1u & 9u) * 4u);
    wr32(sp0 - 0x24u, t14);
    wr32(sp0 - 0x28u, COW_IMG(0x1035baecu));
    wr32(sp0 - 0x2cu, arg2);
    wr32(sp0 - 0x30u, arg1 - 0x3au);
    wr32(sp0 - 0x34u, 0x66u);
    g->esp = sp0 - 0x20u;
    t15 = cow_cdecl(g, COW_IMG(0x101c9d50u), 5, 0x66u, arg1 - 0x3au, arg2, COW_IMG(0x1035baecu), t14);
    g->ebx = in_ebx;
    g->edi = rd32(sp0 - 8u);
    fpush(g, d11);
    fpush(g, d12);
    fpush(g, d13);
    return (t15 & 0xffffff00u) | 1u;
L_10202b79: ;
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10202af0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10202af0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
