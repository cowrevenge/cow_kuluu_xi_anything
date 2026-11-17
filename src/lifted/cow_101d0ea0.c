/* f_0x101d0ea0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101d0ea0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_204;
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
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 576u);

    wr32(sp0 - 0x204u, in_ebx);
    wr8(sp0 - 0x200u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x204u;
    t1 = cow_thiscall(g, COW_IMG(0x100dbe10u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x208u, t1);
    g->esp = sp0 - 0x1fcu;
    t4 = cow_cdecl(g, COW_IMG(0x101c8d10u), 3, t1, in_ebx, rd32(sp0 - 0x200u));
    if (t4 == 0u)
    {
        eax = t4;
        ecx = t4;
        loc_204 = in_ebx;
    }
    else
    {
        ecx = t4;
        wr32(sp0 - 0x208u, in_esi);
        t5 = cow_divs(g, (uint32_t)(int8_t)rd8(COW_IMG(0x1066317au)), 0xau);
        t6 = cow_mods(g, (uint32_t)(int8_t)rd8(COW_IMG(0x1066317au)), 0xau);
        wr32(sp0 - 0x20cu, t6 + 0x61u);
        wr32(sp0 - 0x210u, rd32(ecx));
        t7 = rd32(ecx + 4u);
        wr32(sp0 - 0x214u, t7);
        t8 = rd32(ecx + 8u);
        wr32(sp0 - 0x218u, t8);
        t9 = rd32(ecx + 0xcu);
        wr32(sp0 - 0x21cu, t9);
        t10 = rd32(ecx + 0x10u) + 1u;
        wr32(sp0 - 0x220u, t10);
        t11 = cow_divs(g, rd32(ecx + 0x14u) + 0x76cu, 0x64u);
        t12 = cow_mods(g, rd32(ecx + 0x14u) + 0x76cu, 0x64u);
        wr32(sp0 - 0x224u, t12);
        t13 = rd8(rd32(COW_IMG(0x104dfd98u)) + 0x3c3a6u);
        wr32(sp0 - 0x228u, t13);
        t14 = rd8(rd32(COW_IMG(0x104dfd98u)) + 0x3c3a5u);
        wr32(sp0 - 0x22cu, t14);
        t15 = rd8(rd32(COW_IMG(0x104dfd98u)) + 0x3c3a4u);
        wr32(sp0 - 0x230u, t15);
        wr32(sp0 - 0x234u, COW_IMG(0x1037e8b8u));
        wr32(sp0 - 0x238u, sp0 - 0x200u);
        g->ebx = 0u;
        g->eax = sp0 - 0x200u;
        g->ecx = t14;
        g->edx = t15;
        g->esp = sp0 - 0x224u;
        t16 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x200u, COW_IMG(0x1037e8b8u), t15, t14, t13);
        t17 = g->ecx;
        t18 = g->edx;
        g->ecx = t17;
        g->edx = t18;
        g->esp = sp0 - 0x238u;
        t19 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
        t20 = g->ecx;
        t21 = g->edx;
        wr32(sp0 - 0x23cu, t19);
        g->edx = t21;
        t22 = cow_cdecl(g, COW_IMG(0x10103b30u), 1, t19);
        t23 = g->edx;
        if ((uint32_t)(int8_t)rd8(COW_IMG(0x1037e862u)) != t22)
        {
            eax = t22;
            ecx = (uint32_t)(int8_t)rd8(COW_IMG(0x1037e862u));
            edx = t23;
            wr8(COW_IMG(0x1066317au), 0u);
        }
        else
        {
            eax = t22;
            ecx = (uint32_t)(int8_t)rd8(COW_IMG(0x1037e862u));
            edx = t23;
            wr8(COW_IMG(0x1066317au), (uint8_t)(rd8(COW_IMG(0x1066317au)) + 1u));
        }
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x204u;
        t24 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
        t25 = g->ecx;
        t26 = g->edx;
        wr32(sp0 - 0x208u, t24);
        g->ecx = t25;
        t27 = cow_cdecl(g, COW_IMG(0x10103b30u), 1, t24);
        t28 = g->ecx;
        wr8(COW_IMG(0x1037e862u), (uint8_t)t27);
        eax = t27;
        ecx = t28;
        loc_204 = rd32(sp0 - 0x204u);
    }
    if (rd8(sp0 - 0x200u) == 0u) goto L_101d0ff3;
    wr32(sp0 - 0x208u, sp0 - 0x200u);
    wr32(sp0 - 0x20cu, COW_IMG(0x1037e8b0u));
    wr32(sp0 - 0x210u, sp0 - 0x100u);
    g->ebx = 0u;
    g->ecx = ecx;
    g->edx = sp0 - 0x200u;
    g->esp = sp0 - 0x1fcu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037e8b0u), sp0 - 0x200u, loc_204, rd32(sp0 - 0x200u));
    t29 = g->ecx;
    t30 = g->edx;
    if (arg1 != 0u)
    {
        ecx = t29;
        goto L_101d0faf;
    }
    edx = t30;
    wr32(sp0 - 0x208u, sp0 - 0x100u);
    g->ebx = 0u;
    g->eax = arg1;
    g->esp = sp0 - 0x204u;
    t31 = cow_cdecl(g, COW_IMG(0x101d1000u), 1, sp0 - 0x100u);
    g->ebx = rd32(sp0 - 0x204u);
    return t31;
L_101d0faf: ;
    if (arg1 != 1u)
    {
        eax = arg1;
        loc_204 = rd32(sp0 - 0x204u);
        goto L_101d0ff3;
    }
    if (rd8(COW_IMG(0x10456ae0u)) == 0u)
    {
        eax = arg1;
        loc_204 = rd32(sp0 - 0x204u);
        goto L_101d0ff3;
    }
    if (rd32(COW_IMG(0x10456a84u)) == 0u)
    {
        eax = arg1;
        loc_204 = rd32(sp0 - 0x204u);
        goto L_101d0ff3;
    }
    wr32(sp0 - 0x208u, sp0 - 0x200u);
    wr32(sp0 - 0x20cu, COW_IMG(0x1037e89cu));
    wr32(sp0 - 0x210u, sp0 - 0x100u);
    g->ebx = 0u;
    g->eax = sp0 - 0x100u;
    g->edx = sp0 - 0x200u;
    g->esp = sp0 - 0x1fcu;
    t32 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037e89cu), sp0 - 0x200u, rd32(sp0 - 0x204u), rd32(sp0 - 0x200u));
    t33 = g->edx;
    wr32(sp0 - 0x214u, sp0 - 0x100u);
    g->ebx = 0u;
    g->esp = sp0 - 0x210u;
    t34 = cow_cdecl(g, COW_IMG(0x101d1100u), 1, sp0 - 0x100u);
    g->ebx = rd32(sp0 - 0x204u);
    return t34;
L_101d0ff3: ;
    g->ebx = loc_204;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d0ea0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d0ea0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
