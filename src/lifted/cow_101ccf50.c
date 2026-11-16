/* f_0x101ccf50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101ccf50(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
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
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
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
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 180u);

    wr32(sp0 - 0x94u, in_ebx);
    wr32(sp0 - 0x98u, in_ebp);
    wr32(sp0 - 0x9cu, in_esi);
    wr32(sp0 - 0xa0u, in_edi);
    if ((int32_t)rd32(self + 0x6cu) <= 0)
    {
        ebp = rd32(self + 0x6cu);
    }
    else
    {
        ebp = rd32(self + 0x6cu);
        esi = self + 0x70u;
        edi = sp0 - 0x90u;
        ecx = ebp;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    }
    if (arg1 != 5u) goto L_101ccfc4;
    wr32(sp0 - 0xa4u, self);
    g->ebx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xa0u;
    cow_thiscall(g, COW_IMG(0x101d5e50u), rd32(COW_IMG(0x106631d4u)), 1, self);
    t1 = g->edx;
    wr8(self + 0x2cu, 1u);
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x101cebf0u), self, 0);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u) goto L_101cd051;
    eax = t2;
    edx = t3;
    if ((int32_t)ebp <= 0) goto L_101cd051;
    esi = 0u;
L_101ccfa3: ;
    if (rd32(esi * 4u + sp0 - 0x90u) != 0u)
    {
        ecx = rd32(esi * 4u + sp0 - 0x90u);
        wr32(sp0 - 0xa4u, 5u);
        g->edx = edx;
        g->esp = sp0 - 0xa0u;
        t4 = cow_call_regs(g, COW_IMG(0x101ccf50u), eax, ecx, g->edx, 0, 1, 5u);
        t5 = g->edx;
        eax = t4;
        edx = t5;
    }
    if ((int32_t)(esi + 1u) < (int32_t)ebp)
    {
        esi = esi + 1u;
        goto L_101ccfa3;
    }
    g->ebx = rd32(sp0 - 0x94u);
    g->esi = rd32(sp0 - 0x9cu);
    g->edi = rd32(sp0 - 0xa0u);
    g->ebp = rd32(sp0 - 0x98u);
    return;
L_101ccfc4: ;
    t6 = (in_eax & 0xffffff00u) | rd8(self + 5u);
    wr32(sp0 - 0xa4u, t6);
    t7 = rd32(self + 0x10u);
    wr32(sp0 - 0xa8u, t7);
    g->edx = in_edx;
    g->esp = sp0 - 0xa0u;
    t8 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, t7, t6);
    t9 = g->edx;
    wr8(self + 6u, rd8(t8 + 0x11u) & 3u);
    t10 = (uint32_t)(int8_t)rd8(t8 + 0x16u);
    wr32(self + 0x14u, t10);
    t11 = (uint32_t)(int8_t)rd8(t8 + 0x17u);
    wr32(self + 0x18u, t11);
    t12 = (uint32_t)(int8_t)rd8(t8 + 0x18u);
    wr32(self + 0x1cu, t12);
    wr32(sp0 - 0xa4u, t12);
    t13 = (uint32_t)(int8_t)rd8(t8 + 0x19u);
    t14 = rd32(self + 0x18u);
    wr32(self + 0x20u, t13);
    wr32(sp0 - 0xa8u, t14);
    t15 = rd32(self + 0x14u);
    wr32(sp0 - 0xacu, t15);
    t16 = (uint32_t)(int8_t)rd8(self + 6u);
    wr32(sp0 - 0xb0u, t16);
    g->eax = t16;
    g->edx = t15;
    t17 = cow_thiscall(g, COW_IMG(0x101cdd90u), self, 4, t16, t15, t14, t12);
    t18 = g->edx;
    t19 = rd32(self + 0x20u);
    wr32(sp0 - 0xa4u, t19);
    g->edx = t18;
    t20 = cow_thiscall(g, COW_IMG(0x101cdf50u), self, 1, t19);
    t21 = g->edx;
    wr32(sp0 - 0xa4u, self);
    g->ebx = self;
    g->edx = t21;
    cow_thiscall(g, COW_IMG(0x101d5e50u), rd32(COW_IMG(0x106631d4u)), 1, self);
    t22 = g->edx;
    g->edx = t22;
    t23 = cow_thiscall(g, COW_IMG(0x101cebf0u), self, 0);
    t24 = g->edx;
    if ((uint8_t)t23 != 0u)
    {
        eax = t23;
        edx = t24;
        wr32(self + 0x6cu, 0u);
        if ((int32_t)ebp <= 0) goto L_101cd051;
        esi = 0u;
L_101cd03e: ;
        if (rd32(esi * 4u + sp0 - 0x90u) != 0u)
        {
            ecx = rd32(esi * 4u + sp0 - 0x90u);
            wr32(sp0 - 0xa4u, arg1);
            g->edx = edx;
            g->esp = sp0 - 0xa0u;
            t25 = cow_call_regs(g, COW_IMG(0x101ccf50u), eax, ecx, g->edx, 0, 1, arg1);
            t26 = g->edx;
            eax = t25;
            edx = t26;
        }
        if ((int32_t)(esi + 1u) < (int32_t)ebp)
        {
            esi = esi + 1u;
            goto L_101cd03e;
        }
    }
L_101cd051: ;
    g->ebx = rd32(sp0 - 0x94u);
    g->esi = rd32(sp0 - 0x9cu);
    g->edi = rd32(sp0 - 0xa0u);
    g->ebp = rd32(sp0 - 0x98u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ccf50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101ccf50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
