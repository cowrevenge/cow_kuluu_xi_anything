/* f_0x101e4a20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101e4a20(Guest* g)
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

    g->edi = 0u;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x101f67c0u), self, 1, 0u);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(self, COW_IMG(0x10339698u));
    if (rd32(COW_IMG(0x10663544u)) != 0u)
    {
        ecx = t1;
        edx = t2;
    }
    else
    {
        ecx = t1;
        edx = t2;
        g->esp = sp0 - 8u;
        t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x18u, in_edi, in_esi);
        t4 = g->ecx;
        t5 = g->edx;
        if (t3 == 0u)
        {
            ecx = t4;
            edx = t5;
            wr32(COW_IMG(0x10663544u), 0u);
        }
        else
        {
            eax = t3;
            edx = t5;
            esi = t3;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t6 = g->ecx;
            t7 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10339650u));
            wr32(COW_IMG(0x10663544u), esi);
            ecx = t6;
            edx = t7;
        }
    }
    if (rd32(COW_IMG(0x10663548u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t8 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x18u, in_edi, in_esi);
        t9 = g->ecx;
        t10 = g->edx;
        if (t8 == 0u)
        {
            ecx = t9;
            edx = t10;
            wr32(COW_IMG(0x10663548u), 0u);
        }
        else
        {
            eax = t8;
            edx = t10;
            esi = t8;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t11 = g->ecx;
            t12 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10339608u));
            wr32(COW_IMG(0x10663548u), esi);
            ecx = t11;
            edx = t12;
        }
    }
    if (rd32(COW_IMG(0x1066354cu)) == 0u)
    {
        g->esp = sp0 - 8u;
        t13 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x18u, in_edi, in_esi);
        t14 = g->ecx;
        t15 = g->edx;
        if (t13 == 0u)
        {
            ecx = t14;
            edx = t15;
            wr32(COW_IMG(0x1066354cu), 0u);
        }
        else
        {
            eax = t13;
            edx = t15;
            esi = t13;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t16 = g->ecx;
            t17 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x103395c0u));
            wr32(COW_IMG(0x1066354cu), esi);
            ecx = t16;
            edx = t17;
        }
    }
    if (rd32(COW_IMG(0x10663550u)) != 0u) goto L_101e4b3d;
    g->esp = sp0 - 8u;
    t18 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x18u, in_edi, in_esi);
    t19 = g->edx;
    if (t18 == 0u) goto L_101e4b37;
    eax = t18;
    edx = t19;
    esi = t18;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
    wr16(esi + 0xeu, 0xffffu);
    wr32(esi + 8u, 0u);
    wr8(esi + 0xcu, 1u);
    wr32(esi, COW_IMG(0x10339578u));
    wr32(COW_IMG(0x10663550u), esi);
    g->edi = in_edi;
    return self;
L_101e4b37: ;
    wr32(COW_IMG(0x10663550u), 0u);
L_101e4b3d: ;
    g->edi = in_edi;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e4a20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e4a20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
