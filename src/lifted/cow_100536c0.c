/* f_0x100536c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100536c0(Guest* g)
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
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 0xfcu);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, 0xfcu, 1u, in_edi, in_esi, in_ebp);
    t2 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        esi = 0u;
    }
    else
    {
        eax = t1;
        edx = t2;
        esi = t1;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t3 = cow_thiscall(g, COW_IMG(0x10047f80u), esi, 0);
        t4 = g->edx;
        wr32(esi, COW_IMG(0x1032b69cu));
        wr32(esi + 0x30u, COW_IMG(0x1032b680u));
        wr32(esi + 0xf0u, 0u);
        wr32(esi + 0xf8u, 0u);
        eax = t3;
        edx = t4;
    }
    wr32(sp0 - 0x18u, self);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10053450u), esi, 1, self);
    t5 = g->edx;
    wr32(esi + 0x78u, 0x3f800000u);
    wr32(esi + 0x7cu, 0x3f800000u);
    wr32(esi + 0x80u, 0x3f800000u);
    wr32(esi + 0x84u, 0x3f800000u);
    wr32(esi + 0x88u, 0x3f800000u);
    wr32(esi + 0x8cu, 0x3f800000u);
    g->edx = t5;
    cow_thiscall(g, COW_IMG(0x1003b640u), esi + 0x30u, 0);
    t6 = g->edx;
    t7 = rd32(esi + 0x24u);
    wr8(esi + 0x1au, rd8(esi + 0x1au) | 5u);
    wr32(esi + 0x9cu, 0u);
    wr32(esi + 0x24u, t7 | 0x4000000u);
    t8 = rd32(self + 0x14u);
    wr32(esi + 0xf4u, t8);
    wr32(sp0 - 0x18u, esi);
    wr32(sp0 - 0x1cu, sp0 - 4u);
    g->eax = sp0 - 4u;
    g->edx = t6;
    t9 = cow_thiscall(g, COW_IMG(0x10074140u), rd32(COW_IMG(0x1047d128u)), 2, sp0 - 4u, esi);
    t10 = g->edx;
    wr32(sp0 - 0x18u, arg1);
    t11 = cow_thiscall(g, COW_IMG(0x1003b7b0u), esi + 0x30u, 1, arg1);
    wr32(sp0 - 0x18u, arg2);
    g->edx = arg2;
    cow_thiscall(g, COW_IMG(0x1003b830u), esi + 0x30u, 1, arg2);
    t12 = g->edx;
    t13 = rd32(esi + 0xd8u);
    wr32(esi + 0x20u, 0x6e6f6c63u);
    wr32(esi + 0x9cu, 0u);
    wr32(esi + 0xd8u, t13 & 0xfffff7ffu);
    t14 = rd32(self + 0x14u);
    wr32(esi + 0x28u, t14);
    wr16(esi + 0x18u, rd16(esi + 0x18u) & 0x8000u);
    t15 = rd32(esi + 0x24u) & 0xf7ffffffu;
    wr32(esi + 0x24u, t15);
    g->eax = t14;
    g->edx = t12;
    t16 = cow_thiscall(g, COW_IMG(0x10072030u), esi, 0);
    t17 = g->edx;
    if (rd8(sp0 + 0xcu) == 0u)
    {
        edx = t17;
    }
    else
    {
        eax = t16;
        edx = t17;
        g->ebp = self;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x100531d0u), esi, 0);
        t18 = g->edx;
        edx = t18;
    }
    if (rd32(self + 0xe0u) == 0u) goto L_10053826;
    edi = rd32(self + 0xe0u);
L_100537db: ;
    if (rd8(edi) == 4u)
    {
        if (rd32(edi + 4u) == 0u)
        {
            t19 = rd32(edi + 8u);
            wr32(sp0 - 0x18u, t19);
            wr32(sp0 - 0x1cu, 0x19u);
            wr32(sp0 - 0x20u, sp0 + 4u);
            g->eax = t19;
            g->esp = sp0 - 0x14u;
            t20 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 + 4u, 0x19u, t19);
            wr32(edi + 4u, rd32(t20));
        }
        t21 = rd32(self + 0xd8u) & 0x1ffu;
        wr32(sp0 + 0xcu, t21);
        t22 = rd32(sp0 + 0xcu);
        wrf32(edi + 0x10u, (float)(double)(int32_t)t22);
        edx = t21;
    }
    if ((uint8_t)rd32(edi) == 0u) goto L_10053826;
    eax = rd32(edi);
    if (edi + (eax >> 8u & 0x1fu) * 4u != 0u)
    {
        edi = edi + (eax >> 8u & 0x1fu) * 4u;
        goto L_100537db;
    }
L_10053826: ;
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0xcu);
    g->edx = edx;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100536c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100536c0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
