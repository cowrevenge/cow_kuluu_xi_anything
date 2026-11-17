/* f_0x100ab9a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_100ab9a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_8;
    uint32_t loc_c;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(sp0 + 0x10u);
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x10093430u), arg1, 1, t1);
    t2 = g->ecx;
    t3 = g->edx;
    g->eax = arg1 + 4u;
    g->edx = t3;
    t4 = cow_cdecl(g, COW_IMG(0x100abc70u), 2, arg1 + 4u, arg2);
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x100ab830u), self, 1, arg2);
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_cdecl(g, COW_IMG(0x100abc70u), 2, arg1 + 0x14u, arg3);
    t9 = g->edx;
    g->edx = t9;
    cow_thiscall(g, COW_IMG(0x100ab880u), self, 1, arg3);
    t10 = g->edx;
    wr8(arg1 + 0xeeu, 0u);
    t11 = rd32(arg1 + 0x120u);
    wr8(sp0 + 0x10u, rd8(t1 + 0x24u));
    t12 = (t11 & 0x3fffffffu) ^ (uint8_t)rd32(sp0 + 0x10u) << 0x1eu;
    t13 = rd8(arg1 + 0xefu);
    wr32(arg1 + 0x120u, t12);
    t14 = rd32(t1 + 0x10u);
    t15 = rd32(t1 + 0x14u);
    t16 = rd32(t1 + 0x18u);
    t17 = rd32(t1 + 0x1cu);
    if (t13 == (uint32_t)(int8_t)rd8(t1 + 0x22u))
    {
        eax = t12;
        ecx = (t16 & 0xffffff00u) | rd8(t1 + 0x22u);
        edx = (t17 & 0xffff0000u) | rd16(t1 + 0x20u);
        ebx = t13;
        ebp = (uint32_t)(int8_t)rd8(t1 + 0x22u);
        edi = t1;
        loc_14 = t14;
        loc_10 = t15;
        loc_c = t16;
        loc_8 = t17;
    }
    else
    {
        eax = t12;
        ecx = (t16 & 0xffffff00u) | rd8(t1 + 0x22u);
        edx = (t17 & 0xffff0000u) | rd16(t1 + 0x20u);
        ebx = t13;
        ebp = (uint32_t)(int8_t)rd8(t1 + 0x22u);
        edi = t1;
        loc_14 = t14;
        loc_10 = t15;
        loc_c = t16;
        loc_8 = t17;
        wr8(arg1 + 0xefu, (uint8_t)ecx);
        t18 = (eax & 0xffffff00u) | (uint8_t)(eax | 1u);
        wr32(arg1 + 0x120u, t18);
        eax = t18;
    }
    if (rd16(arg1 + 0xfcu) == (uint16_t)loc_14)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)loc_14;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)loc_14;
        wr16(arg1 + 0xfcu, (uint16_t)eax);
        wr8(arg1 + 0xf4u, rd8(arg1 + 0xf4u) | 1u);
    }
    if (rd16(arg1 + 0xfeu) == loc_14 >> 0x10u)
    {
        eax = (eax & 0xffff0000u) | loc_14 >> 0x10u;
    }
    else
    {
        eax = (eax & 0xffff0000u) | loc_14 >> 0x10u;
        wr16(arg1 + 0xfeu, (uint16_t)eax);
        wr8(arg1 + 0xf4u, rd8(arg1 + 0xf4u) | 2u);
    }
    if (rd16(arg1 + 0x100u) == (uint16_t)loc_10)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)loc_10;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)loc_10;
        wr16(arg1 + 0x100u, (uint16_t)eax);
        wr8(arg1 + 0xf4u, rd8(arg1 + 0xf4u) | 4u);
    }
    if (rd16(arg1 + 0x102u) == loc_10 >> 0x10u)
    {
        eax = (eax & 0xffff0000u) | loc_10 >> 0x10u;
    }
    else
    {
        eax = (eax & 0xffff0000u) | loc_10 >> 0x10u;
        wr16(arg1 + 0x102u, (uint16_t)eax);
        wr8(arg1 + 0xf4u, rd8(arg1 + 0xf4u) | 8u);
    }
    if (rd16(arg1 + 0x104u) == (uint16_t)loc_c)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)loc_c;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)loc_c;
        wr16(arg1 + 0x104u, (uint16_t)eax);
        wr8(arg1 + 0xf4u, rd8(arg1 + 0xf4u) | 0x10u);
    }
    if (rd16(arg1 + 0x106u) == loc_c >> 0x10u)
    {
        ebp = (ebp & 0xffff0000u) | loc_c >> 0x10u;
    }
    else
    {
        ebp = (ebp & 0xffff0000u) | loc_c >> 0x10u;
        wr16(arg1 + 0x106u, (uint16_t)ebp);
        wr8(arg1 + 0xf4u, rd8(arg1 + 0xf4u) | 0x20u);
    }
    if (rd16(arg1 + 0x108u) == (uint16_t)loc_8)
    {
        ecx = (ecx & 0xffff0000u) | (uint16_t)loc_8;
    }
    else
    {
        ecx = (ecx & 0xffff0000u) | (uint16_t)loc_8;
        wr16(arg1 + 0x108u, (uint16_t)ecx);
        wr8(arg1 + 0xf4u, rd8(arg1 + 0xf4u) | 0x40u);
    }
    if (rd16(arg1 + 0x10au) == loc_8 >> 0x10u)
    {
        eax = (eax & 0xffff0000u) | loc_8 >> 0x10u;
    }
    else
    {
        eax = (eax & 0xffff0000u) | loc_8 >> 0x10u;
        wr16(arg1 + 0x10au, (uint16_t)eax);
        wr8(arg1 + 0xf4u, rd8(arg1 + 0xf4u) | 0x80u);
    }
    if (rd16(arg1 + 0x10cu) != (uint16_t)edx)
    {
        wr16(arg1 + 0x10cu, (uint16_t)edx);
        wr8(arg1 + 0xf5u, rd8(arg1 + 0xf5u) | 1u);
    }
    wr8(arg1 + 0x250u, rd8(edi + 0x22u));
    wr16(arg1 + 0x252u, (uint16_t)loc_14);
    wr16(arg1 + 0x25cu, (uint16_t)ebp);
    wr16(arg1 + 0x254u, loc_14 >> 0x10u);
    wr16(arg1 + 0x256u, (uint16_t)loc_10);
    wr16(arg1 + 0x258u, loc_10 >> 0x10u);
    wr16(arg1 + 0x25au, (uint16_t)loc_c);
    wr16(arg1 + 0x25eu, (uint16_t)ecx);
    wr16(arg1 + 0x260u, (uint16_t)eax);
    wr16(arg1 + 0x262u, (uint16_t)edx);
    t19 = rd32(arg1 + 0x120u) | 0x100000u;
    wr32(arg1 + 0x120u, t19);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ab9a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100ab9a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
