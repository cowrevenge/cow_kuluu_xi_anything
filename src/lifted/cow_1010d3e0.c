/* f_0x1010d3e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1010d3e0(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    ecx = 0u;
    esi = rd32(self + 0x34u);
L_1010d3ed: ;
    if (rd32(esi + 4u) == 0u) goto L_1010d404;
    if (rd32(esi + 8u) == 0u) goto L_1010d404;
    eax = rd32(esi + 8u);
    if ((uint16_t)ecx >= rd16(self + 0x44u)) goto L_1010d404;
    ecx = ecx + 1u;
    esi = eax;
    goto L_1010d3ed;
L_1010d404: ;
    wr16(self + 0x44u, (uint16_t)ecx);
    if (rd32(esi + 4u) == 0u)
    {
        edx = in_edx;
        goto L_1010d4b1;
    }
    if (rd32(esi + 8u) != 0u)
    {
        wr8(rd32(esi), rd8(sp0 + 8u));
        if (rd32(esi + 8u) != 0u)
        {
            eax = rd32(esi + 8u);
            esi = eax;
        }
        wr16(self + 0x44u, (uint16_t)(rd16(self + 0x44u) + 1u));
    }
    if (rd32(esi + 4u) == 0u)
    {
        edx = in_edx;
        goto L_1010d4b1;
    }
    if (rd32(esi + 8u) == 0u)
    {
        edx = in_edx;
        goto L_1010d4b1;
    }
    if (rd32(rd32(rd32(esi) + 4u) + 4u) != arg1)
    {
        edx = rd32(esi);
        goto L_1010d45b;
    }
    wr16(self + 0x48u, 0u);
    wr16(self + 0x46u, 0u);
    return rd32(rd32(esi) + 4u);
L_1010d45b: ;
    if (rd32(esi + 4u) == 0u) goto L_1010d4b1;
    if (rd32(esi + 8u) == 0u) goto L_1010d4b1;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1010d350u), self, 1, rd32(esi));
    t1 = g->edx;
    if (rd32(esi + 4u) == 0u)
    {
        edx = t1;
        edi = esi;
        esi = rd32(esi + 8u);
    }
    else
    {
        eax = rd32(esi + 4u);
        edx = t1;
        edi = esi;
        esi = rd32(esi + 8u);
        t2 = rd32(edi + 8u);
        wr32(eax + 8u, t2);
    }
    if (rd32(edi + 8u) == 0u)
    {
        eax = rd32(edi + 8u);
    }
    else
    {
        eax = rd32(edi + 8u);
        t3 = rd32(edi + 4u);
        wr32(eax + 4u, t3);
        edx = t3;
    }
    wr32(edi + 8u, 0u);
    wr32(edi + 4u, 0u);
    if (rd8(self + 0x28u) == 0u)
    {
        wr32(edi, 0u);
    }
    g->edi = edi;
    g->ebp = self;
    g->esp = sp0 - 0x10u;
    t4 = cow_call_regs(g, COW_IMG(0x1010e7c0u), eax, edi, edx, 1, 0);
    t5 = g->ecx;
    t6 = g->edx;
    g->edx = t6;
    cow_cdecl(g, COW_IMG(0x101086b0u), 1, edi);
    t7 = g->edx;
    wr16(self + 0x2au, (uint16_t)(rd16(self + 0x2au) - 1u));
    edx = t7;
    goto L_1010d45b;
L_1010d4b1: ;
    g->edx = edx;
    t8 = rd32(self);
    g->esp = sp0 - 0x10u;
    t9 = cow_thiscall(g, COW_IMG(0x1010b690u), t8, 1, arg1);
    t10 = g->ecx;
    t11 = g->edx;
    wr32(sp0 + 8u, t9);
    if (t9 == 0u)
    {
        edi = t9;
    }
    else
    {
        ecx = t10;
        edx = t11;
        edi = t9;
        wr16(self + 0x48u, 0u);
        wr16(self + 0x46u, 0u);
        g->esp = sp0 - 8u;
        t12 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x28u, in_edi, in_esi);
        t13 = g->ecx;
        t14 = g->edx;
        if (t12 == 0u)
        {
            eax = t12;
            ecx = t13;
            edx = t14;
            edi = 0u;
        }
        else
        {
            eax = t12;
            wr32(eax + 0x10u, 0u);
            wr32(eax + 0x18u, 0u);
            wr32(eax + 0x14u, 0u);
            wr32(eax + 0x1cu, 0u);
            wr32(eax + 0x24u, 0u);
            wr32(eax + 0x20u, 0u);
            wr32(eax + 8u, COW_IMG(0x10332e88u));
            wr8(eax + 0xcu, 0u);
            wr32(eax + 0x18u, eax + 0x1cu);
            wr32(eax + 0x20u, eax + 0x10u);
            wr16(eax + 0xeu, 0u);
            wr32(eax + 4u, edi);
            wr8(eax, 0u);
            ecx = eax + 0x10u;
            edx = eax + 0x1cu;
            edi = eax;
        }
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t15 = cow_call_regs(g, COW_IMG(0x101085e0u), g->eax, g->ecx, edx, 1, 1, 0xcu);
        if (t15 == 0u)
        {
            eax = 0u;
        }
        else
        {
            eax = t15;
            wr32(eax, edi);
            wr32(eax + 8u, 0u);
            wr32(eax + 4u, 0u);
        }
        t16 = rd32(esi + 4u);
        wr32(eax + 8u, esi);
        wr32(eax + 4u, t16);
        if (t16 != 0u)
        {
            ecx = t16;
            wr32(ecx + 8u, eax);
        }
        if (rd32(eax + 8u) != 0u)
        {
            ecx = rd32(eax + 8u);
            wr32(ecx + 4u, eax);
        }
        wr16(self + 0x2au, (uint16_t)(rd16(self + 0x2au) + 1u));
        edi = rd32(sp0 + 8u);
    }
    g->edi = in_edi;
    g->ebp = in_ebp;
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010d3e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010d3e0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
