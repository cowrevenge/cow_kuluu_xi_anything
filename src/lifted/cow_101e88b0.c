/* f_0x101e88b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101e88b0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
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

    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x105781f8u));
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1013a320u), t1, 2, 0u, 2u);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    cow_cdecl(g, COW_IMG(0x101e8500u), 1, 3u);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x101efb20u), self, 0);
    t6 = g->edx;
    if (t5 != 0u)
    {
        eax = t5;
        edx = t6;
        goto L_101e890a;
    }
    eax = t5;
    edx = t6;
    wr32(self + 0x16cu, 0xffffffffu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, COW_IMG(0x101e6f70u), self, 0);
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381f5cu));
    t10 = g->edx;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381f48u));
    return;
L_101e890a: ;
    if (rd32(self + 0x16cu) == (uint32_t)(int16_t)rd16(rd32(eax + 0x1cu)))
    {
        edi = rd32(eax + 0x1cu);
    }
    else
    {
        edi = rd32(eax + 0x1cu);
        eax = (uint32_t)(int16_t)rd16(rd32(eax + 0x1cu));
        wr32(self + 0x16cu, eax);
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x101e6eb0u), self, 1, eax);
        t11 = g->edx;
        if (rd32(self + 0x16cu) != rd32(self + 0x170u))
        {
            edx = t11;
        }
        else
        {
            eax = rd32(self + 0x16cu);
            edx = t11;
            t12 = rd32(self + 0x174u);
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_thiscall(g, COW_IMG(0x101e6e50u), self, 1, t12);
            t13 = g->edx;
            edx = t13;
        }
    }
    if (rd16(edi) != 1u)
    {
        edi = (edi & 0xffff0000u) | rd16(edi);
        goto L_101e8984;
    }
    if (rd32(COW_IMG(0x10663678u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10663678u));
        wr32(eax + 0x18u, 1u);
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t14 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10381f48u), 1u, 0u);
    t15 = g->edx;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381f5cu));
    return;
L_101e8984: ;
    if (rd32(COW_IMG(0x10663674u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10663674u));
        wr32(eax + 0x18u, (uint32_t)(int16_t)edi);
        edx = (uint32_t)(int16_t)edi;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t16 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10381f5cu), 1u, 0u);
    t17 = g->edx;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381f48u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e88b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e88b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
