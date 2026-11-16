/* f_0x101eb390 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101eb390(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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

    g->edi = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x101f67c0u), self, 1, 0u);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(self, COW_IMG(0x10339d78u));
    wr32(self + 0x50u, 0xffffffffu);
    wr32(self + 0x5cu, 0u);
    wr32(self + 0x60u, 0u);
    wr8(self + 0x58u, 0u);
    wr32(self + 0xa4u, 0u);
    wr8(self + 0xa8u, 0u);
    if (rd32(COW_IMG(0x10663688u)) != 0u)
    {
        ecx = t1;
        edx = t2;
    }
    else
    {
        ecx = t1;
        edx = t2;
        g->esp = sp0 - 8u;
        t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x60u, in_edi, in_esi);
        t4 = g->ecx;
        t5 = g->edx;
        if (t3 == 0u)
        {
            ecx = t4;
            edx = t5;
            wr32(COW_IMG(0x10663688u), 0u);
        }
        else
        {
            eax = t3;
            edx = t5;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t6 = cow_thiscall(g, COW_IMG(0x101eb7e0u), eax, 0);
            t7 = g->ecx;
            t8 = g->edx;
            wr32(COW_IMG(0x10663688u), t6);
            ecx = t7;
            edx = t8;
        }
    }
    if (rd32(COW_IMG(0x1066368cu)) == 0u)
    {
        g->esp = sp0 - 8u;
        t9 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
        t10 = g->ecx;
        t11 = g->edx;
        if (t9 == 0u)
        {
            ecx = t10;
            edx = t11;
            wr32(COW_IMG(0x1066368cu), 0u);
        }
        else
        {
            eax = t9;
            edx = t11;
            esi = t9;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t12 = g->ecx;
            t13 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10339d30u));
            wr32(COW_IMG(0x1066368cu), esi);
            ecx = t12;
            edx = t13;
        }
    }
    if (rd32(COW_IMG(0x10663690u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t14 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1cu, in_edi, in_esi);
        t15 = g->ecx;
        t16 = g->edx;
        if (t14 == 0u)
        {
            ecx = t15;
            edx = t16;
            wr32(COW_IMG(0x10663690u), 0u);
        }
        else
        {
            eax = t14;
            edx = t16;
            esi = t14;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t17 = g->ecx;
            t18 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10339ce8u));
            wr32(COW_IMG(0x10663690u), esi);
            ecx = t17;
            edx = t18;
        }
    }
    if (rd32(COW_IMG(0x10663694u)) != 0u) goto L_101eb4ae;
    g->esp = sp0 - 8u;
    t19 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1cu, in_edi, in_esi);
    t20 = g->edx;
    if (t19 == 0u) goto L_101eb4a8;
    eax = t19;
    edx = t20;
    esi = t19;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
    wr16(esi + 0xeu, 0xffffu);
    wr32(esi + 8u, 0u);
    wr8(esi + 0xcu, 1u);
    wr32(esi, COW_IMG(0x10339ca0u));
    wr32(COW_IMG(0x10663694u), esi);
    g->edi = in_edi;
    return self;
L_101eb4a8: ;
    wr32(COW_IMG(0x10663694u), 0u);
L_101eb4ae: ;
    g->edi = in_edi;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101eb390(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101eb390(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
